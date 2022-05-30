#ifndef _yy_defines_h_
#define _yy_defines_h_

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
#define tINF 274
#define tSUP 275
#define tG 276
#define tNB 277
#define tIF 278
#define tELSE 279
#define tWHILE 280
#define tVOID 281
#define tID 282
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
