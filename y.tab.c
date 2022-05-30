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
int var[26];
void yyerror(char *s);

#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 12 "compil.y"
typedef union YYSTYPE { int nb; char var[16]; } YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 43 "y.tab.c"

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
#define tINT 261
#define tEGAL 262
#define tSOU 263
#define tADD 264
#define tMUL 265
#define tDIV 266
#define tPO 267
#define tPF 268
#define tV 269
#define tFI 270
#define tPRINTF 271
#define tERROR 272
#define tRETURN 273
#define tVOID 274
#define tINF 275
#define tSUP 276
#define tG 277
#define tNB 278
#define tIF 279
#define tELSE 280
#define tWHILE 281
#define tID 282
#define YYERRCODE 256
typedef int YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    5,    5,    5,    5,    7,    7,    8,    8,   11,
   11,    6,    6,    6,    9,   10,   10,   10,   10,   10,
   10,   10,   10,   18,   19,   18,   20,   22,   18,   23,
   12,   24,   12,   25,   26,   13,   21,   21,   14,   28,
   15,   27,   27,   27,   27,   29,   30,   31,   32,   29,
   33,   29,   34,   16,   17,    4,   35,   35,   36,   36,
    1,    1,    1,    2,    2,    2,    3,    3,    3,    3,
};
static const YYINT yylen[] = {                            2,
    1,    2,    1,    2,    1,    8,    8,    0,    1,    2,
    4,    7,    7,    6,    4,    0,    2,    2,    2,    2,
    2,    2,    3,    2,    0,    4,    0,    0,    6,    0,
    4,    0,    5,    0,    0,    7,    1,    2,    4,    0,
    9,    4,    3,    3,    1,    0,    0,    0,    0,   12,
    0,    5,    0,    8,    5,    4,    0,    1,    1,    3,
    3,    3,    1,    3,    3,    1,    3,    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    0,    0,    3,    5,    0,    0,    0,
    0,    0,    2,    4,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    9,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   14,   17,   18,   19,   20,   21,   22,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   69,
    0,    0,    0,   66,   70,    0,    0,    0,    0,    0,
   58,   23,   12,    0,   11,    0,   13,    0,   31,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   40,   53,   39,    0,   56,    0,    6,    7,    0,   33,
    0,   55,   67,    0,    0,    0,    0,    0,   64,   65,
    0,    0,   60,   15,   24,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   37,   36,    0,    0,   26,    0,
   38,    0,   54,    0,    0,   41,   29,   47,    0,    0,
    0,    0,    0,    0,   52,   48,    0,    0,    0,   49,
    0,   50,
};
#if defined(YYDESTRUCT_CALL) || defined(YYSTYPE_TOSTRING)
static const YYINT yystos[] = {                           0,
  257,  261,  274,  284,  289,  290,  291,  267,  257,  282,
  257,  282,  290,  291,  268,  267,  267,  267,  267,  258,
  268,  261,  292,  295,  268,  292,  261,  271,  279,  281,
  282,  288,  294,  296,  297,  298,  299,  300,  301,  258,
  282,  268,  258,  268,  282,  267,  267,  267,  262,  267,
  270,  259,  294,  294,  294,  294,  294,  294,  293,  294,
  269,  258,  294,  258,  307,  308,  309,  282,  267,  278,
  282,  285,  286,  287,  288,  311,  311,  285,  285,  319,
  320,  294,  259,  273,  295,  293,  259,  294,  270,  269,
  262,  268,  285,  262,  263,  264,  275,  276,  265,  266,
  268,  268,  270,  269,  268,  285,  259,  259,  282,  302,
  285,  270,  268,  262,  286,  286,  285,  285,  287,  287,
  312,  318,  320,  270,  270,  303,  304,  310,  285,  258,
  258,  269,  262,  269,  270,  305,  294,  294,  302,  285,
  302,  259,  259,  306,  280,  313,  305,  279,  317,  314,
  258,  267,  294,  311,  259,  268,  315,  258,  294,  259,
  316,  313,
};
#endif /* YYDESTRUCT_CALL || YYSTYPE_TOSTRING */
static const YYINT yydgoto[] = {                          4,
   72,   73,   74,   75,    5,    6,    7,   23,   59,   60,
   24,   34,   35,   36,   37,   38,   39,  110,  126,  127,
  136,  144,   65,   66,   67,  128,   76,  121,  146,  150,
  157,  161,  149,  122,   80,   81,
};
static const YYINT yysindex[] = {                      -253,
 -245, -252, -250,    0, -253,    0,    0, -228, -211, -176,
 -169, -163,    0,    0, -143, -179, -124, -135, -124, -218,
 -118, -131, -116,    0, -105, -114, -126, -112, -110, -109,
 -128, -111,  -99, -218, -218, -218, -218, -218, -218, -218,
 -108,  -96, -218,  -95,    0, -117, -220, -220, -220, -220,
 -218,    0,    0,    0,    0,    0,    0,    0,  -93, -106,
 -124, -218,  -91, -218, -101,  -98,  -92, -104, -220,    0,
  -94, -150, -254,    0,    0,  -90,  -89, -261, -170,  -88,
    0,    0,    0, -220,    0,  -87,    0,  -85,    0, -107,
 -220,  -86, -136,  -81, -220, -220, -220, -220, -220, -220,
    0,    0,    0, -220,    0, -178,    0,    0,  -84,    0,
 -157,    0,    0, -220, -254, -254, -157, -157,    0,    0,
  -76,  -75,    0,    0,    0,  -80,  -77, -134, -157, -218,
 -218, -107, -220, -107,    0,    0,  -83,  -72,    0, -157,
    0, -103,    0, -134,  -79,    0,    0,    0,  -70,  -74,
 -218, -220,  -69,  -73,    0,    0,  -67, -218,  -65,    0,
 -103,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,  192,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -71,    0,  -71,  -63,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -225, -225, -225, -225, -225, -225,  -68,
  -66,    0,  -63,    0, -224,    0,    0,    0,    0,  -64,
 -225,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  -68,    0,  -63,    0,    0,    0,    0,    0,    0,
 -197,  -62, -188,    0,    0,    0,    0,    0,  -61,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -256,    0,
 -127,    0,    0,    0, -167, -146,  -60, -114,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -116,  -63,
  -63,    0,    0,    0,    0,    0,    0,    0,    0, -125,
    0, -222,    0,    0,  -59,    0,    0,    0,    0,    0,
  -63,    0,    0,    0,    0,    0,    0,  -63,    0,    0,
 -222,    0,
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
    0,    0,
};
#endif
static const YYINT yygindex[] = {                         0,
  -14,   51,   50,  -20,    0,  193,  196,  184,  147,  -10,
  149,    0,    0,    0,    0,    0,    0,  -82,    0,    0,
   67,    0,    0,    0,    0,    0,  -47,    0,   52,    0,
    0,    0,    0,    0,    0,  108,
};
#define YYTABLESIZE 213
static const YYINT yytable[] = {                         32,
   77,   95,   96,    1,    9,   27,   11,    2,  103,   33,
   99,  100,   25,   32,   32,   32,   32,   32,   32,   32,
    3,    8,   32,   53,   54,   55,   56,   57,   58,   10,
   32,   12,   63,   16,   78,   79,   46,   34,   46,   15,
   82,   32,   27,   32,   32,   30,   69,   16,   46,  139,
   46,  141,   28,   88,   93,   16,   46,   70,   46,   46,
   29,   71,   30,   31,   68,   68,   68,   68,   68,  106,
   68,   68,   68,   63,   63,   63,  111,   68,   68,   63,
   63,   63,  117,  118,   95,   96,   63,   63,   21,   79,
   17,  124,   95,   96,   62,   62,   62,   18,  104,  129,
   62,   62,   62,   19,  154,   95,   96,   62,   62,   32,
   32,   94,   95,   96,   20,   61,   61,   61,  140,  137,
  138,   61,   61,   61,   97,   98,   95,   96,   61,   61,
   32,  113,   25,   49,  134,  135,   22,   32,   50,   40,
  153,   35,   35,   28,   28,  115,  116,  159,  119,  120,
   41,   42,   43,   44,   46,   45,   47,   48,   51,   52,
   61,   62,   64,   92,   68,   83,   84,   87,   89,   91,
   90,  107,   50,  108,  109,  142,  145,  101,  102,  105,
  114,  130,  131,  112,  133,  125,  143,  151,  132,  155,
  158,    1,  152,  160,  156,   16,    8,   13,   51,  148,
   14,   10,   26,   57,   16,   45,   59,   43,   86,   85,
  147,  123,  162,
};
static const YYINT yycheck[] = {                         20,
   48,  263,  264,  257,  257,  262,  257,  261,  270,   20,
  265,  266,  269,   34,   35,   36,   37,   38,   39,   40,
  274,  267,   43,   34,   35,   36,   37,   38,   39,  282,
   51,  282,   43,  259,   49,   50,  259,  262,  261,  268,
   51,   62,  261,   64,  269,  270,  267,  273,  271,  132,
  273,  134,  271,   64,   69,  267,  279,  278,  281,  282,
  279,  282,  281,  282,  262,  263,  264,  265,  266,   84,
  268,  269,  270,  262,  263,  264,   91,  275,  276,  268,
  269,  270,   97,   98,  263,  264,  275,  276,  268,  104,
  267,  270,  263,  264,  262,  263,  264,  267,  269,  114,
  268,  269,  270,  267,  152,  263,  264,  275,  276,  130,
  131,  262,  263,  264,  258,  262,  263,  264,  133,  130,
  131,  268,  269,  270,  275,  276,  263,  264,  275,  276,
  151,  268,  268,  262,  269,  270,  261,  158,  267,  258,
  151,  269,  270,  269,  270,   95,   96,  158,   99,  100,
  282,  268,  258,  268,  267,  282,  267,  267,  270,  259,
  269,  258,  258,  268,  282,  259,  273,  259,  270,  262,
  269,  259,  267,  259,  282,  259,  280,  268,  268,  268,
  262,  258,  258,  270,  262,  270,  259,  258,  269,  259,
  258,    0,  267,  259,  268,  259,  268,    5,  258,  279,
    5,  268,   19,  268,  273,  268,  268,  268,   62,   61,
  144,  104,  161,
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
   -1,   -1,
};
#endif
#define YYFINAL 4
#ifndef YYDEBUG
#define YYDEBUG 1
#endif
#define YYMAXTOKEN 282
#define YYUNDFTOKEN 321
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
"tINT","tEGAL","tSOU","tADD","tMUL","tDIV","tPO","tPF","tV","tFI","tPRINTF",
"tERROR","tRETURN","tVOID","tINF","tSUP","tG","tNB","tIF","tELSE","tWHILE",
"tID","$accept","Programme","Calcul","DivMul","Terme","AppelFonction",
"Fonctions","Main","Fonction","ArgumentsDeclaration","BodyRet","Body",
"ListeArgumentsDeclaration","Declaration","Initialisation","Affectation",
"BrancheIf","BrancheWhile","Printf","MultDeclaInit","$$1","$$2",
"FinInitialisation","$$3","$$4","$$5","$$6","$$7","Conditions","$$8",
"BranchesElseif","$$9","$$10","$$11","$$12","$$13","Arguments","ListeArguments",
"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : Programme",
"Programme : Fonctions",
"Fonctions : Fonctions Main",
"Fonctions : Main",
"Fonctions : Fonctions Fonction",
"Fonctions : Fonction",
"Fonction : tINT tID tPO ArgumentsDeclaration tPF tAO BodyRet tAF",
"Fonction : tVOID tID tPO ArgumentsDeclaration tPF tAO Body tAF",
"ArgumentsDeclaration :",
"ArgumentsDeclaration : ListeArgumentsDeclaration",
"ListeArgumentsDeclaration : tINT tID",
"ListeArgumentsDeclaration : tINT tID tV ListeArgumentsDeclaration",
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
"$$1 :",
"MultDeclaInit : tID $$1 tV MultDeclaInit",
"$$2 :",
"$$3 :",
"MultDeclaInit : tID $$2 tEGAL Calcul $$3 FinInitialisation",
"$$4 :",
"Declaration : tINT tID $$4 tFI",
"$$5 :",
"Declaration : tINT tID $$5 tV MultDeclaInit",
"$$6 :",
"$$7 :",
"Initialisation : tINT tID $$6 tEGAL Calcul $$7 FinInitialisation",
"FinInitialisation : tFI",
"FinInitialisation : tV MultDeclaInit",
"Affectation : tID tEGAL Calcul tFI",
"$$8 :",
"BrancheIf : tIF tPO Conditions tPF $$8 tAO Body tAF BranchesElseif",
"Conditions : Calcul tEGAL tEGAL Calcul",
"Conditions : Calcul tINF Calcul",
"Conditions : Calcul tSUP Calcul",
"Conditions : Calcul",
"BranchesElseif :",
"$$9 :",
"$$10 :",
"$$11 :",
"BranchesElseif : tELSE tIF $$9 tPO Conditions tPF $$10 tAO Body tAF $$11 BranchesElseif",
"$$12 :",
"BranchesElseif : tELSE $$12 tAO Body tAF",
"$$13 :",
"BrancheWhile : tWHILE tPO Conditions tPF $$13 tAO Body tAF",
"Printf : tPRINTF tPO tID tPF tFI",
"AppelFonction : tID tPO Arguments tPF",
"Arguments :",
"Arguments : ListeArguments",
"ListeArguments : Calcul",
"ListeArguments : Calcul tV ListeArguments",
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
#line 99 "compil.y"


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
#line 558 "y.tab.c"

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
#line 22 "compil.y"
	{ printf("Programme\n"); }
