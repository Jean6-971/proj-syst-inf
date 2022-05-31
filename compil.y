%{
#include <stdlib.h>
#include <stdio.h>
#include "tableSymbole.h"
#include "TableInstruction.h"
#include "Interpreteur.h"
#include "TableFonction.h"
int var[26];
void yyerror(char *s);

%}

%union { int nb; char var[16]; }
%token tMAIN tAO tAF tCONST tEGAL tSOU tADD tMUL tDIV tPO tPF tV tFI tPRINTF tRETURN tINF tSUP
%token <nb> tNB tIF tELSE tWHILE tVOID tINT
%token <var> tID 
%type <nb> Calcul DivMul Terme AppelFonction 
%start Programme


%%

Programme : Fonctions  { printf("Programme\n"); };
Fonctions : Fonctions Main { printf("Fonctions Main\n"); }
		| Main { printf("Main\n"); }
		| Fonctions Fonction { printf("Fonctions Fonction\n"); }
		| Fonction { printf("Fonction\n"); };
Fonction : tINT tID { Add_instruction2(JMP , -1); $1 = get_nb_instructions() + 1;} tPO ArgumentsDeclaration tPF tAO {set_TS_func_mode();} BodyRet {set_TS_normal_mode();} tAF { printf("Fonction %s avec return\n",$2); patchJMP(get_nb_instructions()+2);  Add_instruction2(JMP , -1); Add_Function($2, $1, get_nb_instructions());}
        | tVOID tID { Add_instruction2(JMP , -1); $1 = get_nb_instructions() + 1;} tPO ArgumentsDeclaration tPF tAO {set_TS_func_mode();} Body {set_TS_normal_mode();} tAF { printf("Fonction %s sans return\n",$2); patchJMP(get_nb_instructions()+2);  Add_instruction2(JMP , -1); Add_Function($2, $1, get_nb_instructions());};
ArgumentsDeclaration : 
        | ListeArgumentsDeclaration;        
ListeArgumentsDeclaration : tINT tID { Add_symb_func($2, get_addr_argument(), "int", true); reset_addr_argument();}
    | tINT tID tV { Add_symb_func($2, get_addr_argument(), "int", true);} ListeArgumentsDeclaration; 
Main : tINT tMAIN tPO tPF tAO BodyRet tAF { printf("Main avec return\n"); }
		| tVOID tMAIN tPO tPF tAO Body tAF { printf("Main sans return \n"); }
		| tMAIN tPO tPF tAO Body tAF { printf("Main sans rien \n"); };

BodyRet: Body tRETURN Calcul tFI { Add_instruction3(COP, 1000, Get_addr_top()); free_temp_top();};
        
Body : 

		| Declaration Body
		| Initialisation Body
		| Affectation Body
		| BrancheIf Body
		| BrancheWhile Body
		| Printf Body
		| AppelFonction tFI Body;

MultDeclaInit : tID tFI { printf("Declaration : %s\n",$1); Add_symb($1, "int", false); }
			| tID { printf("Declaration : %s\n",$1); Add_symb($1, "int", false); } tV MultDeclaInit ;
			| tID {printf("Initialisation  : %s = ",$1); Add_symb($1, "int", true);} tEGAL Calcul {printf("%d\n",$4); Add_instruction3(COP, Get_addr($1), Get_addr_top()); free_temp_top();} FinInitialisation
			

Declaration : tINT tID  { printf("Declaration : %s\n",$2); Add_symb($2, "int", false); } tFI
			| tINT tID  { printf("Declaration : %s\n",$2); Add_symb($2, "int", false); } tV  MultDeclaInit ; // Intéressant de parler de la diff d'implementation entre les deux

// REMARQUE RAPPORT : le Add_symb($2, "int", true) décale l'index des $ (et la considère comme une valeur)
Initialisation : tINT tID {printf("Initialisation  : %s = ",$2); Add_symb($2, "int", true);} tEGAL Calcul {printf("iciiii%d\n",$5); Add_instruction3(COP, Get_addr($2), Get_addr_top()); free_temp_top();} FinInitialisation;

FinInitialisation : tFI            // TRES INTERESSANT POUR LE RAPPORT (obligatoire sinon ça bug à cause du Calcul, à comparer avec décla)
				| tV MultDeclaInit;

