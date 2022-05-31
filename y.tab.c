/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 2
#define YYMINOR 0
#define YYPATCH 20220128

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#undef YYBTYACC
#define YYBTYACC 0
#define YYDEBUGSTR YYPREFIX "debug"
#define YYPREFIX "yy"

#define YYPURE 0

#line 1 "compil.y"

#include <stdlib.h>
#include <stdio.h>
#include "tableSymbole.h"
#include "TableInstruction.h"
#include "Interpreteur.h"
#include "TableFonction.h"
int var[26];
void yyerror(char *s);

#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 13 "compil.y"
typedef union YYSTYPE { int nb; char var[16]; } YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 44 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

#if !(defined(yylex) || defined(YYSTATE))
int YYLEX_DECL();
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define tMAIN 257
#define tAO 258
#define tAF 259
#define tCONST 260
#define tEGAL 261
#define tSOU 262
#define tADD 263
#define tMUL 264
#define tDIV 265
#define tPO 266
#define tPF 267
#define tV 268
#define tFI 269
#define tPRINTF 270
#define tERROR 271
#define tRETURN 272
#define tINF 273
#define tSUP 274
#define tG 275
#define tNB 276
#define tIF 277
#define tELSE 278
#define tWHILE 279
#define tVOID 280
#define tINT 281
#define tID 282
#define YYERRCODE 256
typedef int YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    5,    5,    5,    5,    8,   11,   12,    7,   13,
   15,   16,    7,    9,    9,   17,   18,   17,    6,    6,
    6,   10,   14,   14,   14,   14,   14,   14,   14,   14,
   25,   26,   25,   27,   29,   25,   30,   19,   31,   19,
   32,   33,   20,   28,   28,   21,   35,   22,   34,   34,
   34,   34,   36,   37,   38,   39,   36,   40,   36,   41,
   23,   24,    4,   42,   42,   43,   44,   43,    1,    1,
    1,    2,    2,    2,    3,    3,    3,    3,
};
static const YYINT yylen[] = {                            2,
    1,    2,    1,    2,    1,    0,    0,    0,   11,    0,
    0,    0,   11,    0,    1,    2,    0,    5,    7,    7,
    6,    4,    0,    2,    2,    2,    2,    2,    2,    3,
    2,    0,    4,    0,    0,    6,    0,    4,    0,    5,
    0,    0,    7,    1,    2,    4,    0,    9,    4,    3,
    3,    1,    0,    0,    0,    0,   12,    0,    5,    0,
    8,    5,    4,    0,    1,    1,    0,    4,    3,    3,
    1,    3,    3,    1,    3,    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    0,    0,    3,    5,    0,    0,   10,
    0,    6,    2,    4,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   15,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   21,   24,   25,   26,   27,   28,   29,    0,    0,    0,
    0,    0,    0,    0,    0,   77,    0,    0,    0,   74,
   78,    0,    0,    0,    0,    0,    0,    0,    0,   65,
   30,   20,   17,   11,   19,    0,    7,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   47,   60,   38,    0,
    0,   46,   67,   63,    0,    0,    0,    0,   62,   75,
    0,    0,    0,    0,    0,   72,   73,    0,    0,    0,
   40,    0,    0,   18,   12,   22,    8,    0,    0,    0,
   31,    0,    0,    0,   68,    0,    0,    0,    0,    0,
    0,    0,   44,   43,   13,    9,    0,   61,   33,    0,
   45,    0,   48,    0,   54,    0,   36,    0,    0,    0,
    0,    0,   59,   55,    0,    0,    0,   56,    0,   57,
};
#if defined(YYDESTRUCT_CALL) || defined(YYSTYPE_TOSTRING)
static const YYINT yystos[] = {                           0,
  257,  280,  281,  284,  289,  290,  291,  266,  257,  282,
  257,  282,  290,  291,  267,  266,  297,  266,  292,  258,
  267,  266,  267,  266,  270,  277,  279,  281,  282,  288,
  298,  303,  304,  305,  306,  307,  308,  258,  281,  293,
  301,  258,  293,  266,  266,  266,  282,  261,  266,  269,
  259,  298,  298,  298,  298,  298,  298,  298,  282,  267,
  294,  298,  267,  282,  266,  276,  282,  285,  286,  287,
  288,  318,  318,  314,  315,  316,  285,  285,  326,  327,
  298,  259,  268,  258,  259,  272,  258,  267,  285,  261,
  262,  263,  273,  274,  264,  265,  267,  267,  269,  268,
  261,  269,  268,  267,  302,  299,  285,  295,  269,  267,
  261,  286,  286,  285,  285,  287,  287,  319,  325,  282,
  309,  285,  328,  301,  298,  269,  294,  285,  258,  258,
  269,  310,  311,  317,  327,  300,  296,  298,  298,  268,
  261,  268,  269,  312,  259,  259,  259,  259,  309,  285,
  309,  278,  320,  313,  277,  324,  312,  321,  258,  266,
  298,  318,  259,  267,  322,  258,  298,  259,  323,  320,
};
#endif /* YYDESTRUCT_CALL || YYSTYPE_TOSTRING */
static const YYINT yydgoto[] = {                          4,
   68,   69,   70,   71,    5,    6,    7,   19,   40,   61,
  108,  137,   17,   62,  106,  136,   41,  105,   32,   33,
   34,   35,   36,   37,  121,  132,  133,  144,  154,   74,
   75,   76,  134,   72,  118,  153,  158,  165,  169,  156,
  119,   79,   80,  123,
};
static const YYINT yysindex[] = {                      -247,
 -227, -251, -250,    0, -247,    0,    0, -259, -170,    0,
 -163,    0,    0,    0, -174, -196, -149, -140, -128, -137,
 -117, -138, -109, -138, -115, -114, -113, -127, -150, -111,
 -105, -137, -137, -137, -137, -137, -137, -137, -126, -108,
    0, -137, -107, -121, -230, -230,    0, -230, -230, -137,
    0,    0,    0,    0,    0,    0,    0,  -97, -104,  -95,
  -94, -106,  -91,  -99, -230,    0,  -96, -172, -244,    0,
    0,  -98,  -93,  -92,  -90,  -89, -187, -209,  -88,    0,
    0,    0,    0,    0,    0, -230,    0,  -87, -258,  -86,
 -230, -230, -230, -230, -230, -230,    0,    0,    0, -102,
 -230,    0,    0,    0, -138, -137, -182, -137,    0,    0,
 -230, -244, -244, -218, -218,    0,    0,  -85,  -82,  -84,
    0, -218, -230,    0,    0,    0,    0, -218, -137, -137,
    0,  -81,  -80, -206,    0,  -76,  -75,  -73,  -71, -102,
 -230, -102,    0,    0,    0,    0,  -83,    0,    0, -218,
    0,  -79,    0, -206,    0,  -69,    0,  -74, -137, -230,
  -68,  -77,    0,    0,  -65, -137,  -63,    0,  -83,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,  171,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -62,
    0,  -67,    0,  -67,    0,    0,    0,    0,    0,    0,
    0, -222, -222, -222, -222, -222, -222,  -62,    0,    0,
    0,  -78,    0,    0,    0,    0, -226,    0,  -66, -222,
    0,    0,    0,    0,    0,    0,    0,    0,  -64,    0,
    0,    0,    0,    0,    0,    0, -195,  -61, -169,    0,
    0,    0,    0,    0,    0,    0,    0,  -60,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -62,    0,  -78,    0,    0,
    0, -155, -139,  -59,  -58,    0,    0,    0,    0, -204,
    0, -143,    0,    0,    0,    0,    0,  -56,  -62,  -62,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -221,    0,    0, -132,
    0,  -54,    0,    0,    0,    0,    0,    0,  -62,    0,
    0,    0,    0,    0,    0,  -62,    0,    0, -221,    0,
};
#if YYBTYACC
static const YYINT yycindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
#endif
static const YYINT yygindex[] = {                         0,
  -46,   40,   52,  -20,    0,  194,  197,    0,  181,  102,
    0,    0,    0,   -9,    0,    0,  107,    0,    0,    0,
    0,    0,    0,    0,  -57,    0,    0,   59,    0,    0,
    0,    0,    0,  -45,    0,   45,    0,    0,    0,    0,
    0,    0,   92,    0,
};
#define YYTABLESIZE 215
static const YYINT yytable[] = {                         30,
   73,   77,   78,   91,   92,    9,   11,   15,  110,    1,
   31,   30,   30,   30,   30,   30,   30,   30,   89,   95,
   96,   30,   52,   53,   54,   55,   56,   57,   58,   30,
   10,   12,    2,    3,   41,   65,   23,   53,    8,  107,
   81,   39,   37,   91,   92,   66,  114,  115,   53,   23,
   53,   67,   91,   92,  122,   53,   34,   53,  103,   53,
   53,  142,  143,   32,  128,   76,   76,   76,   76,   76,
   21,   76,   76,   76,   91,   92,   78,   76,   76,   91,
   92,  102,  149,   20,  151,   30,  126,   30,   90,   91,
   92,   71,   71,   71,  150,   16,  125,   71,   71,   71,
   93,   94,   18,   71,   71,   70,   70,   70,   30,   30,
   48,   70,   70,   70,  162,   49,   22,   70,   70,  138,
  139,   69,   69,   69,   42,   42,   23,   69,   69,   69,
  112,  113,   25,   69,   69,   35,   35,   24,   30,   26,
   38,   27,   39,   28,   29,   30,  116,  117,   42,  161,
   44,   45,   46,   51,   47,   59,  167,   50,   60,   63,
   64,   82,   84,   83,   85,   86,   87,   88,   97,   49,
    1,  101,  129,   98,  111,  130,   99,  100,  104,  120,
  141,  109,  145,  146,  131,  147,  140,  148,  159,  164,
  163,  160,  166,   23,  152,  168,   23,  155,   13,   14,
   64,   14,   16,   58,   43,   52,   66,   50,   51,  127,
   49,  124,  157,  170,  135,
};
static const YYINT yycheck[] = {                         20,
   46,   48,   49,  262,  263,  257,  257,  267,  267,  257,
   20,   32,   33,   34,   35,   36,   37,   38,   65,  264,
  265,   42,   32,   33,   34,   35,   36,   37,   38,   50,
  282,  282,  280,  281,  261,  266,  259,  259,  266,   86,
   50,  268,  269,  262,  263,  276,   93,   94,  270,  272,
  272,  282,  262,  263,  101,  277,  261,  279,  268,  281,
  282,  268,  269,  268,  111,  261,  262,  263,  264,  265,
  267,  267,  268,  269,  262,  263,  123,  273,  274,  262,
  263,  269,  140,  258,  142,  106,  269,  108,  261,  262,
  263,  261,  262,  263,  141,  266,  106,  267,  268,  269,
  273,  274,  266,  273,  274,  261,  262,  263,  129,  130,
  261,  267,  268,  269,  160,  266,  266,  273,  274,  129,
  130,  261,  262,  263,  268,  269,  267,  267,  268,  269,
   91,   92,  270,  273,  274,  268,  269,  266,  159,  277,
  258,  279,  281,  281,  282,  166,   95,   96,  258,  159,
  266,  266,  266,  259,  282,  282,  166,  269,  267,  267,
  282,  259,  258,  268,  259,  272,  258,  267,  267,  266,
    0,  261,  258,  267,  261,  258,  269,  268,  267,  282,
  261,  269,  259,  259,  269,  259,  268,  259,  258,  267,
  259,  266,  258,  272,  278,  259,  259,  277,    5,  267,
  267,    5,  267,  258,   24,  267,  267,  267,  267,  108,
  267,  105,  154,  169,  123,
};
#if YYBTYACC
static const YYINT yyctable[] = {                        -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,
};
#endif
#define YYFINAL 4
#ifndef YYDEBUG
#define YYDEBUG 1
#endif
#define YYMAXTOKEN 282
#define YYUNDFTOKEN 329
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"$end",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"error","tMAIN","tAO","tAF","tCONST",
"tEGAL","tSOU","tADD","tMUL","tDIV","tPO","tPF","tV","tFI","tPRINTF","tERROR",
"tRETURN","tINF","tSUP","tG","tNB","tIF","tELSE","tWHILE","tVOID","tINT","tID",
"$accept","Programme","Calcul","DivMul","Terme","AppelFonction","Fonctions",
"Main","Fonction","$$1","ArgumentsDeclaration","BodyRet","$$2","$$3","$$4",
"Body","$$5","$$6","ListeArgumentsDeclaration","$$7","Declaration",
"Initialisation","Affectation","BrancheIf","BrancheWhile","Printf",
"MultDeclaInit","$$8","$$9","FinInitialisation","$$10","$$11","$$12","$$13",
"$$14","Conditions","$$15","BranchesElseif","$$16","$$17","$$18","$$19","$$20",
"Arguments","ListeArguments","$$21","illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : Programme",
"Programme : Fonctions",
"Fonctions : Fonctions Main",
"Fonctions : Main",
"Fonctions : Fonctions Fonction",
"Fonctions : Fonction",
"$$1 :",
"$$2 :",
"$$3 :",
"Fonction : tINT tID $$1 tPO ArgumentsDeclaration tPF tAO $$2 BodyRet $$3 tAF",
"$$4 :",
"$$5 :",
"$$6 :",
"Fonction : tVOID tID $$4 tPO ArgumentsDeclaration tPF tAO $$5 Body $$6 tAF",
"ArgumentsDeclaration :",
"ArgumentsDeclaration : ListeArgumentsDeclaration",
"ListeArgumentsDeclaration : tINT tID",
"$$7 :",
"ListeArgumentsDeclaration : tINT tID tV $$7 ListeArgumentsDeclaration",
"Main : tINT tMAIN tPO tPF tAO BodyRet tAF",
"Main : tVOID tMAIN tPO tPF tAO Body tAF",
"Main : tMAIN tPO tPF tAO Body tAF",
"BodyRet : Body tRETURN Calcul tFI",
"Body :",
"Body : Declaration Body",
"Body : Initialisation Body",
"Body : Affectation Body",
"Body : BrancheIf Body",
"Body : BrancheWhile Body",
"Body : Printf Body",
"Body : AppelFonction tFI Body",
"MultDeclaInit : tID tFI",
"$$8 :",
"MultDeclaInit : tID $$8 tV MultDeclaInit",
"$$9 :",
"$$10 :",
"MultDeclaInit : tID $$9 tEGAL Calcul $$10 FinInitialisation",
"$$11 :",
"Declaration : tINT tID $$11 tFI",
"$$12 :",
"Declaration : tINT tID $$12 tV MultDeclaInit",
"$$13 :",
"$$14 :",
"Initialisation : tINT tID $$13 tEGAL Calcul $$14 FinInitialisation",
"FinInitialisation : tFI",
"FinInitialisation : tV MultDeclaInit",
"Affectation : tID tEGAL Calcul tFI",
"$$15 :",
"BrancheIf : tIF tPO Conditions tPF $$15 tAO Body tAF BranchesElseif",
"Conditions : Calcul tEGAL tEGAL Calcul",
"Conditions : Calcul tINF Calcul",
"Conditions : Calcul tSUP Calcul",
"Conditions : Calcul",
"BranchesElseif :",
"$$16 :",
"$$17 :",
"$$18 :",
"BranchesElseif : tELSE tIF $$16 tPO Conditions tPF $$17 tAO Body tAF $$18 BranchesElseif",
"$$19 :",
"BranchesElseif : tELSE $$19 tAO Body tAF",
"$$20 :",
"BrancheWhile : tWHILE tPO Conditions tPF $$20 tAO Body tAF",
"Printf : tPRINTF tPO tID tPF tFI",
"AppelFonction : tID tPO Arguments tPF",
"Arguments :",
"Arguments : ListeArguments",
"ListeArguments : Calcul",
"$$21 :",
"ListeArguments : Calcul tV $$21 ListeArguments",
"Calcul : Calcul tADD DivMul",
"Calcul : Calcul tSOU DivMul",
"Calcul : DivMul",
"DivMul : DivMul tMUL Terme",
"DivMul : DivMul tDIV Terme",
"DivMul : Terme",
"Terme : tPO Calcul tPF",
"Terme : tID",
"Terme : tNB",
"Terme : AppelFonction",

};
#endif