#line 1231 "y.tab.c"
break;
case 2:
#line 23 "compil.y"
	{ printf("Fonctions Main\n"); }
#line 1236 "y.tab.c"
break;
case 3:
#line 24 "compil.y"
	{ printf("Main\n"); }
#line 1241 "y.tab.c"
break;
case 4:
#line 25 "compil.y"
	{ printf("Fonctions Fonction\n"); }
#line 1246 "y.tab.c"
break;
case 5:
#line 26 "compil.y"
	{ printf("Fonction\n"); }
#line 1251 "y.tab.c"
break;
case 6:
#line 27 "compil.y"
	{ printf("Fonction %s avec return\n",yystack.l_mark[-6].var); }
#line 1256 "y.tab.c"
break;
case 7:
#line 28 "compil.y"
	{ printf("Fonction %s sans return\n",yystack.l_mark[-6].var); }
#line 1261 "y.tab.c"
break;
case 12:
#line 33 "compil.y"
	{ printf("Main avec return\n"); }
#line 1266 "y.tab.c"
break;
case 13:
#line 34 "compil.y"
	{ printf("Main sans return \n"); }
#line 1271 "y.tab.c"
break;
case 14:
#line 35 "compil.y"
	{ printf("Main sans rien \n"); }
#line 1276 "y.tab.c"
break;
case 15:
#line 37 "compil.y"
	{ printf("Return : %d\n",yystack.l_mark[-1].nb); }
