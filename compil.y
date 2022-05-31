%{
#include <stdlib.h>
#include <stdio.h>
#include "tableSymbole.h"
#include "TableInstruction.h"
#include "Interpreteur.h"
#include "TableJump.h"
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

Programme : Fonctions;

Fonctions : Fonctions Main
		| Main
		| Fonctions Fonction 
		| Fonction;

Fonction : tINT tID { Add_instruction2(JMP , -1); Add_jump(get_nb_instructions()); $1 = get_nb_instructions() + 1;} tPO ArgumentsDeclaration tPF tAO {set_TS_func_mode();} BodyRet {set_TS_normal_mode();} tAF { patchJMP(pop_last_jump(), get_nb_instructions()+2);  Add_instruction2(JMP , -1); Add_Function($2, $1, get_nb_instructions());}
         | tVOID tID { Add_instruction2(JMP , -1); Add_jump(get_nb_instructions()); $1 = get_nb_instructions() + 1;} tPO ArgumentsDeclaration tPF tAO {set_TS_func_mode();} Body {set_TS_normal_mode();} tAF { patchJMP(pop_last_jump(), get_nb_instructions()+2);  Add_instruction2(JMP , -1); Add_Function($2, $1, get_nb_instructions());};

ArgumentsDeclaration : 
        			 | ListeArgumentsDeclaration;  

ListeArgumentsDeclaration : tINT tID { Add_symb_func($2, get_addr_argument(), "int", true); reset_addr_argument();}
    					  | tINT tID tV { Add_symb_func($2, get_addr_argument(), "int", true);} ListeArgumentsDeclaration; 

Main : tINT tMAIN tPO tPF tAO BodyRet tAF 
	 | tVOID tMAIN tPO tPF tAO Body tAF 
	 | tMAIN tPO tPF tAO Body tAF;

BodyRet: Body tRETURN Calcul tFI { Add_instruction3(COP, 1000, Get_addr_top()); free_temp_top();};
        
Body : 
	 | Declaration Body
	 | Initialisation Body
	 | Affectation Body
	 | BrancheIf Body
	 | BrancheWhile Body
	 | Printf Body
	 | AppelFonction tFI Body;

MultDeclaInit : tID tFI {Add_symb($1, "int", false); }
			  | tID {Add_symb($1, "int", false); } tV MultDeclaInit ;
			  | tID { Add_symb($1, "int", true);} tEGAL Calcul { Add_instruction3(COP, Get_addr($1), Get_addr_top()); free_temp_top();} FinInitialisation
			
Declaration : tINT tID  { Add_symb($2, "int", false); } tFI
			| tINT tID  { Add_symb($2, "int", false); } tV  MultDeclaInit ; 

Initialisation : tINT tID { Add_symb($2, "int", true);} tEGAL Calcul {Add_instruction3(COP, Get_addr($2), Get_addr_top()); free_temp_top();} FinInitialisation;

FinInitialisation : tFI            
				  | tV MultDeclaInit;

Affectation : tID tEGAL Calcul tFI { Add_instruction3(COP, Get_addr($1), Get_addr_top()); free_temp_top(); Set_init_symbole($1);};

BrancheIf : tIF tPO Conditions tPF { Add_instruction3(JMF , Get_addr_top(), -1); Add_jump(get_nb_instructions()); free_temp_top(); Inc_depth(); } tAO Body tAF BranchesElseif;

Conditions : Calcul tEGAL tEGAL Calcul { Add_instruction4(EQU, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
		   | Calcul tINF Calcul { Add_instruction4(INF, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
           | Calcul tSUP Calcul { Add_instruction4(SUP, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); };
	
BranchesElseif : {patchJMF(pop_last_jump(), get_nb_instructions()+1); Dec_depth();}
		 	   | tELSE tIF  {patchJMF(pop_last_jump(), get_nb_instructions()+2); Add_instruction2(JMP , -1); Add_jump(get_nb_instructions());} tPO Conditions tPF { Add_instruction3(JMF , Get_addr_top(), -1); Add_jump(get_nb_instructions()); free_temp_top();} tAO Body tAF {patchJMP(pop_before_last_jump(), get_nb_instructions()+1);} BranchesElseif;
		 	   | tELSE { patchJMF(pop_last_jump(), get_nb_instructions()+2); Add_instruction2(JMP , -1); Add_jump(get_nb_instructions());} tAO Body tAF {patchJMP(pop_last_jump(), get_nb_instructions()+1); Dec_depth();}; 

BrancheWhile : tWHILE tPO Conditions tPF {  Add_instruction3(JMF , Get_addr_top(), -1); Add_jump(get_nb_instructions()); free_temp_top(); Inc_depth(); $1 = get_nb_instructions() - 3;} tAO Body tAF { patchJMF(pop_last_jump(), get_nb_instructions()+2); Add_instruction2(JMP , $1); };

Printf : tPRINTF tPO tID tPF tFI { Add_instruction2(PRI, Get_addr($3));}; 

AppelFonction : tID tPO Arguments tPF { Add_instruction2(JMP, get_numero_instru_debut($1)); patchJMP_fonction(get_numero_instru_fin($1), get_nb_instructions() + 1);};

Arguments : 
          | ListeArguments;        

ListeArguments : Calcul { Add_instruction3(COP, get_addr_argument(), Get_addr_top()); free_temp_top(); reset_addr_argument();}
    		   | Calcul tV { Add_instruction3(COP, get_addr_argument(), Get_addr_top()); free_temp_top();} ListeArguments;
    
Calcul : Calcul tADD DivMul { Add_instruction4(ADD, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
	   | Calcul tSOU DivMul { Add_instruction4(SOU, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
	   | DivMul;

DivMul : DivMul tMUL Terme { Add_instruction4(MUL, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
	   | DivMul tDIV Terme { Add_instruction4(DIV, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
	   | Terme ;

Terme : tPO Calcul tPF 
	  | tID { Add_symb_temp("int"); Add_instruction3(COP, Get_addr_top(), Get_addr($1)) ; }
      | tNB { Add_symb_temp("int"); Add_instruction3(AFC, Get_addr_top(),$1) ; }
	  | AppelFonction { Add_symb_temp("int"); Add_instruction3(COP, Get_addr_top(), 1000);} ;
		
%%

void yyerror(char *s) { fprintf(stderr, "%s\n", s); }

int main(void) {
	InitTS();  
	InitTI(); 
	InitTF();
  	printf("\nCompilateur\n\n");
  	yyparse();
	Print_ts();
	Print_ti();
	printf("\nInterpreteur\n\n");
	interpreteur();
 	return 0;
}
