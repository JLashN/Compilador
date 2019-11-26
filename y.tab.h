/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
#line 16 "bison.y" /* yacc.c:1921  */

#include "SymbolTable/TablaDeSimbolos.h"

	typedef struct E {
		int place;
		Tipo type;
	} E;

#line 57 "y.tab.h" /* yacc.c:1921  */

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
    BOPREL = 302,
    BCONTINUAR = 303,
    BDOS_PUNTOS_IGUAL = 304,
    BSI = 305,
    BENTONCES = 306,
    BMIENTRAS = 307,
    BFSI = 308,
    BSINO = 309,
    BHACER = 310,
    BFMIENTRAS = 311,
    BPARA = 312,
    BHASTA = 313,
    BFPARA = 314,
    BACCION = 315,
    BFUNCION = 316,
    BDEV = 317,
    BFFUNCION = 318,
    BFACCION = 319,
    BES = 320,
    BIDENTIFICADORB = 321,
    BLITERAL_ENTERO = 322,
    BLITERAL_REAL = 323,
    UMINUS = 324,
    UBNO = 325
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
#define BOPREL 302
#define BCONTINUAR 303
#define BDOS_PUNTOS_IGUAL 304
#define BSI 305
#define BENTONCES 306
#define BMIENTRAS 307
#define BFSI 308
#define BSINO 309
#define BHACER 310
#define BFMIENTRAS 311
#define BPARA 312
#define BHASTA 313
#define BFPARA 314
#define BACCION 315
#define BFUNCION 316
#define BDEV 317
#define BFFUNCION 318
#define BFACCION 319
#define BES 320
#define BIDENTIFICADORB 321
#define BLITERAL_ENTERO 322
#define BLITERAL_REAL 323
#define UMINUS 324
#define UBNO 325

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 24 "bison.y" /* yacc.c:1921  */

	long valor_entero;
	char* valor_texto;
	double valor_doble;
	char valor_letra;
	E e;

#line 217 "y.tab.h" /* yacc.c:1921  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