#if YYDEBUG
int      yydebug;
#endif

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;
int      yynerrs;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
YYLTYPE  yyloc; /* position returned by actions */
YYLTYPE  yylloc; /* position from the lexer */
#endif

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
#ifndef YYLLOC_DEFAULT
#define YYLLOC_DEFAULT(loc, rhs, n) \
do \
{ \
    if (n == 0) \
    { \
        (loc).first_line   = YYRHSLOC(rhs, 0).last_line; \
        (loc).first_column = YYRHSLOC(rhs, 0).last_column; \
        (loc).last_line    = YYRHSLOC(rhs, 0).last_line; \
        (loc).last_column  = YYRHSLOC(rhs, 0).last_column; \
    } \
    else \
    { \
        (loc).first_line   = YYRHSLOC(rhs, 1).first_line; \
        (loc).first_column = YYRHSLOC(rhs, 1).first_column; \
        (loc).last_line    = YYRHSLOC(rhs, n).last_line; \
        (loc).last_column  = YYRHSLOC(rhs, n).last_column; \
    } \
} while (0)
#endif /* YYLLOC_DEFAULT */
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#if YYBTYACC

#ifndef YYLVQUEUEGROWTH
#define YYLVQUEUEGROWTH 32
#endif
#endif /* YYBTYACC */

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#ifndef YYINITSTACKSIZE
#define YYINITSTACKSIZE 200
#endif

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE  *p_base;
    YYLTYPE  *p_mark;
