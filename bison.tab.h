/* A Bison parser, made by GNU Bison 3.4.2.  */

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

#ifndef YY_YY_BISON_TAB_H_INCLUDED
# define YY_YY_BISON_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

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
    BLITERAL_NUMERICO = 296,
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
    BES = 320
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 6 "bison.y"

	long valor_entero;
	char* valor_texto;
	double valor_doble;

#line 129 "bison.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */
