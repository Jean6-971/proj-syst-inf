%{
#include <stdlib.h>
#include <stdio.h>
#include "y.tab.h"
%}

%option noyywrap

%%

"main()" { return tMAIN; }
"{"	{ return tAO; }
"}"	{ return tAF; }

"const" { return tCONST; }
"int" { return tINT; }
[a-zA-Z][a-zA-Z0-9_]*	{
	  yylval.var = yytext[0];
	  return tID;
	}
	
"="	{ return tEGAL; }
"-"	{ return tSOU; }
"+"	{ return tADD; }
"*"	{ return tMUL; }
"/"	{ return tDIV; }
"("	{ return tPO; }
")"	{ return tPF; }

" "	{ return tSPACE; }
"\t" { return tTAB; }
"," { return tV; }

"\n" { return tFL; }

";" { return tFI;}

"printf" { return tPRINTF; }

[0-9]+	{
	  yylval.nb = atoi(yytext);
	  return tNB;
	}
	
"if" { return tIF; }
"else" { return tELSE; }
"while" { return tWHILE; }

.	{ return tERROR; }
%%