#endif
} YYSTACKDATA;
#if YYBTYACC

struct YYParseState_s
{
    struct YYParseState_s *save;    /* Previously saved parser state */
    YYSTACKDATA            yystack; /* saved parser stack */
    int                    state;   /* saved parser state */
    int                    errflag; /* saved error recovery status */
    int                    lexeme;  /* saved index of the conflict lexeme in the lexical queue */
    YYINT                  ctry;    /* saved index in yyctable[] for this conflict */
};
typedef struct YYParseState_s YYParseState;
#endif /* YYBTYACC */
/* variables for the parser stack */
static YYSTACKDATA yystack;
#if YYBTYACC

/* Current parser state */
static YYParseState *yyps = 0;

/* yypath != NULL: do the full parse, starting at *yypath parser state. */
static YYParseState *yypath = 0;

/* Base of the lexical value queue */
static YYSTYPE *yylvals = 0;

/* Current position at lexical value queue */
static YYSTYPE *yylvp = 0;

/* End position of lexical value queue */
static YYSTYPE *yylve = 0;

/* The last allocated position at the lexical value queue */
static YYSTYPE *yylvlim = 0;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
/* Base of the lexical position queue */
static YYLTYPE *yylpsns = 0;

/* Current position at lexical position queue */
static YYLTYPE *yylpp = 0;

/* End position of lexical position queue */
static YYLTYPE *yylpe = 0;

/* The last allocated position at the lexical position queue */
static YYLTYPE *yylplim = 0;
#endif

/* Current position at lexical token queue */
static YYINT  *yylexp = 0;

static YYINT  *yylexemes = 0;
#endif /* YYBTYACC */
#line 100 "compil.y"


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
#line 572 "y.tab.c"

/* For use in generated program */
#define yydepth (int)(yystack.s_mark - yystack.s_base)
#if YYBTYACC
#define yytrial (yyps->save)
#endif /* YYBTYACC */

#if YYDEBUG
#include <stdio.h>	/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE *newps;
#endif

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    newps = (YYLTYPE *)realloc(data->p_base, newsize * sizeof(*newps));
    if (newps == 0)
        return YYENOMEM;

    data->p_base = newps;
    data->p_mark = newps + i;
