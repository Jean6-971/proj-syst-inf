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
