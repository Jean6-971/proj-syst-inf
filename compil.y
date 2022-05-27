%{
#include <stdlib.h>
#include <stdio.h>
#include "tableSymbole.h"
#include "TableInstruction.h"
#include "Interpreteur.h"
int var[26];
void yyerror(char *s);

%}

%union { int nb; char var[16]; }
%token tMAIN tAO tAF tCONST tINT tEGAL tSOU tADD tMUL tDIV tPO tPF tV tFI tPRINTF tWHILE tERROR tRETURN tVOID tINF tSUP tG 
%token <nb> tNB tIF tELSE
%token <var> tID 
%type <nb> Calcul DivMul Terme AppelFonction 
%start Programme


%%

Programme : Fonctions  { printf("Programme\n"); };
Fonctions : Fonctions Main { printf("Fonctions Main\n"); }
		| Main { printf("Main\n"); }
		| Fonctions Fonction { printf("Fonctions Fonction\n"); }
		| Fonction { printf("Fonction\n"); };
Fonction : tINT tID tPO ArgumentsDeclaration tPF tAO BodyRet tAF { printf("Fonction %s avec return\n",$2); }
        | tVOID tID tPO ArgumentsDeclaration tPF tAO Body tAF { printf("Fonction %s sans return\n",$2); };
ArgumentsDeclaration : 
        | ListeArgumentsDeclaration;        
ListeArgumentsDeclaration : tINT tID
    | tINT tID tV ListeArgumentsDeclaration; 
Main : tINT tMAIN tPO tPF tAO BodyRet tAF { printf("Main avec return\n"); }
		| tVOID tMAIN tPO tPF tAO Body tAF { printf("Main sans return \n"); }
		| tMAIN tPO tPF tAO Body tAF { printf("Main sans rien \n"); };

BodyRet: Body tRETURN Calcul tFI { printf("Return : %d\n",$3); };
        
Body : 
		| MultDeclaInit Body
		| Declaration Body
		| Initialisation Body
		| Affectation Body
		| BrancheIf Body
		| BrancheWhile Body
		| Printf Body
		| AppelFonction tFI Body;

MultDeclaInit : tID tFI { printf("Declaration : %s\n",$1); Add_symb($1, "int", false); }
			| tID { printf("Declaration : %s\n",$1); Add_symb($1, "int", false); } tV MultDeclaInit ;
			| tID {printf("Affectation  : %s = ",$1); Add_symb($1, "int", true);} tEGAL Calcul {printf("%d\n",$4); Add_instruction3(COP, Get_addr($1), Get_addr_top()); free_temp_top();} FinInitialisation
			

Declaration : tINT tID { printf("Declaration : %s\n",$2); Add_symb($2, "int", false); } tFI
			| tINT tID { printf("Declaration : %s\n",$2); Add_symb($2, "int", false); } tV  MultDeclaInit ; // Intéressant de parler de la diff d'implementation entre les deux

// REMARQUE RAPPORT : le Add_symb($2, "int", true) décale l'index des $ (et la considère comme une valeur)
Initialisation : tINT tID {printf("Affectation  : %s = ",$2); Add_symb($2, "int", true);} tEGAL Calcul {printf("%d\n",$5); Add_instruction3(COP, Get_addr($2), Get_addr_top()); free_temp_top();} FinInitialisation;
FinInitialisation : tFI            // TRES INTERESSANT POUR LE RAPPORT (obligatoire sinon ça bug à cause du Calcul, à comparer avec décla)
				| tV MultDeclaInit;

Affectation : tID tEGAL Calcul tFI { printf("Affectation directe, par variable, par calcul ou par appel de fonction: %s = %d\n",$1,$3); Add_instruction3(COP, Get_addr($1), Get_addr_top()); free_temp_top(); Set_init_symbole($1);};

BrancheIf : tIF tPO Conditions tPF { Add_instruction3(JMF , Get_addr_top(), get_nb_instructions()+2); $1 = get_nb_instructions(); free_temp_top(); Inc_depth();} tAO Body {patchJMZ($1, get_nb_instructions()+1); Print_ts(); Dec_depth();} tAF { printf("Branche if\n");}
| tIF tPO Conditions tPF { Add_instruction3(JMF , Get_addr_top(), get_nb_instructions()+2); $1 = get_nb_instructions(); free_temp_top(); Inc_depth(); } tAO Body {patchJMZ($1, get_nb_instructions()+2); Print_ts(); Dec_depth();} tAF BranchesElseif { printf("Branche if\n");};
	
Conditions : Calcul tEGAL tEGAL Calcul { printf("Comparaison ==\n"); Add_instruction4(EQU, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
		| Calcul tINF Calcul { printf("Comparaison <\n"); Add_instruction4(INF, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
        | Calcul tSUP Calcul { printf("Comparaison >\n"); Add_instruction4(SUP, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
        | Calcul { printf("Comparaison true or false\n"); Add_instruction4(EQU, Get_addr_second(), 1, Get_addr_top());};
		/*| Calcul tEGAL tEGAL Calcul Conditions {}//A MODIFIER
		| Calcul tINF Calcul Conditions {}
		| Calcul tSUP Calcul Conditions {}
        | Calcul Conditions;*/
 
BranchesElseif :tELSE BrancheIf { printf("Branche else if\n");}
		| tELSE {Add_instruction3(JMP , Get_addr_top(), get_nb_instructions()+2); $1 = get_nb_instructions(); Inc_depth();} tAO Body tAF {patchJMP($1, get_nb_instructions()+1); Print_ts(); Dec_depth(); printf("Branche else\n");};

BrancheWhile : tWHILE tPO Conditions tPF tAO Body tAF { printf("Branche while\n"); };
Printf : tPRINTF tPO tID tPF tFI { printf("printf : %s \n", $3); Add_instruction2(PRI, Get_addr($3));}; 
AppelFonction : tID tPO Arguments tPF { printf("Appel fonction : %s\n", $1);};
Arguments : 
        | ListeArguments;        
ListeArguments : Calcul
    | Calcul tV ListeArguments;
    
Calcul : Calcul tADD DivMul { Add_instruction4(ADD, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
		| Calcul tSOU DivMul { Add_instruction4(SOU, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
		| DivMul  ;
DivMul :	  DivMul tMUL Terme { Add_instruction4(MUL, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
		| DivMul tDIV Terme { Add_instruction4(DIV, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
		| Terme ;
Terme :		  tPO Calcul tPF 
		| tID { Add_symb_temp("int"); Add_instruction3(COP, Get_addr_top(), Get_addr($1)) ; }
		| tNB { Add_symb_temp("int"); Add_instruction3(AFC, Get_addr_top(),$1) ; }
		| AppelFonction /* { Add_symb_temp($1, "int"); } */;
		
%%

void yyerror(char *s) { fprintf(stderr, "%s\n", s); }

int main(void) {
	/* yydebug=1; */ 
	InitTS();  
	InitTI(); 
  	printf("Compilateur\n");
  	yyparse();
	Print_ts();
	Print_ti();
	interpreteur();
 	return 0;
}