#endif

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;

#if YYDEBUG
    if (yydebug)
        fprintf(stderr, "%sdebug: stack size increased to %d\n", YYPREFIX, newsize);
#endif
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    free(data->p_base);
#endif
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif /* YYPURE || defined(YY_NO_LEAKS) */
#if YYBTYACC

static YYParseState *
yyNewState(unsigned size)
{
    YYParseState *p = (YYParseState *) malloc(sizeof(YYParseState));
    if (p == NULL) return NULL;

    p->yystack.stacksize = size;
    if (size == 0)
    {
        p->yystack.s_base = NULL;
        p->yystack.l_base = NULL;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        p->yystack.p_base = NULL;
#endif
        return p;
    }
    p->yystack.s_base    = (YYINT *) malloc(size * sizeof(YYINT));
    if (p->yystack.s_base == NULL) return NULL;
    p->yystack.l_base    = (YYSTYPE *) malloc(size * sizeof(YYSTYPE));
    if (p->yystack.l_base == NULL) return NULL;
    memset(p->yystack.l_base, 0, size * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    p->yystack.p_base    = (YYLTYPE *) malloc(size * sizeof(YYLTYPE));
    if (p->yystack.p_base == NULL) return NULL;
    memset(p->yystack.p_base, 0, size * sizeof(YYLTYPE));
#endif

    return p;
}

static void
yyFreeState(YYParseState *p)
{
    yyfreestack(&p->yystack);
    free(p);
}
#endif /* YYBTYACC */

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab
#if YYBTYACC
#define YYVALID        do { if (yyps->save)            goto yyvalid; } while(0)
#define YYVALID_NESTED do { if (yyps->save && \
                                yyps->save->save == 0) goto yyvalid; } while(0)
#endif /* YYBTYACC */

int
YYPARSE_DECL()
{
    int yym, yyn, yystate, yyresult;
#if YYBTYACC
    int yynewerrflag;
    YYParseState *yyerrctx = NULL;
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE  yyerror_loc_range[3]; /* position of error start/end (0 unused) */
#endif
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
    if (yydebug)
        fprintf(stderr, "%sdebug[<# of symbols on state stack>]\n", YYPREFIX);
#endif
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    memset(yyerror_loc_range, 0, sizeof(yyerror_loc_range));
#endif

#if YYBTYACC
    yyps = yyNewState(0); if (yyps == 0) goto yyenomem;
    yyps->save = 0;
#endif /* YYBTYACC */
    yym = 0;
    /* yyn is set below */
    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark = yystack.p_base;
#endif
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
#if YYBTYACC
        do {
        if (yylvp < yylve)
        {
            /* we're currently re-reading tokens */
            yylval = *yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylloc = *yylpp++;
#endif
            yychar = *yylexp++;
            break;
        }
        if (yyps->save)
        {
            /* in trial mode; save scanner results for future parse attempts */
            if (yylvp == yylvlim)
            {   /* Enlarge lexical value queue */
                size_t p = (size_t) (yylvp - yylvals);
                size_t s = (size_t) (yylvlim - yylvals);

                s += YYLVQUEUEGROWTH;
                if ((yylexemes = (YYINT *)realloc(yylexemes, s * sizeof(YYINT))) == NULL) goto yyenomem;
                if ((yylvals   = (YYSTYPE *)realloc(yylvals, s * sizeof(YYSTYPE))) == NULL) goto yyenomem;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                if ((yylpsns   = (YYLTYPE *)realloc(yylpsns, s * sizeof(YYLTYPE))) == NULL) goto yyenomem;
#endif
                yylvp   = yylve = yylvals + p;
                yylvlim = yylvals + s;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp   = yylpe = yylpsns + p;
                yylplim = yylpsns + s;
#endif
                yylexp  = yylexemes + p;
            }
            *yylexp = (YYINT) YYLEX;
            *yylvp++ = yylval;
            yylve++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            *yylpp++ = yylloc;
            yylpe++;
#endif
            yychar = *yylexp++;
            break;
        }
        /* normal operation, no conflict encountered */
#endif /* YYBTYACC */
        yychar = YYLEX;
#if YYBTYACC
        } while (0);
#endif /* YYBTYACC */
        if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            fprintf(stderr, "%s[%d]: state %d, reading token %d (%s)",
                            YYDEBUGSTR, yydepth, yystate, yychar, yys);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
            if (!yytrial)
#endif /* YYBTYACC */
                fprintf(stderr, " <%s>", YYSTYPE_TOSTRING(yychar, yylval));
#endif
            fputc('\n', stderr);
        }
#endif
    }
