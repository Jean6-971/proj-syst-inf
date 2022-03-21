%{
#include <stdlib.h>
#include <stdio.h>
#include "tableSymbole.h"
#include "tableInstruction.h"
int var[26];
void yyerror(char *s);

%}

%union { int nb; char var[16]; }
%token tMAIN tAO tAF tCONST tINT tEGAL tSOU tADD tMUL tDIV tPO tPF tV tFI tPRINTF tIF tELSE tWHILE tERROR tRETURN tVOID tINF tSUP tSUPEGAL tINFEGAL tDIF tG
%token <nb> tNB
%token <var> tID 
%type <var> Parametre
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
		| tVOID tMAIN tPO tPF tAO Body tAF { printf("Main sans return \n"); };
		| tMAIN tPO tPF tAO Body tAF { printf("Main sans rien \n"); };

BodyRet: Body tRETURN Calcul tFI { printf("Return : %d\n",$3); };
        
Body : 
		| Declaration Body
		| Initialisation Body
		| Affectation Body
		| BrancheIf Body
		| BrancheWhile Body
		| Printf Body
		| AppelFonction tFI Body;

Declaration : tINT tID tFI { printf("Declaration : %s\n",$2); Add_symb($2, "int", false); };
Initialisation : tINT Parametre tEGAL Calcul tFI { printf("Initialisation directe, par variable, par calcul ou par appel de fonction: %s = %d\n",$2,$4); Add_instruction3(AFC, Get_addr($2), Get_addr_top()); free_temp_top();};
Parametre : tID { printf("Initialisation symbole: %s\n",$1); Add_symb($1, "int", true);};
Affectation : tID tEGAL Calcul tFI { printf("Affectation directe, par variable, par calcul ou par appel de fonction: %s = %d\n",$1,$3); Add_instruction3(COP, Get_addr($1), Get_addr_top()); free_temp_top(); Set_init_symbole($1);};

BrancheIf : tIF tPO Conditions tPF tAO Body tAF BranchesElseif { printf("Branche if\n");}; // Incrementer la profondeur ?
Conditions : Calcul Comparateur Calcul
        | Calcul
		| Calcul Comparateur Calcul Conditions {}//comparaison ??
        | Calcul Conditions;
Comparateur : tEGAL tEGAL | tINF | tSUP | tINFEGAL | tSUPEGAL | tDIF;  
BranchesElseif : 
        | tELSE tIF tPO Conditions tPF tAO Body tAF BranchesElseif { printf("Branche else if\n");}
		| tELSE tAO Body tAF{ printf("Branche else\n");};
BrancheWhile : tWHILE tPO Conditions tPF tAO Body tAF { printf("Branche while\n"); };
Printf : tPRINTF tPO tG tID tG tPF tFI { printf("printf : %s \n", $4); };        
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
 	return 0;
}