#line 1281 "y.tab.c"
break;
case 24:
#line 49 "compil.y"
	{ printf("Declaration : %s\n",yystack.l_mark[-1].var); Add_symb(yystack.l_mark[-1].var, "int", false); }
#line 1286 "y.tab.c"
break;
case 25:
#line 50 "compil.y"
	{ printf("Declaration : %s\n",yystack.l_mark[0].var); Add_symb(yystack.l_mark[0].var, "int", false); }
#line 1291 "y.tab.c"
break;
case 27:
#line 51 "compil.y"
	{printf("Affectation  : %s = ",yystack.l_mark[0].var); Add_symb(yystack.l_mark[0].var, "int", true);}
#line 1296 "y.tab.c"
break;
case 28:
#line 51 "compil.y"
	{printf("%d\n",yystack.l_mark[0].nb); Add_instruction3(COP, Get_addr(yystack.l_mark[-3].var), Get_addr_top()); free_temp_top();}
#line 1301 "y.tab.c"
break;
case 30:
#line 54 "compil.y"
	{ printf("Declaration 1: %s\n",yystack.l_mark[0].var); Add_symb(yystack.l_mark[0].var, "int", false); }
#line 1306 "y.tab.c"
break;
case 32:
#line 55 "compil.y"
	{ printf("Declaration 2: %s\n",yystack.l_mark[0].var); Add_symb(yystack.l_mark[0].var, "int", false); }
