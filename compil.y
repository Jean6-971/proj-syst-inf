%{
#include <stdlib.h>
#include <stdio.h>
int var[26];
void yyerror(char *s);
%}

%union { int nb; char* var[16]; }
%token tMAIN tAO tAF tCONST tINT tEGAL tSOU tADD tMUL tDIV tPO tPF tV tFI tPRINTF tIF tELSE tWHILE tERROR
%token <nb> tNB
%token <var> tID
%type <nb> Calcul DivMul Terme
%start Programme

%%

Programme : Fonctions  { printf("Programme\n"); };
Fonctions : Fonctions Main { printf("Fonctions Main\n"); }
		| Main { printf("Main\n"); }
		| Fonctions Fonction { printf("Fonctions Fonction\n"); }
		| Fonction { printf("Fonction\n"); };
Fonction : tINT tID tPO tPF tAO Body tAF { printf("Fonction %s\n",$2); };
Main : tINT tMAIN tPO tPF tAO Body tAF { printf("Main\n"); }
		| tMAIN tPO tPF tAO Body tAF { printf("Main\n"); };
Body : 
		| Declaration Body
		| Initialisation Body
		| Affectation Body ;
Declaration : tINT tID tFI { printf("Declaration : %s\n",$2); };
Initialisation : tINT tID tEGAL tNB tFI { printf("Initialisation : %s = %d\n",$2,$4);};
Affectation : tID tEGAL tNB tFI { printf("Affectation : %s = %d\n",$1,$3);}
		| tID tEGAL Calcul tFI { printf("Affectation : %s = %d\n",$1,$3);};
Calcul : Calcul tADD DivMul 
		| Calcul tSOU DivMul 
		| DivMul  ;
DivMul :	  DivMul tMUL Terme 
		| DivMul tDIV Terme 
		| Terme  ;
Terme :		  tPO Calcul tPF 
		| tID 
		| tNB  ;





/* Calculatrice :	  Calcul Calculatrice | Calcul ;
Calcul :	  Expr { printf("> %d\n", $1); }
		| tID tEGAL Expr { $1 = $3; } ;
Expr :		  Expr tADD DivMul { $$ = $1 + $3; }
		| Expr tSOU DivMul { $$ = $1 - $3; }
		| DivMul { $$ = $1; } ;
DivMul :	  DivMul tMUL Terme { $$ = $1 * $3; }
		| DivMul tDIV Terme { $$ = $1 / $3; }
		| Terme { $$ = $1; } ;
Terme :		  tPO Expr tPF { $$ = $2; }
		| tID { $$ = $1; }
		| tNB { $$ = $1; } ; */
		
%%

void yyerror(char *s) { fprintf(stderr, "%s\n", s); }

int main(void) {
	/* yydebug=1; */
  	printf("Compilateur\n");
  	yyparse();
 	return 0;
}