Affectation : tID tEGAL Calcul tFI { printf("Affectation directe, par variable, par calcul ou par appel de fonction: %s = %d\n",$1,$3); Add_instruction3(COP, Get_addr($1), Get_addr_top()); free_temp_top(); Set_init_symbole($1);};
// Remarque rapport : différent type d'indexage, entre get_nb_instructions() et current_instruction dans l'interpreteur + incrémentation inutile dans l'interpreteur pour JMP JMF
BrancheIf :tIF tPO Conditions tPF { Add_instruction3(JMF , Get_addr_top(), -1); free_temp_top(); Inc_depth(); } tAO Body tAF BranchesElseif;

Conditions : Calcul tEGAL tEGAL Calcul { printf("Comparaison ==\n"); Add_instruction4(EQU, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
		| Calcul tINF Calcul { printf("Comparaison <\n"); Add_instruction4(INF, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
        | Calcul tSUP Calcul { printf("Comparaison >\n"); Add_instruction4(SUP, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
        | Calcul { printf("Comparaison true or false\n"); Add_instruction4(EQU, Get_addr_second(), 1, Get_addr_top());};
		/*| Calcul tEGAL tEGAL Calcul Conditions {}//A MODIFIER
		| Calcul tINF Calcul Conditions {}
		| Calcul tSUP Calcul Conditions {}
        | Calcul Conditions;*/
 
BranchesElseif : {patchJMF(get_nb_instructions()+1); Dec_depth();}
		 | tELSE tIF  {patchJMF(get_nb_instructions()+2); Add_instruction2(JMP , -1);} tPO Conditions tPF { Add_instruction3(JMF , Get_addr_top(), -1); free_temp_top();} tAO Body tAF {patchJMP(get_nb_instructions()+1);} BranchesElseif;
		 | tELSE { patchJMF(get_nb_instructions()+2); Add_instruction2(JMP , -1);} tAO Body tAF {patchJMP(get_nb_instructions()+1); Print_ts(); Dec_depth(); printf("Branche else\n");}; 

BrancheWhile : tWHILE tPO Conditions tPF {  Add_instruction3(JMF , Get_addr_top(), -1); free_temp_top(); Inc_depth(); $1 = get_nb_instructions() - 3;} tAO Body tAF { patchJMF(get_nb_instructions()+2); Add_instruction2(JMP , $1); printf("Branche while\n"); };
Printf : tPRINTF tPO tID tPF tFI { printf("printf : %s \n", $3); Add_instruction2(PRI, Get_addr($3));}; 
AppelFonction : tID tPO Arguments tPF { Add_instruction2(JMP, get_numero_instru_debut($1)); patchJMP_fonction(get_numero_instru_fin($1), get_nb_instructions() + 1); printf("Appel fonction : %s\n", $1);};
Arguments : 
        | ListeArguments;        
ListeArguments : Calcul { Add_instruction3(COP, get_addr_argument(), Get_addr_top()); free_temp_top(); reset_addr_argument();}
    | Calcul tV { Add_instruction3(COP, get_addr_argument(), Get_addr_top()); free_temp_top();} ListeArguments;
    
Calcul : Calcul tADD DivMul { Add_instruction4(ADD, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
		| Calcul tSOU DivMul { Add_instruction4(SOU, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
		| DivMul  ;
DivMul :	  DivMul tMUL Terme { Add_instruction4(MUL, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
		| DivMul tDIV Terme { Add_instruction4(DIV, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
		| Terme ;
Terme :		  tPO Calcul tPF 
		| tID { Add_symb_temp("int"); Add_instruction3(COP, Get_addr_top(), Get_addr($1)) ; }
		| tNB { Add_symb_temp("int"); Add_instruction3(AFC, Get_addr_top(),$1) ; }
		|  AppelFonction { Add_symb_temp("int"); Add_instruction3(COP, Get_addr_top(), 1000);} ;
		
%%

void yyerror(char *s) { fprintf(stderr, "%s\n", s); }

int main(void) {
	/* yydebug=1; */ 
	InitTS();  
	InitTI(); 
	InitTF();
  	printf("Compilateur\n");
  	yyparse();
	Print_ts();
	Print_ti();
	interpreteur();
 	return 0;
}
