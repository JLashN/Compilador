/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 18 "bison.y" /* yacc.c:1909  */

#include "SymbolTable/TablaDeSimbolos.h"
#include "booleanos/booleanos.h"

	typedef struct E {
		int place;
		Tipo type;
	} E;

	typedef struct B {
		Patched *t;
		Patched *f;
	} B;

#line 59 "y.tab.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BALGORITMO = 258,
    BIDENTIFICADOR = 259,
    BPUNTO_Y_COMA = 260,
    BFALGORITMO = 261,
    BPUNTO = 262,
    BCOMENTARIO = 263,
    BTIPO = 264,
    BFTIPO = 265,
    BCONST = 266,
    BFCONST = 267,
    BVAR = 268,
    BFVAR = 269,
    BIGUAL = 270,
    BTUPLA = 271,
    BFTUPLA = 272,
    BTABLA = 273,
    BCORCHETE_APERTURA = 274,
    BDE = 275,
    BEND = 276,
    BLITERAL = 277,
    BDEF = 278,
    BREF = 279,
    BTIPO_BASE = 280,
    BPUNTOSS = 281,
    BLITERAL_CARACTER = 282,
    BCORCHETE_CIERRE = 283,
    BDOS_PUNTOS = 284,
    BCOMA = 285,
    BENT = 286,
    BSAL = 287,
    BSUMA = 288,
    BMENOS = 289,
    BPOR = 290,
    BENTRE = 291,
    BMOD = 292,
    BDIV = 293,
    BPARENTESIS_APERTURA = 294,
    BPARENTESIS_CIERRE = 295,
    BLITERAL_CADENA = 296,
    BY = 297,
    BO = 298,
    BNO = 299,
    BVERDADERO = 300,
    BFALSO = 301,
    BCONTINUAR = 302,
    BDOS_PUNTOS_IGUAL = 303,
    BSI = 304,
    BENTONCES = 305,
    BMIENTRAS = 306,
    BFSI = 307,
    BSINO = 308,
    BHACER = 309,
    BFMIENTRAS = 310,
    BPARA = 311,
    BHASTA = 312,
    BFPARA = 313,
    BACCION = 314,
    BFUNCION = 315,
    BDEV = 316,
    BFFUNCION = 317,
    BFACCION = 318,
    BES = 319,
    BIDENTIFICADORB = 320,
    BLITERAL_ENTERO = 321,
    BLITERAL_REAL = 322,
    BMAYOR = 323,
    BMENOR = 324,
    BMAYORIGUAL = 325,
    BMENORIGUAL = 326,
    BDIFERENTE = 327,
    UMINUS = 328,
    UBNO = 329
  };
#endif
/* Tokens.  */
#define BALGORITMO 258
#define BIDENTIFICADOR 259
#define BPUNTO_Y_COMA 260
#define BFALGORITMO 261
#define BPUNTO 262
#define BCOMENTARIO 263
#define BTIPO 264
#define BFTIPO 265
#define BCONST 266
#define BFCONST 267
#define BVAR 268
#define BFVAR 269
#define BIGUAL 270
#define BTUPLA 271
#define BFTUPLA 272
#define BTABLA 273
#define BCORCHETE_APERTURA 274
#define BDE 275
#define BEND 276
#define BLITERAL 277
#define BDEF 278
#define BREF 279
#define BTIPO_BASE 280
#define BPUNTOSS 281
#define BLITERAL_CARACTER 282
#define BCORCHETE_CIERRE 283
#define BDOS_PUNTOS 284
#define BCOMA 285
#define BENT 286
#define BSAL 287
#define BSUMA 288
#define BMENOS 289
#define BPOR 290
#define BENTRE 291
#define BMOD 292
#define BDIV 293
#define BPARENTESIS_APERTURA 294
#define BPARENTESIS_CIERRE 295
#define BLITERAL_CADENA 296
#define BY 297
#define BO 298
#define BNO 299
#define BVERDADERO 300
#define BFALSO 301
#define BCONTINUAR 302
#define BDOS_PUNTOS_IGUAL 303
#define BSI 304
#define BENTONCES 305
#define BMIENTRAS 306
#define BFSI 307
#define BSINO 308
#define BHACER 309
#define BFMIENTRAS 310
#define BPARA 311
#define BHASTA 312
#define BFPARA 313
#define BACCION 314
#define BFUNCION 315
#define BDEV 316
#define BFFUNCION 317
#define BFACCION 318
#define BES 319
#define BIDENTIFICADORB 320
#define BLITERAL_ENTERO 321
#define BLITERAL_REAL 322
#define BMAYOR 323
#define BMENOR 324
#define BMAYORIGUAL 325
#define BMENORIGUAL 326
#define BDIFERENTE 327
#define UMINUS 328
#define UBNO 329

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 32 "bison.y" /* yacc.c:1909  */

	long valor_entero;
	char* valor_texto;
	double valor_doble;
	char valor_letra;
	E e;
	B b;
	int quad;
	Patched* next;

#line 230 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