#line 1311 "y.tab.c"
break;
case 34:
#line 58 "compil.y"
	{printf("Affectation  : %s = ",yystack.l_mark[0].var); Add_symb(yystack.l_mark[0].var, "int", true);}
#line 1316 "y.tab.c"
break;
case 35:
#line 58 "compil.y"
	{printf("%d\n",yystack.l_mark[0].nb); Add_instruction3(COP, Get_addr(yystack.l_mark[-3].var), Get_addr_top()); free_temp_top();}
#line 1321 "y.tab.c"
break;
case 39:
#line 63 "compil.y"
	{ printf("Affectation directe, par variable, par calcul ou par appel de fonction: %s = %d\n",yystack.l_mark[-3].var,yystack.l_mark[-1].nb); Add_instruction3(COP, Get_addr(yystack.l_mark[-3].var), Get_addr_top()); free_temp_top(); Set_init_symbole(yystack.l_mark[-3].var);}
#line 1326 "y.tab.c"
break;
case 40:
#line 65 "compil.y"
	{ Add_instruction3(JMF , Get_addr_top(), -1); free_temp_top(); Inc_depth(); }
#line 1331 "y.tab.c"
break;
case 42:
#line 67 "compil.y"
	{ printf("Comparaison ==\n"); Add_instruction4(EQU, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
#line 1336 "y.tab.c"
break;
case 43:
#line 68 "compil.y"
	{ printf("Comparaison <\n"); Add_instruction4(INF, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
#line 1341 "y.tab.c"
break;
case 44:
#line 69 "compil.y"
	{ printf("Comparaison >\n"); Add_instruction4(SUP, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
#line 1346 "y.tab.c"
break;
case 45:
#line 70 "compil.y"
	{ printf("Comparaison true or false\n"); Add_instruction4(EQU, Get_addr_second(), 1, Get_addr_top());}
#line 1351 "y.tab.c"
break;
case 46:
#line 76 "compil.y"
	{patchJMF(get_nb_instructions()+1); Dec_depth();}
#line 1356 "y.tab.c"
break;
case 47:
#line 77 "compil.y"
	{patchJMF(get_nb_instructions()+2); Add_instruction2(JMP , -1);}
#line 1361 "y.tab.c"
break;
case 48:
#line 77 "compil.y"
	{ Add_instruction3(JMF , Get_addr_top(), -1); free_temp_top();}
#line 1366 "y.tab.c"
break;
case 49:
#line 77 "compil.y"
	{patchJMP(get_nb_instructions()+1);}
#line 1371 "y.tab.c"
break;
case 51:
#line 78 "compil.y"
	{ patchJMF(get_nb_instructions()+2); Add_instruction2(JMP , -1);}
#line 1376 "y.tab.c"
break;
case 52:
#line 78 "compil.y"
	{patchJMP(get_nb_instructions()+1); Print_ts(); Dec_depth(); printf("Branche else\n");}
#line 1381 "y.tab.c"
break;
case 53:
#line 80 "compil.y"
	{  Add_instruction3(JMF , Get_addr_top(), -1); free_temp_top(); Inc_depth(); yystack.l_mark[-3].nb = get_nb_instructions() - 3;}
#line 1386 "y.tab.c"
break;
case 54:
#line 80 "compil.y"
	{ patchJMF(get_nb_instructions()+2); Add_instruction2(JMP , yystack.l_mark[-7].nb); printf("Branche while\n"); }
#line 1391 "y.tab.c"
break;
case 55:
#line 81 "compil.y"
	{ printf("printf : %s \n", yystack.l_mark[-2].var); Add_instruction2(PRI, Get_addr(yystack.l_mark[-2].var));}
#line 1396 "y.tab.c"
break;
case 56:
#line 82 "compil.y"
	{ printf("Appel fonction : %s\n", yystack.l_mark[-3].var);}
#line 1401 "y.tab.c"
break;
case 61:
#line 88 "compil.y"
	{ Add_instruction4(ADD, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
#line 1406 "y.tab.c"
break;
case 62:
#line 89 "compil.y"
	{ Add_instruction4(SOU, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
#line 1411 "y.tab.c"
break;
case 64:
#line 91 "compil.y"
	{ Add_instruction4(MUL, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
#line 1416 "y.tab.c"
break;
case 65:
#line 92 "compil.y"
	{ Add_instruction4(DIV, Get_addr_second(), Get_addr_second(), Get_addr_top()); free_temp_top(); }
#line 1421 "y.tab.c"
break;
case 68:
#line 95 "compil.y"
	{ Add_symb_temp("int"); Add_instruction3(COP, Get_addr_top(), Get_addr(yystack.l_mark[0].var)) ; }
#line 1426 "y.tab.c"
break;
case 69:
#line 96 "compil.y"
	{ Add_symb_temp("int"); Add_instruction3(AFC, Get_addr_top(),yystack.l_mark[0].nb) ; }
#line 1431 "y.tab.c"
break;
#line 1433 "y.tab.c"
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
