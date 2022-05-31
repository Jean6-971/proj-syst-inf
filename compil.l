%{
#include <stdlib.h>
#include <stdio.h>
#include "y.tab.h"
%}

%option noyywrap

%%

main { return tMAIN; }
if { return tIF; }
else { return tELSE; }
while { return tWHILE; }
printf { return tPRINTF; }
return { return tRETURN; }
const { return tCONST; }
int { return tINT; }
void { return tVOID;}
[ \t\n\r]+ {};


[0-9]+(e[0-9]+)?	{
	  yylval.nb = (int) strtold(yytext, NULL);
	  return tNB;
	}

[a-zA-Z][a-zA-Z0-9_]*	{
	  strcpy(yylval.var, yytext);
	  return tID;
	}
"{"	{ return tAO; }
"}"	{ return tAF; }
"="	{ return tEGAL; }
"<" { return tINF ; }
">" { return tSUP ; }
"-"	{ return tSOU; }
"+"	{ return tADD; }
"*"	{ return tMUL; }
"/"	{ return tDIV; }
"("	{ return tPO; }
")"	{ return tPF; }
"," { return tV; }

";" { return tFI;}

%%

