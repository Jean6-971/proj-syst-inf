%{
#include <stdlib.h>
#include <stdio.h>
int var[26];
void yyerror(char *s);
%}

%union { int nb; char var[16]; }
%token tMAIN tAO tAF tCONST tINT tEGAL tSOU tADD tMUL tDIV tPO tPF tV tFI tPRINTF tIF tELSE tWHILE tERROR tRETURN tVOID tINF tSUP tSUPEGAL tINFEGAL tDIF tG
%token <nb> tNB
%token <var> tID
%type <nb> Calcul DivMul Terme Valeur
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
Parametre : tID | tNB;
Valeur : tID | tNB | Calcul | AppelFonction;
BodyRet: Body tRETURN Valeur tFI { printf("Return : %d\n",$3); };
        
Body : 
     
		| Declaration Body
		| Initialisation Body
		| Affectation Body
		| BrancheIf Body
		| BrancheWhile Body
		| Printf Body
		| AppelFonction tFI Body;
Declaration : tINT tID tFI { printf("Declaration : %s\n",$2); };
Initialisation : tINT tID tEGAL Valeur tFI { printf("Initialisation directe, par variable, par calcul ou par appel de fonction: %s = %d\n",$2,$4);};
        
Affectation : tID tEGAL Valeur tFI { printf("Initialisation directe, par variable, par calcul ou par appel de fonction: %s = %d\n",$1,$3);};

BrancheIf : tIF tPO Conditions tPF tAO Body tAF BranchesElseif { printf("Branche if\n");};
Conditions : Valeur Comparateur Valeur
        | Valeur
		| Valeur Comparateur Valeur Conditions
        | Valeur Conditions;
Comparateur : tEGAL | tINF | tSUP | tINFEGAL | tSUPEGAL | tDIF;  
BranchesElseif : 
        | tELSE tIF tPO Conditions tPF tAO Body tAF BranchesElseif { printf("Branche else if\n");}
		| tELSE tAO Body tAF{ printf("Branche else\n");};
BrancheWhile : tWHILE tPO Conditions tPF tAO Body tAF { printf("Branche while\n"); };
Printf : tPRINTF tPO tG tID tG tPF tFI { printf("printf : %s \n", $4); };        
AppelFonction : tID tPO Arguments tPF { printf("Appel fonction : %s\n", $1);};
Arguments : 
        | ListeArguments;        
ListeArguments : Valeur
    | Valeur tV ListeArguments;
    
Calcul : Calcul tADD DivMul 
		| Calcul tSOU DivMul 
		| DivMul  ;
DivMul :	  DivMul tMUL Terme 
		| DivMul tDIV Terme 
		| Terme  ;
Terme :		  tPO Calcul tPF 
		| tID 
		| tNB
		| AppelFonction ;
		
%%

void yyerror(char *s) { fprintf(stderr, "%s\n", s); }

int main(void) {
	/* yydebug=1; */
  	printf("Compilateur\n");
  	yyparse();
 	return 0;
}
