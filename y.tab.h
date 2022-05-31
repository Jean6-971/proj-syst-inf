#ifndef _yy_defines_h_
#define _yy_defines_h_

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
#define tRETURN 271
#define tINF 272
#define tSUP 273
#define tNB 274
#define tIF 275
#define tELSE 276
#define tWHILE 277
#define tVOID 278
#define tINT 279
#define tID 280
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union YYSTYPE { int nb; char var[16]; } YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;

#endif /* _yy_defines_h_ */