#if YYBTYACC

    /* Do we have a conflict? */
    if (((yyn = yycindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
        yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        YYINT ctry;

        if (yypath)
        {
            YYParseState *save;
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%s[%d]: CONFLICT in state %d: following successful trial parse\n",
                                YYDEBUGSTR, yydepth, yystate);
#endif
            /* Switch to the next conflict context */
            save = yypath;
            yypath = save->save;
            save->save = NULL;
            ctry = save->ctry;
            if (save->state != yystate) YYABORT;
            yyFreeState(save);

        }
        else
        {

            /* Unresolved conflict - start/continue trial parse */
            YYParseState *save;
#if YYDEBUG
            if (yydebug)
            {
                fprintf(stderr, "%s[%d]: CONFLICT in state %d. ", YYDEBUGSTR, yydepth, yystate);
                if (yyps->save)
                    fputs("ALREADY in conflict, continuing trial parse.\n", stderr);
                else
                    fputs("Starting trial parse.\n", stderr);
            }
#endif
            save                  = yyNewState((unsigned)(yystack.s_mark - yystack.s_base + 1));
            if (save == NULL) goto yyenomem;
            save->save            = yyps->save;
            save->state           = yystate;
            save->errflag         = yyerrflag;
            save->yystack.s_mark  = save->yystack.s_base + (yystack.s_mark - yystack.s_base);
            memcpy (save->yystack.s_base, yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            save->yystack.l_mark  = save->yystack.l_base + (yystack.l_mark - yystack.l_base);
            memcpy (save->yystack.l_base, yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            save->yystack.p_mark  = save->yystack.p_base + (yystack.p_mark - yystack.p_base);
            memcpy (save->yystack.p_base, yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            ctry                  = yytable[yyn];
            if (yyctable[ctry] == -1)
            {
#if YYDEBUG
                if (yydebug && yychar >= YYEOF)
                    fprintf(stderr, "%s[%d]: backtracking 1 token\n", YYDEBUGSTR, yydepth);
#endif
                ctry++;
            }
            save->ctry = ctry;
            if (yyps->save == NULL)
            {
                /* If this is a first conflict in the stack, start saving lexemes */
                if (!yylexemes)
                {
                    yylexemes = (YYINT *) malloc((YYLVQUEUEGROWTH) * sizeof(YYINT));
                    if (yylexemes == NULL) goto yyenomem;
                    yylvals   = (YYSTYPE *) malloc((YYLVQUEUEGROWTH) * sizeof(YYSTYPE));
                    if (yylvals == NULL) goto yyenomem;
                    yylvlim   = yylvals + YYLVQUEUEGROWTH;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpsns   = (YYLTYPE *) malloc((YYLVQUEUEGROWTH) * sizeof(YYLTYPE));
                    if (yylpsns == NULL) goto yyenomem;
                    yylplim   = yylpsns + YYLVQUEUEGROWTH;
#endif
                }
                if (yylvp == yylve)
                {
                    yylvp  = yylve = yylvals;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpp  = yylpe = yylpsns;
#endif
                    yylexp = yylexemes;
                    if (yychar >= YYEOF)
                    {
                        *yylve++ = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                        *yylpe++ = yylloc;
#endif
                        *yylexp  = (YYINT) yychar;
                        yychar   = YYEMPTY;
                    }
                }
            }
            if (yychar >= YYEOF)
            {
                yylvp--;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp--;
#endif
                yylexp--;
                yychar = YYEMPTY;
            }
            save->lexeme = (int) (yylvp - yylvals);
            yyps->save   = save;
        }
        if (yytable[yyn] == ctry)
        {
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%s[%d]: state %d, shifting to state %d\n",
                                YYDEBUGSTR, yydepth, yystate, yyctable[ctry]);
#endif
            if (yychar < 0)
            {
                yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp++;
#endif
                yylexp++;
            }
            if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                goto yyoverflow;
            yystate = yyctable[ctry];
            *++yystack.s_mark = (YYINT) yystate;
            *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            *++yystack.p_mark = yylloc;
#endif
            yychar  = YYEMPTY;
            if (yyerrflag > 0) --yyerrflag;
            goto yyloop;
        }
        else
        {
            yyn = yyctable[ctry];
            goto yyreduce;
        }
    } /* End of code dealing with conflicts */
#endif /* YYBTYACC */
    if (((yyn = yysindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
#if YYDEBUG
        if (yydebug)
            fprintf(stderr, "%s[%d]: state %d, shifting to state %d\n",
                            YYDEBUGSTR, yydepth, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        *++yystack.p_mark = yylloc;
#endif
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if (((yyn = yyrindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag != 0) goto yyinrecovery;
#if YYBTYACC

    yynewerrflag = 1;
    goto yyerrhandler;
    goto yyerrlab; /* redundant goto avoids 'unused label' warning */

yyerrlab:
    /* explicit YYERROR from an action -- pop the rhs of the rule reduced
     * before looking for error recovery */
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark -= yym;
#endif

    yynewerrflag = 0;
yyerrhandler:
    while (yyps->save)
    {
        int ctry;
        YYParseState *save = yyps->save;
#if YYDEBUG
        if (yydebug)
            fprintf(stderr, "%s[%d]: ERROR in state %d, CONFLICT BACKTRACKING to state %d, %d tokens\n",
                            YYDEBUGSTR, yydepth, yystate, yyps->save->state,
                    (int)(yylvp - yylvals - yyps->save->lexeme));
#endif
        /* Memorize most forward-looking error state in case it's really an error. */
        if (yyerrctx == NULL || yyerrctx->lexeme < yylvp - yylvals)
        {
            /* Free old saved error context state */
            if (yyerrctx) yyFreeState(yyerrctx);
            /* Create and fill out new saved error context state */
            yyerrctx                 = yyNewState((unsigned)(yystack.s_mark - yystack.s_base + 1));
            if (yyerrctx == NULL) goto yyenomem;
            yyerrctx->save           = yyps->save;
            yyerrctx->state          = yystate;
            yyerrctx->errflag        = yyerrflag;
            yyerrctx->yystack.s_mark = yyerrctx->yystack.s_base + (yystack.s_mark - yystack.s_base);
            memcpy (yyerrctx->yystack.s_base, yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            yyerrctx->yystack.l_mark = yyerrctx->yystack.l_base + (yystack.l_mark - yystack.l_base);
            memcpy (yyerrctx->yystack.l_base, yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yyerrctx->yystack.p_mark = yyerrctx->yystack.p_base + (yystack.p_mark - yystack.p_base);
            memcpy (yyerrctx->yystack.p_base, yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            yyerrctx->lexeme         = (int) (yylvp - yylvals);
        }
        yylvp          = yylvals   + save->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        yylpp          = yylpsns   + save->lexeme;
#endif
        yylexp         = yylexemes + save->lexeme;
        yychar         = YYEMPTY;
        yystack.s_mark = yystack.s_base + (save->yystack.s_mark - save->yystack.s_base);
        memcpy (yystack.s_base, save->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
        yystack.l_mark = yystack.l_base + (save->yystack.l_mark - save->yystack.l_base);
        memcpy (yystack.l_base, save->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        yystack.p_mark = yystack.p_base + (save->yystack.p_mark - save->yystack.p_base);
        memcpy (yystack.p_base, save->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
        ctry           = ++save->ctry;
        yystate        = save->state;
        /* We tried shift, try reduce now */
        if ((yyn = yyctable[ctry]) >= 0) goto yyreduce;
        yyps->save     = save->save;
        save->save     = NULL;
        yyFreeState(save);

        /* Nothing left on the stack -- error */
        if (!yyps->save)
        {
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%sdebug[%d,trial]: trial parse FAILED, entering ERROR mode\n",
                                YYPREFIX, yydepth);
#endif
            /* Restore state as it was in the most forward-advanced error */
            yylvp          = yylvals   + yyerrctx->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylpp          = yylpsns   + yyerrctx->lexeme;
#endif
            yylexp         = yylexemes + yyerrctx->lexeme;
            yychar         = yylexp[-1];
            yylval         = yylvp[-1];
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylloc         = yylpp[-1];
#endif
            yystack.s_mark = yystack.s_base + (yyerrctx->yystack.s_mark - yyerrctx->yystack.s_base);
            memcpy (yystack.s_base, yyerrctx->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            yystack.l_mark = yystack.l_base + (yyerrctx->yystack.l_mark - yyerrctx->yystack.l_base);
            memcpy (yystack.l_base, yyerrctx->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yystack.p_mark = yystack.p_base + (yyerrctx->yystack.p_mark - yyerrctx->yystack.p_base);
            memcpy (yystack.p_base, yyerrctx->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            yystate        = yyerrctx->state;
            yyFreeState(yyerrctx);
            yyerrctx       = NULL;
        }
        yynewerrflag = 1;
    }
    if (yynewerrflag == 0) goto yyinrecovery;
#endif /* YYBTYACC */

    YYERROR_CALL("syntax error");
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yyerror_loc_range[1] = yylloc; /* lookahead position is error start position */
#endif

#if !YYBTYACC
    goto yyerrlab; /* redundant goto avoids 'unused label' warning */
yyerrlab:
#endif
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if (((yyn = yysindex[*yystack.s_mark]) != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    fprintf(stderr, "%s[%d]: state %d, error recovery shifting to state %d\n",
                                    YYDEBUGSTR, yydepth, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                /* lookahead position is error end position */
                yyerror_loc_range[2] = yylloc;
                YYLLOC_DEFAULT(yyloc, yyerror_loc_range, 2); /* position of error span */
                *++yystack.p_mark = yyloc;
#endif
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    fprintf(stderr, "%s[%d]: error recovery discarding state %d\n",
                                    YYDEBUGSTR, yydepth, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                /* the current TOS position is the error start position */
                yyerror_loc_range[1] = *yystack.p_mark;
#endif
#if defined(YYDESTRUCT_CALL)
#if YYBTYACC
                if (!yytrial)
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    YYDESTRUCT_CALL("error: discarding state",
                                    yystos[*yystack.s_mark], yystack.l_mark, yystack.p_mark);
#else
                    YYDESTRUCT_CALL("error: discarding state",
                                    yystos[*yystack.s_mark], yystack.l_mark);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#endif /* defined(YYDESTRUCT_CALL) */
                --yystack.s_mark;
                --yystack.l_mark;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                --yystack.p_mark;
#endif
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            fprintf(stderr, "%s[%d]: state %d, error recovery discarding token %d (%s)\n",
                            YYDEBUGSTR, yydepth, yystate, yychar, yys);
        }
#endif
#if defined(YYDESTRUCT_CALL)
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            YYDESTRUCT_CALL("error: discarding token", yychar, &yylval, &yylloc);
#else
            YYDESTRUCT_CALL("error: discarding token", yychar, &yylval);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#endif /* defined(YYDESTRUCT_CALL) */
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
    yym = yylen[yyn];
#if YYDEBUG
    if (yydebug)
    {
        fprintf(stderr, "%s[%d]: state %d, reducing by rule %d (%s)",
                        YYDEBUGSTR, yydepth, yystate, yyn, yyrule[yyn]);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
            if (yym > 0)
            {
                int i;
                fputc('<', stderr);
                for (i = yym; i > 0; i--)
                {
                    if (i != yym) fputs(", ", stderr);
                    fputs(YYSTYPE_TOSTRING(yystos[yystack.s_mark[1-i]],
                                           yystack.l_mark[1-i]), stderr);
                }
                fputc('>', stderr);
            }
#endif
        fputc('\n', stderr);
    }
#endif
    if (yym > 0)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)

    /* Perform position reduction */
    memset(&yyloc, 0, sizeof(yyloc));
#if YYBTYACC
    if (!yytrial)
#endif /* YYBTYACC */
    {
        YYLLOC_DEFAULT(yyloc, &yystack.p_mark[-yym], yym);
        /* just in case YYERROR is invoked within the action, save
           the start of the rhs as the error start position */
        yyerror_loc_range[1] = yystack.p_mark[1-yym];
    }
#endif

    switch (yyn)
    {
case 1:
#line 23 "compil.y"
	{ printf("Programme\n"); }
#line 1245 "y.tab.c"
break;
case 2:
#line 24 "compil.y"
	{ printf("Fonctions Main\n"); }
#line 1250 "y.tab.c"
break;
case 3:
#line 25 "compil.y"
	{ printf("Main\n"); }
#line 1255 "y.tab.c"
break;
case 4:
#line 26 "compil.y"
	{ printf("Fonctions Fonction\n"); }
#line 1260 "y.tab.c"
break;
case 5:
#line 27 "compil.y"
	{ printf("Fonction\n"); }
#line 1265 "y.tab.c"
break;
case 6:
#line 28 "compil.y"
	{ Add_instruction2(JMP , -1); yystack.l_mark[-1].nb = get_nb_instructions() + 1;}
#line 1270 "y.tab.c"
break;
case 7:
#line 28 "compil.y"
	{set_TS_func_mode();}
#line 1275 "y.tab.c"
break;
case 8:
#line 28 "compil.y"
	{set_TS_normal_mode();}
#line 1280 "y.tab.c"
break;
case 9:
#line 28 "compil.y"
	{ printf("Fonction %s avec return\n",yystack.l_mark[-9].var); patchJMP(get_nb_instructions()+2);  Add_instruction2(JMP , -1); Add_Function(yystack.l_mark[-9].var, yystack.l_mark[-10].nb, get_nb_instructions());}
#line 1285 "y.tab.c"
break;
case 10:
#line 29 "compil.y"
	{ Add_instruction2(JMP , -1); yystack.l_mark[-1].nb = get_nb_instructions() + 1;}
#line 1290 "y.tab.c"
break;
case 11:
#line 29 "compil.y"
	{set_TS_func_mode();}
#line 1295 "y.tab.c"
break;
case 12:
#line 29 "compil.y"
	{set_TS_normal_mode();}
#line 1300 "y.tab.c"
break;
case 13:
#line 29 "compil.y"
	{ printf("Fonction %s sans return\n",yystack.l_mark[-9].var); patchJMP(get_nb_instructions()+2);  Add_instruction2(JMP , -1); Add_Function(yystack.l_mark[-9].var, yystack.l_mark[-10].nb, get_nb_instructions());}
#line 1305 "y.tab.c"
break;
case 16:
#line 32 "compil.y"
	{ Add_symb_func(yystack.l_mark[0].var, get_addr_argument(), "int", true); reset_addr_argument();}
#line 1310 "y.tab.c"
break;
case 17:
#line 33 "compil.y"
	{ Add_symb_func(yystack.l_mark[-1].var, get_addr_argument(), "int", true);}
#line 1315 "y.tab.c"
break;
case 19:
#line 34 "compil.y"
	{ printf("Main avec return\n"); }
#line 1320 "y.tab.c"
break;
case 20:
#line 35 "compil.y"
	{ printf("Main sans return \n"); }
#line 1325 "y.tab.c"
break;
case 21:
#line 36 "compil.y"
	{ printf("Main sans rien \n"); }
#line 1330 "y.tab.c"
break;
case 22:
#line 38 "compil.y"
	{ Add_instruction3(COP, 1000, Get_addr_top()); free_temp_top();}
#line 1335 "y.tab.c"
break;
case 31:
#line 50 "compil.y"
	{ printf("Declaration : %s\n",yystack.l_mark[-1].var); Add_symb(yystack.l_mark[-1].var, "int", false); }
#line 1340 "y.tab.c"
break;
case 32:
#line 51 "compil.y"
	{ printf("Declaration : %s\n",yystack.l_mark[0].var); Add_symb(yystack.l_mark[0].var, "int", false); }
#line 1345 "y.tab.c"
break;
case 34:
#line 52 "compil.y"
	{printf("Initialisation  : %s = ",yystack.l_mark[0].var); Add_symb(yystack.l_mark[0].var, "int", true);}
#line 1350 "y.tab.c"
break;
case 35:
#line 52 "compil.y"
	{printf("%d\n",yystack.l_mark[0].nb); Add_instruction3(COP, Get_addr(yystack.l_mark[-3].var), Get_addr_top()); free_temp_top();}
#line 1355 "y.tab.c"
break;
case 37:
#line 55 "compil.y"
	{ printf("Declaration : %s\n",yystack.l_mark[0].var); Add_symb(yystack.l_mark[0].var, "int", false); }
#line 1360 "y.tab.c"
break;
case 39:
#line 56 "compil.y"
	{ printf("Declaration : %s\n",yystack.l_mark[0].var); Add_symb(yystack.l_mark[0].var, "int", false); }
#line 1365 "y.tab.c"
break;
case 41:
#line 59 "compil.y"
	{printf("Initialisation  : %s = ",yystack.l_mark[0].var); Add_symb(yystack.l_mark[0].var, "int", true);}
#line 1370 "y.tab.c"
break;
case 42:
#line 59 "compil.y"
	{printf("iciiii%d\n",yystack.l_mark[0].nb); Add_instruction3(COP, Get_addr(yystack.l_mark[-3].var), Get_addr_top()); free_temp_top();}
#line 1375 "y.tab.c"
break;
case 46:
#line 64 "compil.y"
	{ printf("Affectation directe, par variable, par calcul ou par appel de fonction: %s = %d\n",yystack.l_mark[-3].var,yystack.l_mark[-1].nb); Add_instruction3(COP, Get_addr(yystack.l_mark[-3].var), Get_addr_top()); free_temp_top(); Set_init_symbole(yystack.l_mark[-3].var);}
#line 1380 "y.tab.c"
break;
case 47:
#line 66 "compil.y"
	{ Add_instruction3(JMF , Get_addr_top(), -1); free_temp_top(); Inc_depth(); }
#line 1385 "y.tab.c"
break;
case 49:
#line 68 "compil.y"
	{ printf("Comparaison ==\n"); Add_instruction4(EQU, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
#line 1390 "y.tab.c"
break;
case 50:
#line 69 "compil.y"
	{ printf("Comparaison <\n"); Add_instruction4(INF, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
#line 1395 "y.tab.c"
break;
case 51:
#line 70 "compil.y"
	{ printf("Comparaison >\n"); Add_instruction4(SUP, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
#line 1400 "y.tab.c"
break;
case 52:
#line 71 "compil.y"
	{ printf("Comparaison true or false\n"); Add_instruction4(EQU, Get_addr_second(), 1, Get_addr_top());}
#line 1405 "y.tab.c"
break;
case 53:
#line 77 "compil.y"
	{patchJMF(get_nb_instructions()+1); Dec_depth();}
#line 1410 "y.tab.c"
break;
case 54:
#line 78 "compil.y"
	{patchJMF(get_nb_instructions()+2); Add_instruction2(JMP , -1);}
#line 1415 "y.tab.c"
break;
case 55:
#line 78 "compil.y"
	{ Add_instruction3(JMF , Get_addr_top(), -1); free_temp_top();}
#line 1420 "y.tab.c"
break;
case 56:
#line 78 "compil.y"
	{patchJMP(get_nb_instructions()+1);}
#line 1425 "y.tab.c"
break;
case 58:
#line 79 "compil.y"
	{ patchJMF(get_nb_instructions()+2); Add_instruction2(JMP , -1);}
#line 1430 "y.tab.c"
break;
case 59:
#line 79 "compil.y"
	{patchJMP(get_nb_instructions()+1); Print_ts(); Dec_depth(); printf("Branche else\n");}
#line 1435 "y.tab.c"
break;
case 60:
#line 81 "compil.y"
	{  Add_instruction3(JMF , Get_addr_top(), -1); free_temp_top(); Inc_depth(); yystack.l_mark[-3].nb = get_nb_instructions() - 3;}
#line 1440 "y.tab.c"
break;
case 61:
#line 81 "compil.y"
	{ patchJMF(get_nb_instructions()+2); Add_instruction2(JMP , yystack.l_mark[-7].nb); printf("Branche while\n"); }
#line 1445 "y.tab.c"
break;
case 62:
#line 82 "compil.y"
	{ printf("printf : %s \n", yystack.l_mark[-2].var); Add_instruction2(PRI, Get_addr(yystack.l_mark[-2].var));}
#line 1450 "y.tab.c"
break;
case 63:
#line 83 "compil.y"
	{ Add_instruction2(JMP, get_numero_instru_debut(yystack.l_mark[-3].var)); patchJMP_fonction(get_numero_instru_fin(yystack.l_mark[-3].var), get_nb_instructions() + 1); printf("Appel fonction : %s\n", yystack.l_mark[-3].var);}
#line 1455 "y.tab.c"
break;
case 66:
#line 86 "compil.y"
	{ Add_instruction3(COP, get_addr_argument(), Get_addr_top()); free_temp_top(); reset_addr_argument();}
#line 1460 "y.tab.c"
break;
case 67:
#line 87 "compil.y"
	{ Add_instruction3(COP, get_addr_argument(), Get_addr_top()); free_temp_top();}
#line 1465 "y.tab.c"
break;
case 69:
#line 89 "compil.y"
	{ Add_instruction4(ADD, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
#line 1470 "y.tab.c"
break;
case 70:
#line 90 "compil.y"
	{ Add_instruction4(SOU, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
#line 1475 "y.tab.c"
break;
case 72:
#line 92 "compil.y"
	{ Add_instruction4(MUL, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
#line 1480 "y.tab.c"
break;
case 73:
#line 93 "compil.y"
	{ Add_instruction4(DIV, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
#line 1485 "y.tab.c"
break;
case 76:
#line 96 "compil.y"
	{ Add_symb_temp("int"); Add_instruction3(COP, Get_addr_top(), Get_addr(yystack.l_mark[0].var)) ; }
#line 1490 "y.tab.c"
break;
case 77:
#line 97 "compil.y"
	{ Add_symb_temp("int"); Add_instruction3(AFC, Get_addr_top(),yystack.l_mark[0].nb) ; }
#line 1495 "y.tab.c"
break;
case 78:
#line 98 "compil.y"
	{ Add_symb_temp("int"); Add_instruction3(COP, Get_addr_top(), 1000);}
#line 1500 "y.tab.c"
break;
#line 1502 "y.tab.c"
    default:
        break;
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark -= yym;
#endif
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
        {
            fprintf(stderr, "%s[%d]: after reduction, ", YYDEBUGSTR, yydepth);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
            if (!yytrial)
#endif /* YYBTYACC */
                fprintf(stderr, "result is <%s>, ", YYSTYPE_TOSTRING(yystos[YYFINAL], yyval));
#endif
            fprintf(stderr, "shifting from state 0 to final state %d\n", YYFINAL);
        }
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        *++yystack.p_mark = yyloc;
#endif
        if (yychar < 0)
        {
#if YYBTYACC
            do {
            if (yylvp < yylve)
            {
                /* we're currently re-reading tokens */
                yylval = *yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylloc = *yylpp++;
#endif
                yychar = *yylexp++;
                break;
            }
            if (yyps->save)
            {
                /* in trial mode; save scanner results for future parse attempts */
                if (yylvp == yylvlim)
                {   /* Enlarge lexical value queue */
                    size_t p = (size_t) (yylvp - yylvals);
                    size_t s = (size_t) (yylvlim - yylvals);

                    s += YYLVQUEUEGROWTH;
                    if ((yylexemes = (YYINT *)realloc(yylexemes, s * sizeof(YYINT))) == NULL)
                        goto yyenomem;
                    if ((yylvals   = (YYSTYPE *)realloc(yylvals, s * sizeof(YYSTYPE))) == NULL)
                        goto yyenomem;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    if ((yylpsns   = (YYLTYPE *)realloc(yylpsns, s * sizeof(YYLTYPE))) == NULL)
                        goto yyenomem;
#endif
                    yylvp   = yylve = yylvals + p;
                    yylvlim = yylvals + s;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpp   = yylpe = yylpsns + p;
                    yylplim = yylpsns + s;
#endif
                    yylexp  = yylexemes + p;
                }
                *yylexp = (YYINT) YYLEX;
                *yylvp++ = yylval;
                yylve++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                *yylpp++ = yylloc;
                yylpe++;
#endif
                yychar = *yylexp++;
                break;
            }
            /* normal operation, no conflict encountered */
#endif /* YYBTYACC */
            yychar = YYLEX;
#if YYBTYACC
            } while (0);
#endif /* YYBTYACC */
            if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
                fprintf(stderr, "%s[%d]: state %d, reading token %d (%s)\n",
                                YYDEBUGSTR, yydepth, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if (((yyn = yygindex[yym]) != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
    {
        fprintf(stderr, "%s[%d]: after reduction, ", YYDEBUGSTR, yydepth);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
            fprintf(stderr, "result is <%s>, ", YYSTYPE_TOSTRING(yystos[yystate], yyval));
#endif
        fprintf(stderr, "shifting from state %d to state %d\n", *yystack.s_mark, yystate);
    }
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    *++yystack.p_mark = yyloc;
#endif
    goto yyloop;
#if YYBTYACC

    /* Reduction declares that this path is valid. Set yypath and do a full parse */
yyvalid:
    if (yypath) YYABORT;
    while (yyps->save)
    {
        YYParseState *save = yyps->save;
        yyps->save = save->save;
        save->save = yypath;
        yypath = save;
    }
#if YYDEBUG
    if (yydebug)
        fprintf(stderr, "%s[%d]: state %d, CONFLICT trial successful, backtracking to state %d, %d tokens\n",
                        YYDEBUGSTR, yydepth, yystate, yypath->state, (int)(yylvp - yylvals - yypath->lexeme));
#endif
    if (yyerrctx)
    {
        yyFreeState(yyerrctx);
        yyerrctx = NULL;
    }
    yylvp          = yylvals + yypath->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yylpp          = yylpsns + yypath->lexeme;
#endif
    yylexp         = yylexemes + yypath->lexeme;
    yychar         = YYEMPTY;
    yystack.s_mark = yystack.s_base + (yypath->yystack.s_mark - yypath->yystack.s_base);
    memcpy (yystack.s_base, yypath->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
    yystack.l_mark = yystack.l_base + (yypath->yystack.l_mark - yypath->yystack.l_base);
    memcpy (yystack.l_base, yypath->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark = yystack.p_base + (yypath->yystack.p_mark - yypath->yystack.p_base);
    memcpy (yystack.p_base, yypath->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
    yystate        = yypath->state;
    goto yyloop;
#endif /* YYBTYACC */

yyoverflow:
    YYERROR_CALL("yacc stack overflow");
#if YYBTYACC
    goto yyabort_nomem;
yyenomem:
    YYERROR_CALL("memory exhausted");
yyabort_nomem:
#endif /* YYBTYACC */
    yyresult = 2;
    goto yyreturn;

yyabort:
    yyresult = 1;
    goto yyreturn;

yyaccept:
#if YYBTYACC
    if (yyps->save) goto yyvalid;
#endif /* YYBTYACC */
    yyresult = 0;

yyreturn:
#if defined(YYDESTRUCT_CALL)
    if (yychar != YYEOF && yychar != YYEMPTY)
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        YYDESTRUCT_CALL("cleanup: discarding token", yychar, &yylval, &yylloc);
#else
        YYDESTRUCT_CALL("cleanup: discarding token", yychar, &yylval);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */

    {
        YYSTYPE *pv;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        YYLTYPE *pp;

        for (pv = yystack.l_base, pp = yystack.p_base; pv <= yystack.l_mark; ++pv, ++pp)
             YYDESTRUCT_CALL("cleanup: discarding state",
                             yystos[*(yystack.s_base + (pv - yystack.l_base))], pv, pp);
#else
        for (pv = yystack.l_base; pv <= yystack.l_mark; ++pv)
             YYDESTRUCT_CALL("cleanup: discarding state",
                             yystos[*(yystack.s_base + (pv - yystack.l_base))], pv);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
    }
#endif /* defined(YYDESTRUCT_CALL) */

#if YYBTYACC
    if (yyerrctx)
    {
        yyFreeState(yyerrctx);
        yyerrctx = NULL;
    }
    while (yyps)
    {
        YYParseState *save = yyps;
        yyps = save->save;
        save->save = NULL;
        yyFreeState(save);
    }
    while (yypath)
    {
        YYParseState *save = yypath;
        yypath = save->save;
        save->save = NULL;
        yyFreeState(save);
    }
#endif /* YYBTYACC */
    yyfreestack(&yystack);
    return (yyresult);
}
