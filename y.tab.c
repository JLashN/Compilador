/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "bison.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "SymbolTable/TablaDeSimbolos.h"
#include "booleanos/booleanos.h"
#include "QuadruplesTable/QuadrupleTable.h"
void yyerror(const char* s);
int yylex();
static FILE* yyin;
TablaDeSimbolos listavariables;
TablaDeSimbolos listaconstantes;
TablaDeCuadruplas listainstrucciones;


#line 83 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 18 "bison.y" /* yacc.c:355  */

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

#line 128 "y.tab.c" /* yacc.c:355  */

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
#line 32 "bison.y" /* yacc.c:355  */

	long valor_entero;
	char* valor_texto;
	double valor_doble;
	char valor_letra;
	E e;
	B b;
	int quad;
	Patched* next;

#line 299 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 316 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   364

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  305

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   180,   180,   186,   188,   190,   191,   192,   194,   195,
     196,   198,   200,   201,   202,   203,   205,   207,   209,   211,
     211,   213,   215,   216,   217,   218,   219,   220,   221,   225,
     226,   228,   229,   231,   232,   233,   234,   235,   236,   238,
     239,   241,   242,   244,   245,   247,   248,   249,   250,   252,
     253,   254,   255,   257,   258,   259,   260,   262,   263,   264,
     266,   268,   271,   272,   274,   282,   301,   324,   347,   370,
     393,   419,   420,   421,   422,   423,   435,   436,   442,   448,
     452,   460,   466,   471,   475,   481,   487,   493,   499,   505,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   524,   536,   537,   549,   558,   559,   560,   561,
     566,   571,   587,   588,   589,   590,   591,   592,   594,   595,
     596,   599,   600,   601,   603,   605
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BALGORITMO", "BIDENTIFICADOR",
  "BPUNTO_Y_COMA", "BFALGORITMO", "BPUNTO", "BCOMENTARIO", "BTIPO",
  "BFTIPO", "BCONST", "BFCONST", "BVAR", "BFVAR", "BIGUAL", "BTUPLA",
  "BFTUPLA", "BTABLA", "BCORCHETE_APERTURA", "BDE", "BEND", "BLITERAL",
  "BDEF", "BREF", "BTIPO_BASE", "BPUNTOSS", "BLITERAL_CARACTER",
  "BCORCHETE_CIERRE", "BDOS_PUNTOS", "BCOMA", "BENT", "BSAL", "BSUMA",
  "BMENOS", "BPOR", "BENTRE", "BMOD", "BDIV", "BPARENTESIS_APERTURA",
  "BPARENTESIS_CIERRE", "BLITERAL_CADENA", "BY", "BO", "BNO", "BVERDADERO",
  "BFALSO", "BCONTINUAR", "BDOS_PUNTOS_IGUAL", "BSI", "BENTONCES",
  "BMIENTRAS", "BFSI", "BSINO", "BHACER", "BFMIENTRAS", "BPARA", "BHASTA",
  "BFPARA", "BACCION", "BFUNCION", "BDEV", "BFFUNCION", "BFACCION", "BES",
  "BIDENTIFICADORB", "BLITERAL_ENTERO", "BLITERAL_REAL", "BMAYOR",
  "BMENOR", "BMAYORIGUAL", "BMENORIGUAL", "BDIFERENTE", "UMINUS", "UBNO",
  "$accept", "desc_algoritmo", "cabecera_alg", "bloque_alg",
  "decl_globales", "decl_a_f", "bloque", "declaraciones",
  "declaracion_tipo", "declaracion_const", "declaracion_var",
  "lista_d_tipo", "$@1", "d_tipo", "expresion_t", "lista_campos",
  "lista_d_cte", "lista_d_var_entrada", "lista_d_var_salida",
  "lista_d_var", "lista_id_entrada", "lista_id_salida", "lista_id",
  "decl_ent_sal", "decl_ent", "decl_sal", "expresion",
  "asignacion_booleana", "exp_a", "exp_b", "operando", "operando_booleano",
  "instrucciones", "instruccion", "asignacion", "alternativa",
  "lista_opciones", "iteracion", "it_cota_exp", "it_cota_fija",
  "aux_cota_fija", "accion_d", "funcion_d", "a_cabecera", "f_cabecera",
  "d_par_form", "d_p_form", "funcion_ll", "l_ll", "M", "N", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329
};
# endif

#define YYPACT_NINF -228

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-228)))

#define YYTABLE_NINF -25

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      27,    52,    69,    97,  -228,    51,   106,     0,    28,    92,
      51,    51,   115,   133,   131,   150,   166,    20,   181,   183,
      10,    28,    28,    28,   206,   213,   132,    92,    92,  -228,
    -228,   204,   214,   -15,   127,   218,   152,   156,   222,   227,
     220,  -228,   200,   229,   229,   229,  -228,   127,  -228,   244,
    -228,  -228,  -228,  -228,  -228,   270,    31,   199,  -228,   250,
    -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,   225,
      28,   226,    28,    23,    24,   259,   240,  -228,  -228,  -228,
      43,   269,   255,   204,  -228,  -228,  -228,   271,   249,  -228,
      99,  -228,   285,   287,   288,   289,  -228,   127,   127,  -228,
    -228,   264,    62,  -228,  -228,   204,    20,   204,    20,   304,
      20,  -228,   244,   139,  -228,   216,    41,   127,   256,   258,
     229,   229,   229,   229,   229,   229,   310,   244,  -228,   244,
     127,    10,     4,   252,    20,   257,   160,   167,  -228,   311,
     169,   176,  -228,   312,  -228,  -228,   295,   308,   191,  -228,
     106,   191,     0,     0,     0,     0,   251,    38,  -228,   229,
     229,   229,   229,   229,   229,     0,  -228,  -228,  -228,  -228,
    -228,  -228,  -228,  -228,   296,   290,  -228,  -228,    74,   244,
    -228,   139,   139,  -228,  -228,  -228,  -228,   -14,   299,  -228,
     192,  -228,    20,    20,    20,   291,   323,  -228,   297,   244,
     204,    23,   204,    23,    23,   204,    24,   204,    24,    24,
     204,  -228,   303,  -228,  -228,  -228,  -228,  -228,  -228,  -228,
     270,   270,   270,   270,   270,   270,  -228,   127,   127,   244,
    -228,    10,  -228,  -228,    10,  -228,   309,   313,   314,   334,
       4,   317,   279,  -228,  -228,  -228,  -228,  -228,  -228,  -228,
    -228,  -228,  -228,   339,   191,   280,  -228,  -228,  -228,  -228,
      10,  -228,   204,   204,   204,  -228,  -228,   204,  -228,   269,
     318,   332,  -228,  -228,  -228,  -228,  -228,  -228,   343,  -228,
     329,   204,   298,  -228,   292,  -228,   204,   347,   127,  -228,
     300,  -228,  -228,   106,   112,   301,  -228,  -228,  -228,  -228,
      10,  -228,  -228,   298,  -228
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    21,    38,    15,    10,
       7,     7,     0,     0,     0,     0,     0,    44,     0,     0,
       0,    15,    15,    15,     0,     0,     0,    10,    10,     5,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,    90,     0,     0,     0,    97,     0,   124,     0,
      94,    74,    73,   103,    99,    62,    72,     0,    11,    96,
      98,   100,   101,   108,   107,    63,    12,    13,    14,     0,
      15,     0,    15,    40,    42,     0,    57,    59,     8,     9,
      90,    32,     0,     0,    28,    30,    27,     0,     0,    29,
      72,    16,     0,     0,     0,     0,    90,     0,     0,    81,
      82,     0,     0,    80,    17,     0,     0,     0,     0,     0,
      44,     2,     0,    76,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,   117,     0,    44,     0,     0,     0,    60,     0,
       0,     0,    61,     0,     3,    58,     0,     0,     0,    26,
      21,     0,    38,    38,    38,    38,     0,     0,    79,     0,
       0,     0,     0,     0,     0,    38,   124,   124,    53,    55,
      54,    56,    18,    43,   123,     0,    71,   124,     0,     0,
     124,    65,    66,    67,    68,    69,    70,    91,     0,   102,
      64,    95,     0,     0,     0,     0,     0,   112,     0,     0,
       0,     0,     0,     0,    40,     0,     0,     0,     0,    42,
       0,    22,     0,    19,    25,    36,    37,    34,    35,    83,
      84,    85,    86,    88,    89,    87,    33,     0,     0,     0,
     121,     0,   124,   111,     0,    92,     0,     0,     0,     0,
     117,     0,     0,    45,    47,    46,    48,    39,    49,    51,
      50,    52,    41,     0,     0,     0,    77,    78,   122,   125,
       0,   125,     0,     0,     0,   114,   116,     0,   113,    32,
       0,     0,   124,   125,   124,   118,   119,   120,     0,    31,
       0,     0,   106,   124,     0,   115,     0,     0,     0,   124,
       0,   110,    23,    21,     0,     0,   109,    20,   124,   104,
       0,   125,   124,   106,   105
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -228,  -228,  -228,  -228,   235,   232,   -30,   103,    53,   110,
    -228,  -144,  -228,   -60,  -140,    85,    15,   153,   147,  -101,
     -62,   -50,   -93,  -228,  -228,   282,   -20,  -228,   -27,   -44,
     -18,   -19,  -112,  -228,   315,  -228,    56,  -228,  -228,  -228,
    -228,  -228,  -228,  -228,  -228,   120,  -228,  -228,   134,  -145,
    -227
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    18,     9,    26,    19,    20,    21,    22,
      23,    13,   255,    87,    88,   147,    16,   138,   142,    38,
     139,   143,    39,    75,    76,    77,    89,    54,    55,   102,
      90,   103,    58,    59,    60,    61,   289,    62,    63,    64,
     119,    27,    28,    70,    72,   195,   196,    65,   175,   117,
     272
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,    57,    56,   116,    14,   127,   213,   101,   212,   173,
     128,   214,    92,   169,    42,   171,   113,   114,   115,   191,
     101,   227,   228,   149,    36,   192,    93,   136,   140,    53,
       1,    56,   231,   198,   274,   234,   193,     6,   126,     7,
     133,    17,   135,    43,    44,   168,   283,   170,   -24,    45,
     127,    94,    95,   157,   158,   128,     3,    46,    10,    47,
       6,    48,     7,    10,    10,    15,    49,   165,   194,     4,
     156,   101,   -24,   178,   302,    50,    51,    52,   219,   129,
     166,   167,   112,   166,   167,    37,   190,   260,   137,   141,
     101,   177,   174,   181,   182,   183,   184,   185,   186,   236,
     237,   238,     5,   101,   166,   167,   126,   188,   187,   189,
      12,    53,    57,    56,   270,    11,   166,   167,   127,   259,
      11,    11,   261,   128,    66,    67,    68,   282,   232,   284,
      31,    96,   220,   221,   222,   223,   224,   225,   290,   244,
     243,   246,   245,    32,   295,   248,    33,   250,   273,   297,
     253,    24,    25,   300,   166,   167,   249,   303,   251,   233,
      43,    44,   298,    73,    74,    34,    97,   215,   216,   217,
     218,    98,    99,   100,   122,   123,   124,   125,    35,   242,
     226,   105,   106,   256,   257,   107,   108,    40,   301,   200,
     201,    41,    50,    51,    52,    42,   202,   203,   205,   206,
     101,   101,   275,   276,   277,   207,   208,   278,    80,   174,
      69,    53,    57,    56,    53,    57,    56,    71,    85,    91,
      81,   287,    82,   104,    43,    44,   292,   111,    83,    84,
      45,    85,   110,    96,   166,   167,   109,    43,    44,   112,
      53,    57,    56,    45,   294,    29,    30,   130,    42,   120,
     121,   122,   123,   124,   125,   131,   176,    51,    52,    78,
      79,   101,    43,    44,   132,   134,   159,   144,    45,    86,
      51,    52,    74,   146,   148,   151,   150,    43,    44,   159,
      53,    57,    56,    45,   120,   121,   122,   123,   124,   125,
     152,   176,   153,   154,   155,    51,    52,   120,   121,   122,
     123,   124,   125,   120,   121,   122,   123,   124,   125,   172,
      51,    52,   180,   179,    96,   197,   204,   209,   199,   160,
     161,   162,   163,   164,   210,   211,   229,   235,   240,   254,
     230,   239,   160,   161,   162,   163,   164,   241,   262,   265,
     267,   268,   263,   264,   269,   271,   280,   281,   285,   286,
     291,   288,   293,   299,   279,   296,   252,   247,   145,   304,
     266,     0,     0,   258,   118
};

static const yytype_int16 yycheck[] =
{
      20,    20,    20,    47,     4,    19,   150,    34,   148,   110,
      24,   151,    27,   106,     4,   108,    43,    44,    45,   131,
      47,   166,   167,    83,     4,    21,    41,     4,     4,    49,
       3,    49,   177,   134,   261,   180,    32,     9,     7,    11,
      70,    13,    72,    33,    34,   105,   273,   107,     5,    39,
      19,    66,    67,    97,    98,    24,     4,    47,     5,    49,
       9,    51,    11,    10,    11,    65,    56,     5,    64,     0,
      97,    98,    29,   117,   301,    65,    66,    67,    40,    48,
      42,    43,    39,    42,    43,    65,   130,   232,    65,    65,
     117,    50,   112,   120,   121,   122,   123,   124,   125,   192,
     193,   194,     5,   130,    42,    43,     7,   127,   126,   129,
       4,   131,   131,   131,   254,     5,    42,    43,    19,   231,
      10,    11,   234,    24,    21,    22,    23,   272,    54,   274,
      15,     4,   159,   160,   161,   162,   163,   164,   283,   201,
     200,   203,   202,    10,   289,   205,    15,   207,   260,   293,
     210,    59,    60,   298,    42,    43,   206,   302,   208,   179,
      33,    34,    50,    31,    32,    15,    39,   152,   153,   154,
     155,    44,    45,    46,    35,    36,    37,    38,    12,   199,
     165,    29,    30,   227,   228,    29,    30,     6,   300,    29,
      30,     8,    65,    66,    67,     4,    29,    30,    29,    30,
     227,   228,   262,   263,   264,    29,    30,   267,     4,   229,
       4,   231,   231,   231,   234,   234,   234,     4,    27,     5,
      16,   281,    18,     5,    33,    34,   286,     7,    24,    25,
      39,    27,     5,     4,    42,    43,    14,    33,    34,    39,
     260,   260,   260,    39,   288,    10,    11,    48,     4,    33,
      34,    35,    36,    37,    38,     5,    40,    66,    67,    27,
      28,   288,    33,    34,    39,    39,    15,     8,    39,    65,
      66,    67,    32,     4,    19,    26,     5,    33,    34,    15,
     300,   300,   300,    39,    33,    34,    35,    36,    37,    38,
       5,    40,     5,     5,     5,    66,    67,    33,    34,    35,
      36,    37,    38,    33,    34,    35,    36,    37,    38,     5,
      66,    67,    54,    57,     4,    63,     5,     5,    61,    68,
      69,    70,    71,    72,    29,    17,    30,    28,     5,    26,
      40,    40,    68,    69,    70,    71,    72,    40,    29,     5,
      23,    62,    29,    29,     5,    65,    28,    15,     5,    20,
      58,    53,     5,    52,   269,    55,   209,   204,    76,   303,
     240,    -1,    -1,   229,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    76,     4,     0,     5,     9,    11,    77,    79,
      83,    84,     4,    86,     4,    65,    91,    13,    78,    81,
      82,    83,    84,    85,    59,    60,    80,   116,   117,    79,
      79,    15,    10,    15,    15,    12,     4,    65,    94,    97,
       6,     8,     4,    33,    34,    39,    47,    49,    51,    56,
      65,    66,    67,   101,   102,   103,   105,   106,   107,   108,
     109,   110,   112,   113,   114,   122,    82,    82,    82,     4,
     118,     4,   119,    31,    32,    98,    99,   100,    80,    80,
       4,    16,    18,    24,    25,    27,    65,    88,    89,   101,
     105,     5,    27,    41,    66,    67,     4,    39,    44,    45,
      46,   103,   104,   106,     5,    29,    30,    29,    30,    14,
       5,     7,    39,   103,   103,   103,   104,   124,   109,   115,
      33,    34,    35,    36,    37,    38,     7,    19,    24,    48,
      48,     5,    39,    81,    39,    81,     4,    65,    92,    95,
       4,    65,    93,    96,     8,   100,     4,    90,    19,    88,
       5,    26,     5,     5,     5,     5,   103,   104,   104,    15,
      68,    69,    70,    71,    72,     5,    42,    43,    88,    97,
      88,    97,     5,    94,   101,   123,    40,    50,   104,    57,
      54,   103,   103,   103,   103,   103,   103,   105,   101,   101,
     104,   107,    21,    32,    64,   120,   121,    63,    94,    61,
      29,    30,    29,    30,     5,    29,    30,    29,    30,     5,
      29,    17,    89,    86,    89,    91,    91,    91,    91,    40,
     103,   103,   103,   103,   103,   103,    91,   124,   124,    30,
      40,   124,    54,   101,   124,    28,    97,    97,    97,    40,
       5,    40,   101,    88,    95,    88,    95,    92,    88,    96,
      88,    96,    93,    88,    26,    87,   104,   104,   123,   107,
     124,   107,    29,    29,    29,     5,   120,    23,    62,     5,
      89,    65,   125,   107,   125,    88,    88,    88,    88,    90,
      28,    15,   124,   125,   124,     5,    20,    88,    53,   111,
     124,    58,    88,     5,   104,   124,    55,    86,    50,    52,
     124,   107,   125,   124,   111
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    75,    76,    77,    78,    79,    79,    79,    80,    80,
      80,    81,    82,    82,    82,    82,    83,    84,    85,    87,
      86,    86,    88,    88,    88,    88,    88,    88,    88,    89,
      89,    90,    90,    91,    91,    91,    91,    91,    91,    92,
      92,    93,    93,    94,    94,    95,    95,    95,    95,    96,
      96,    96,    96,    97,    97,    97,    97,    98,    98,    98,
      99,   100,   101,   101,   102,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     105,   105,   105,   105,   106,   107,   107,   108,   108,   108,
     108,   108,   109,   109,   110,   111,   111,   112,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   120,   121,   121,
     121,   122,   123,   123,   124,   125
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     0,
      11,     0,     3,     8,     1,     3,     2,     1,     1,     1,
       1,     5,     0,     5,     5,     5,     5,     5,     0,     3,
       0,     3,     0,     3,     0,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     2,     1,
       2,     2,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     2,     2,     4,     4,     2,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     4,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     1,    10,     8,     0,     1,     1,     9,
       8,     3,     4,     6,     5,     7,     3,     0,     4,     4,
       4,     4,     3,     1,     0,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 180 "bison.y" /* yacc.c:1646  */
    {
	gen(&listainstrucciones,"fin",-1,-1,-1);
	printf("BALGORITMO BIDENTIFICADOR BPUNTO_Y_COMA cabecera_alg bloque_alg BFALGORITMO BPUNTO por desc_algoritmo\n");}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 186 "bison.y" /* yacc.c:1646  */
    {printf("decl_globales decl_a_f decl_ent_sal BCOMENTARIO por cabecera_alg\n");}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 188 "bison.y" /* yacc.c:1646  */
    {printf("bloque BCOMENTARIO por bloque_alg\n");}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 190 "bison.y" /* yacc.c:1646  */
    {printf("declaracion_tipo decl_globales por decl_globales\n");}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 191 "bison.y" /* yacc.c:1646  */
    {printf("declaracion_const decl_globales por decl_globales\n");}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 192 "bison.y" /* yacc.c:1646  */
    {printf("empty por decl_globales\n");}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 194 "bison.y" /* yacc.c:1646  */
    {printf("accion_d decl_a_f por decl_a_f\n");}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 195 "bison.y" /* yacc.c:1646  */
    {printf("funcion_d decl_a_f por decl_a_f\n");}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 196 "bison.y" /* yacc.c:1646  */
    {printf("empty por decl_a_f\n");}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 198 "bison.y" /* yacc.c:1646  */
    {printf("declaraciones instrucciones por bloque\n");}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 200 "bison.y" /* yacc.c:1646  */
    {printf("declaracion_tipo declaraciones por declaraciones\n");}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 201 "bison.y" /* yacc.c:1646  */
    {printf("declaracion_const declaraciones por declaraciones\n");}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 202 "bison.y" /* yacc.c:1646  */
    {printf("declaracion_var declaraciones por declaraciones\n");}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 203 "bison.y" /* yacc.c:1646  */
    {printf("empty por declaraciones\n");}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 205 "bison.y" /* yacc.c:1646  */
    {printf("BTIPO lista_d_tipo BFTIPO BPUNTO_Y_COMA por declaracion_tipo\n");}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 207 "bison.y" /* yacc.c:1646  */
    {printf("BCONST lista_d_cte BFCONST BPUNTO_Y_COMA por declaracion_const\n");}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 209 "bison.y" /* yacc.c:1646  */
    {printf("BVAR lista_d_var BFVAR BPUNTO_Y_COMA por declaracion_var\n");}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 211 "bison.y" /* yacc.c:1646  */
    {printf("BIDENTIFICADOR BIGUAL d_tipo BPUNTO_Y_COMA lista_d_tipo por lista_d_tipo\n");}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 212 "bison.y" /* yacc.c:1646  */
    {printf("BIDENTIFICADORB BIGUAL d_tipo BPUNTO_Y_COMA lista_d_tipo por lista_d_tipo\n");}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 213 "bison.y" /* yacc.c:1646  */
    {printf("empty por lista_d_tipo\n");}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 215 "bison.y" /* yacc.c:1646  */
    {printf("BTUPLA lista_campos BFTUPLA por d_tipo\n");}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 216 "bison.y" /* yacc.c:1646  */
    {printf("BTABLA BCORCHETE_APERTURA expresion_t BPUNTOSS expresion_t BCORCHETE_CIERRE BDE d_tipo por d_tipo\n");}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 217 "bison.y" /* yacc.c:1646  */
    {printf("BIDENTIFICADOR por d_tipo\n");}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 218 "bison.y" /* yacc.c:1646  */
    {printf("expresion_t BPUNTOSS expresion_t por d_tipo\n");}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 219 "bison.y" /* yacc.c:1646  */
    {printf("BREF d_tipo por d_tipo\n");}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 220 "bison.y" /* yacc.c:1646  */
    {printf("BIDENTIFICADORB por d_tipo\n");}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 221 "bison.y" /* yacc.c:1646  */
    {
		(yyval.valor_texto) = (yyvsp[0].valor_texto);
		printf("BTIPO_BASE por d_tipo\n");}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 225 "bison.y" /* yacc.c:1646  */
    {printf("expresion por expresion_t\n");}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 226 "bison.y" /* yacc.c:1646  */
    {printf("BLITERAL_CARACTER por expresion_t\n");}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 228 "bison.y" /* yacc.c:1646  */
    {printf("BIDENTIFICADOR BDOS_PUNTOS d_tipo BPUNTO_Y_COMA lista_campos por lista_campos\n");}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 229 "bison.y" /* yacc.c:1646  */
    {printf("empty por lista_campos\n");}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 231 "bison.y" /* yacc.c:1646  */
    {insertar_variable(&listaconstantes,(yyvsp[-4].valor_texto),"booleano","constante"); printf("BIDENTIFICADORB BIGUAL exp_b BPUNTO_Y_COMA lista_d_cte por lista_d_cte\n");}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 232 "bison.y" /* yacc.c:1646  */
    {insertar_variable(&listaconstantes,(yyvsp[-4].valor_texto),"entero","constante"); printf("BIDENTIFICADOR BIGUAL BLITERAL_ENTERO BPUNTO_Y_COMA lista_d_cte por lista_d_cte\n");}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 233 "bison.y" /* yacc.c:1646  */
    {insertar_variable(&listaconstantes,(yyvsp[-4].valor_texto),"real","constante"); printf("BIDENTIFICADOR BIGUAL BLITERAL_REAL BPUNTO_Y_COMA lista_d_cte por lista_d_cte\n");}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 234 "bison.y" /* yacc.c:1646  */
    {insertar_variable(&listaconstantes,(yyvsp[-4].valor_texto),"caracter","constante"); printf("BIDENTIFICADOR BIGUAL BLITERAL_CARACTER BPUNTO_Y_COMA lista_d_cte por lista_d_cte\n");}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 235 "bison.y" /* yacc.c:1646  */
    {insertar_variable(&listaconstantes,(yyvsp[-4].valor_texto),"cadena","constante"); printf("BIDENTIFICADOR BIGUAL BLITERAL_CARACTER BPUNTO_Y_COMA lista_d_cte por lista_d_cte\n");}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 236 "bison.y" /* yacc.c:1646  */
    {printf("empty por lista_d_cte\n");}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 238 "bison.y" /* yacc.c:1646  */
    {printf("lista_id BDOS_PUNTOS BIDENTIFICADOR BPUNTO_Y_COMA lista_d_var por lista_d_var\n");}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 239 "bison.y" /* yacc.c:1646  */
    {printf("empty por lista_d_var\n");}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 241 "bison.y" /* yacc.c:1646  */
    {printf("lista_id BDOS_PUNTOS BIDENTIFICADOR BPUNTO_Y_COMA lista_d_var por lista_d_var\n");}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 242 "bison.y" /* yacc.c:1646  */
    {printf("empty por lista_d_var\n");}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 244 "bison.y" /* yacc.c:1646  */
    {printf("lista_id BDOS_PUNTOS BIDENTIFICADOR BPUNTO_Y_COMA lista_d_var por lista_d_var\n");}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 245 "bison.y" /* yacc.c:1646  */
    {printf("empty por lista_d_var\n");}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 247 "bison.y" /* yacc.c:1646  */
    { insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"entrada"); (yyval.valor_texto) = (yyvsp[0].valor_texto); printf("lista_id BDOS_PUNTOS d_tipo por lista_id");}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 248 "bison.y" /* yacc.c:1646  */
    { insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"entrada"); (yyval.valor_texto) = (yyvsp[0].valor_texto); printf("lista_id BDOS_PUNTOS d_tipo por lista_id");}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 249 "bison.y" /* yacc.c:1646  */
    {insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"entrada"); printf("BIDENTIFICADOR BCOMA lista_id por lista_id\n");}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 250 "bison.y" /* yacc.c:1646  */
    {insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"entrada"); printf("BIDENTIFICADORB BCOMA lista_id por lista_id\n");}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 252 "bison.y" /* yacc.c:1646  */
    { insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"salida"); (yyval.valor_texto) = (yyvsp[0].valor_texto); printf("lista_id BDOS_PUNTOS d_tipo por lista_id");}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 253 "bison.y" /* yacc.c:1646  */
    { insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"salida"); (yyval.valor_texto) = (yyvsp[0].valor_texto); printf("lista_id BDOS_PUNTOS d_tipo por lista_id");}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 254 "bison.y" /* yacc.c:1646  */
    {insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"salida"); printf("BIDENTIFICADOR BCOMA lista_id por lista_id\n");}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 255 "bison.y" /* yacc.c:1646  */
    {insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"salida"); printf("BIDENTIFICADOR BCOMA lista_id por lista_id\n");}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 257 "bison.y" /* yacc.c:1646  */
    { insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"entorno"); (yyval.valor_texto) = (yyvsp[0].valor_texto); printf("lista_id BDOS_PUNTOS d_tipo por lista_id");}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 258 "bison.y" /* yacc.c:1646  */
    { insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"entorno"); (yyval.valor_texto) = (yyvsp[0].valor_texto); printf("lista_id BDOS_PUNTOS d_tipo por lista_id");}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 259 "bison.y" /* yacc.c:1646  */
    {insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"entorno"); printf("BIDENTIFICADOR BCOMA lista_id por lista_id\n");}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 260 "bison.y" /* yacc.c:1646  */
    {insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"entorno"); printf("BIDENTIFICADOR BCOMA lista_id por lista_id\n");}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 262 "bison.y" /* yacc.c:1646  */
    {printf("decl_ent por decl_ent_sal\n");}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 263 "bison.y" /* yacc.c:1646  */
    {printf("decl_ent decl_sal por decl_ent_sal\n");}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 264 "bison.y" /* yacc.c:1646  */
    {printf("decl_sal por decl_ent_sal\n");}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 266 "bison.y" /* yacc.c:1646  */
    {printf("BENT lista_d_var por decl_ent\n");}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 268 "bison.y" /* yacc.c:1646  */
    {printf("BSAL lista_d_var por decl_sal\n");}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 271 "bison.y" /* yacc.c:1646  */
    {(yyval.e).type = (yyvsp[0].e).type; (yyval.e).place=(yyvsp[0].e).place;printf("exp_a por expresion\n");}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 272 "bison.y" /* yacc.c:1646  */
    {printf("funcion_ll por expresion\n");}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 274 "bison.y" /* yacc.c:1646  */
    {
	backpatchP(&listainstrucciones,(yyvsp[0].b).f,listainstrucciones.nextQuad);
	gen(&listainstrucciones,"asignacionfalse",-1,-1,obtenerObjeto(&listavariables,(yyvsp[-2].valor_texto))->id);
	gen(&listainstrucciones,"goto",-1,-1,listainstrucciones.nextQuad+2); //EL goto siempre va a un registro de la tabla de cuadruplas
	backpatchP(&listainstrucciones,(yyvsp[0].b).t,listainstrucciones.nextQuad);
	gen(&listainstrucciones,"asignaciontrue",-1,-1,obtenerObjeto(&listavariables,(yyvsp[-2].valor_texto))->id);
	printf("operando BDOS_PUNTOS_IGUAL expresion por asignacion\n");}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 282 "bison.y" /* yacc.c:1646  */
    {
	if(((yyvsp[-2].e).type == ENTERO) && ((yyvsp[0].e).type == ENTERO)){
			(yyval.e).place = insertar_variable(&listavariables,NULL,"entero","temporal");
			(yyval.e).type = ENTERO;
			gen(&listainstrucciones,"sumaentero",(yyvsp[-2].e).place,(yyvsp[0].e).place,(yyval.e).place);
		} else if(((yyvsp[-2].e).type == ENTERO) && ((yyvsp[0].e).type == REAL)){
			(yyval.e).place = insertar_variable(&listavariables,NULL,"real","temporal");
			(yyval.e).type = REAL;
			gen(&listainstrucciones,"sumareal",(yyvsp[-2].e).place,(yyvsp[0].e).place,(yyval.e).place);
		} else if(((yyvsp[-2].e).type == REAL) && ((yyvsp[0].e).type == ENTERO)){
			(yyval.e).place = insertar_variable(&listavariables,NULL,"real","temporal");
			(yyval.e).type = REAL;
			gen(&listainstrucciones,"sumareal",(yyvsp[-2].e).place,(yyvsp[0].e).place,(yyval.e).place);
		} else if(((yyvsp[-2].e).type == REAL) && ((yyvsp[0].e).type == REAL)){
			(yyval.e).place = insertar_variable(&listavariables,NULL,"real","temporal");
			(yyval.e).type = REAL;
			gen(&listainstrucciones,"sumareal",(yyvsp[-2].e).place,(yyvsp[0].e).place,(yyval.e).place);
		}
	printf("exp_a BSUMA exp_a por exp_a\n");}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 301 "bison.y" /* yacc.c:1646  */
    {
		if(((yyvsp[-2].e).type == ENTERO) && ((yyvsp[0].e).type == ENTERO)){
			(yyval.e).place = insertar_variable(&listavariables,NULL,"entero","temporal");
			(yyval.e).type = ENTERO;
			gen(&listainstrucciones,"menosentero",(yyvsp[-2].e).place,(yyvsp[0].e).place,(yyval.e).place);
		} else if(((yyvsp[-2].e).type == ENTERO) && ((yyvsp[0].e).type == REAL)){
			(yyval.e).place = insertar_variable(&listavariables,NULL,"real","temporal");
			(yyval.e).type = REAL;
			int temp = insertar_variable(&listavariables,NULL,"real","temporal");
			gen(&listainstrucciones,"inttoreal",(yyvsp[-2].e).place,-1,temp);
			gen(&listainstrucciones,"menosreal",temp,(yyvsp[0].e).place,(yyval.e).place);
		} else if(((yyvsp[-2].e).type == REAL) && ((yyvsp[0].e).type == ENTERO)){
			(yyval.e).place = insertar_variable(&listavariables,NULL,"real","temporal");
			(yyval.e).type = REAL;
			int temp = insertar_variable(&listavariables,NULL,"real","temporal");
			gen(&listainstrucciones,"inttoreal",(yyvsp[0].e).place,-1,temp);
			gen(&listainstrucciones,"menosreal",(yyvsp[-2].e).place,temp,(yyval.e).place);
		} else if(((yyvsp[-2].e).type == REAL) && ((yyvsp[0].e).type == REAL)){
			(yyval.e).place = insertar_variable(&listavariables,NULL,"real","temporal");
			(yyval.e).type = REAL;
			gen(&listainstrucciones,"menosreal",(yyvsp[-2].e).place,(yyvsp[0].e).place,(yyval.e).place);
		}
	printf("exp_a BMENOS exp_a por exp_a\n");}
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 324 "bison.y" /* yacc.c:1646  */
    {
		if(((yyvsp[-2].e).type == ENTERO) && ((yyvsp[0].e).type == ENTERO)){
			(yyval.e).place = insertar_variable(&listavariables,NULL,"entero","temporal");
			(yyval.e).type = ENTERO;
			gen(&listainstrucciones,"porentero",(yyvsp[-2].e).place,(yyvsp[0].e).place,(yyval.e).place);
		} else if(((yyvsp[-2].e).type == ENTERO) && ((yyvsp[0].e).type == REAL)){
			(yyval.e).place = insertar_variable(&listavariables,NULL,"real","temporal");
			(yyval.e).type = REAL;
			int temp = insertar_variable(&listavariables,NULL,"real","temporal");
			gen(&listainstrucciones,"inttoreal",(yyvsp[-2].e).place,-1,temp);
			gen(&listainstrucciones,"porreal",temp,(yyvsp[0].e).place,(yyval.e).place);
		} else if(((yyvsp[-2].e).type == REAL) && ((yyvsp[0].e).type == ENTERO)){
			(yyval.e).place = insertar_variable(&listavariables,NULL,"real","temporal");
			(yyval.e).type = REAL;
			int temp = insertar_variable(&listavariables,NULL,"real","temporal");
			gen(&listainstrucciones,"inttoreal",(yyvsp[0].e).place,-1,temp);
			gen(&listainstrucciones,"porreal",(yyvsp[-2].e).place,temp,(yyval.e).place);
		} else if(((yyvsp[-2].e).type == REAL) && ((yyvsp[0].e).type == REAL)){
			(yyval.e).place = insertar_variable(&listavariables,NULL,"real","temporal");
			(yyval.e).type = REAL;
			gen(&listainstrucciones,"porreal",(yyvsp[-2].e).place,(yyvsp[0].e).place,(yyval.e).place);
		}
	printf("exp_a BPOR exp_a por exp_a\n");}
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 347 "bison.y" /* yacc.c:1646  */
    {
		if(((yyvsp[-2].e).type == ENTERO) && ((yyvsp[0].e).type == ENTERO)){
			(yyval.e).place = insertar_variable(&listavariables,NULL,"entero","temporal");
			(yyval.e).type = ENTERO;
			gen(&listainstrucciones,"entreentero",(yyvsp[-2].e).place,(yyvsp[0].e).place,(yyval.e).place);
		} else if(((yyvsp[-2].e).type == ENTERO) && ((yyvsp[0].e).type == REAL)){
			(yyval.e).place = insertar_variable(&listavariables,NULL,"real","temporal");
			(yyval.e).type = REAL;
			int temp = insertar_variable(&listavariables,NULL,"real","temporal");
			gen(&listainstrucciones,"inttoreal",(yyvsp[-2].e).place,-1,temp);
			gen(&listainstrucciones,"entrereal",temp,(yyvsp[0].e).place,(yyval.e).place);
		} else if(((yyvsp[-2].e).type == REAL) && ((yyvsp[0].e).type == ENTERO)){
			(yyval.e).place = insertar_variable(&listavariables,NULL,"real","temporal");
			(yyval.e).type = REAL;
			int temp = insertar_variable(&listavariables,NULL,"real","temporal");
			gen(&listainstrucciones,"inttoreal",(yyvsp[0].e).place,-1,temp);
			gen(&listainstrucciones,"entrereal",(yyvsp[-2].e).place,temp,(yyval.e).place);
		} else if(((yyvsp[-2].e).type == REAL) && ((yyvsp[0].e).type == REAL)){
			(yyval.e).place = insertar_variable(&listavariables,NULL,"real","temporal");
			(yyval.e).type = REAL;
			gen(&listainstrucciones,"entrereal",(yyvsp[-2].e).place,(yyvsp[0].e).place,(yyval.e).place);
		}
		printf("exp_a BENTRE exp_a por exp_a\n");}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 370 "bison.y" /* yacc.c:1646  */
    {
		if(((yyvsp[-2].e).type == ENTERO) && ((yyvsp[0].e).type == ENTERO)){
			(yyval.e).place = insertar_variable(&listavariables,NULL,"entero","temporal");
			(yyval.e).type = ENTERO;
			gen(&listainstrucciones,"modentero",(yyvsp[-2].e).place,(yyvsp[0].e).place,(yyval.e).place);
		} else if(((yyvsp[-2].e).type == ENTERO) && ((yyvsp[0].e).type == REAL)){
			(yyval.e).place = insertar_variable(&listavariables,NULL,"real","temporal");
			(yyval.e).type = REAL;
			int temp = insertar_variable(&listavariables,NULL,"real","temporal");
			gen(&listainstrucciones,"inttoreal",(yyvsp[-2].e).place,-1,temp);
			gen(&listainstrucciones,"modreal",temp,(yyvsp[0].e).place,(yyval.e).place);
		} else if(((yyvsp[-2].e).type == REAL) && ((yyvsp[0].e).type == ENTERO)){
			(yyval.e).place = insertar_variable(&listavariables,NULL,"real","temporal");
			(yyval.e).type = REAL;
			int temp = insertar_variable(&listavariables,NULL,"real","temporal");
			gen(&listainstrucciones,"inttoreal",(yyvsp[0].e).place,-1,temp);
			gen(&listainstrucciones,"modreal",(yyvsp[-2].e).place,temp,(yyval.e).place);
		} else if(((yyvsp[-2].e).type == REAL) && ((yyvsp[0].e).type == REAL)){
			(yyval.e).place = insertar_variable(&listavariables,NULL,"real","temporal");
			(yyval.e).type = REAL;
			gen(&listainstrucciones,"modreal",(yyvsp[-2].e).place,(yyvsp[0].e).place,(yyval.e).place);
		}
		printf("exp_a BMOD exp_a por exp_a\n");}
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 393 "bison.y" /* yacc.c:1646  */
    {
		(yyval.e).type = ENTERO;
		if(((yyvsp[-2].e).type == ENTERO) && ((yyvsp[0].e).type == ENTERO)){
			(yyval.e).place = insertar_variable(&listavariables,NULL,"entero","temporal");
			gen(&listainstrucciones,"entreentero",(yyvsp[-2].e).place,(yyvsp[0].e).place,(yyval.e).place);
		} else if(((yyvsp[-2].e).type == ENTERO) && ((yyvsp[0].e).type == REAL)){
			int temp2 = insertar_variable(&listavariables,NULL,"real","temporal");
			int temp = insertar_variable(&listavariables,NULL,"real","temporal");
			gen(&listainstrucciones,"inttoreal",(yyvsp[-2].e).place,-1,temp);
			gen(&listainstrucciones,"entrereal",temp,(yyvsp[0].e).place,temp2);
			gen(&listainstrucciones,"truncar",temp2,-1,(yyval.e).place);

		} else if(((yyvsp[-2].e).type == REAL) && ((yyvsp[0].e).type == ENTERO)){
			int temp2 = insertar_variable(&listavariables,NULL,"real","temporal");
			int temp = insertar_variable(&listavariables,NULL,"real","temporal");
			gen(&listainstrucciones,"inttoreal",(yyvsp[0].e).place,-1,temp);
			gen(&listainstrucciones,"entrereal",(yyvsp[-2].e).place,temp,temp2);
			gen(&listainstrucciones,"truncar",temp2,-1,(yyval.e).place);

		} else if(((yyvsp[-2].e).type == REAL) && ((yyvsp[0].e).type == REAL)){
			int temp2 = insertar_variable(&listavariables,NULL,"real","temporal");
			gen(&listainstrucciones,"entrereal",(yyvsp[-2].e).place,(yyvsp[0].e).place,temp2);
			gen(&listainstrucciones,"truncar",temp2,-1,(yyval.e).place);
		}	
		
		printf("exp_a BDIV exp_a por exp_a\n");}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 419 "bison.y" /* yacc.c:1646  */
    {(yyval.e).type = (yyvsp[-1].e).type; (yyval.e).place = (yyvsp[-1].e).place; printf("BPARENTESIS_APERTURA exp_a BPARENTESIS_CIERRE por exp_a\n");}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 420 "bison.y" /* yacc.c:1646  */
    {(yyval.e).type = obtenerObjeto(&listavariables,(yyvsp[0].valor_texto))->tipo; (yyval.e).place = obtenerObjeto(&listavariables,(yyvsp[0].valor_texto))->id; printf("operando por exp_a\n");}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 421 "bison.y" /* yacc.c:1646  */
    {printf("BLITERAL_REAL por exp_a\n");}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 422 "bison.y" /* yacc.c:1646  */
    {printf("BLITERAL_ENTERO por exp_a\n");}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 423 "bison.y" /* yacc.c:1646  */
    {
		(yyval.e).type = (yyvsp[0].e).type;
 		if ((yyvsp[0].e).type == ENTERO){
	 		(yyval.e).place = insertar_variable(&listavariables,NULL,"entero","temporal");
 			gen(&listainstrucciones,"menosunarioreal",(yyvsp[0].e).place,-1,(yyval.e).place);
 		}else if((yyvsp[0].e).type == REAL){
			(yyval.e).place = insertar_variable(&listavariables,NULL,"real","temporal");
 			gen(&listainstrucciones,"menosunarioentero",(yyvsp[0].e).place,-1,(yyval.e).place);
 		}


 	printf("BMENOS exp_a por exp_a\n");}
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 435 "bison.y" /* yacc.c:1646  */
    {(yyval.e).type = (yyvsp[0].e).type; (yyval.e).place = (yyvsp[0].e).place; printf("BMAS exp_a por exp_a\n");}
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 436 "bison.y" /* yacc.c:1646  */
    {
		backpatchP(&listainstrucciones,(yyvsp[-3].b).t,(yyvsp[-1].quad));
		(yyval.b).f = mergeP((yyvsp[-3].b).f,(yyvsp[0].b).f);
		(yyval.b).t = (yyvsp[0].b).t;
	
		printf("exp_b BY exp_b por exp_b\n");}
#line 2233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 442 "bison.y" /* yacc.c:1646  */
    {
		backpatchP(&listainstrucciones,(yyvsp[-3].b).f,(yyvsp[-1].quad));
		(yyval.b).t = mergeP((yyvsp[-3].b).t,(yyvsp[0].b).t);
		(yyval.b).f = (yyvsp[0].b).f;
		printf("exp_b BO exp_b por exp_b\n");
	}
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 448 "bison.y" /* yacc.c:1646  */
    {
		(yyval.b).t = (yyvsp[0].b).f;
		(yyval.b).f = (yyvsp[0].b).t;		
		printf("BNO exp_b por exp_b\n");}
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 452 "bison.y" /* yacc.c:1646  */
    {
		int t1 = insertar_variable(&listavariables,NULL,"booleano","temporal");
		gen(&listainstrucciones,"asignaciontrue",-1,-1,t1);
		(yyval.b).t = makelistP(listainstrucciones.nextQuad);
		gen(&listainstrucciones,"ifigual",t1,obtenerObjeto(&listavariables,(yyvsp[0].valor_texto))->id,-1);
		(yyval.b).f = makelistP(listainstrucciones.nextQuad);
		gen(&listainstrucciones,"goto",-1,-1,-1);		
		printf("operando_booleano por exp_b\n");}
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 460 "bison.y" /* yacc.c:1646  */
    {
		(yyval.b).t = makelistP(listainstrucciones.nextQuad);
		(yyval.b).f = makelistVaciaP();
		gen(&listainstrucciones,"goto",-1,-1,-1);			
		
		printf("BVERDADERO por exp_b\n");}
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 466 "bison.y" /* yacc.c:1646  */
    {
		(yyval.b).t = makelistVaciaP();
		(yyval.b).f = makelistP(listainstrucciones.nextQuad);
		gen(&listainstrucciones,"goto",-1,-1,-1);		
		printf("BFALSO por exp_b\n");}
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 471 "bison.y" /* yacc.c:1646  */
    {
		(yyval.b).t = (yyvsp[-1].b).t;
		(yyval.b).f = (yyvsp[-1].b).f;
		printf("BPARENTESIS_APERTURA exp_b BPARENTESIS_CIERRE por exp_b\n");}
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 475 "bison.y" /* yacc.c:1646  */
    {
		(yyval.b).t = makelistP(listainstrucciones.nextQuad);
		(yyval.b).f = makelistP(listainstrucciones.nextQuad + 1);
		gen(&listainstrucciones,"ifigual",(yyvsp[-2].e).place,(yyvsp[0].e).place,-1);
		gen(&listainstrucciones,"goto",-1,-1,-1);
		printf("exp_a BOPREL exp_a por exp_b\n");}
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 481 "bison.y" /* yacc.c:1646  */
    {
		(yyval.b).t = makelistP(listainstrucciones.nextQuad);
		(yyval.b).f = makelistP(listainstrucciones.nextQuad + 1);
		gen(&listainstrucciones,"ifmayor",(yyvsp[-2].e).place,(yyvsp[0].e).place,-1);
		gen(&listainstrucciones,"goto",-1,-1,-1);
		printf("exp_a BOPREL exp_a por exp_b\n");}
#line 2318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 487 "bison.y" /* yacc.c:1646  */
    {
		(yyval.b).t = makelistP(listainstrucciones.nextQuad);
		(yyval.b).f = makelistP(listainstrucciones.nextQuad + 1);
		gen(&listainstrucciones,"ifmenor",(yyvsp[-2].e).place,(yyvsp[0].e).place,-1);
		gen(&listainstrucciones,"goto",-1,-1,-1);
		printf("exp_a BOPREL exp_a por exp_b\n");}
#line 2329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 493 "bison.y" /* yacc.c:1646  */
    {
		(yyval.b).t = makelistP(listainstrucciones.nextQuad);
		(yyval.b).f = makelistP(listainstrucciones.nextQuad + 1);
		gen(&listainstrucciones,"ifdiferente",(yyvsp[-2].e).place,(yyvsp[0].e).place,-1);
		gen(&listainstrucciones,"goto",-1,-1,-1);
		printf("exp_a BOPREL exp_a por exp_b\n");}
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 499 "bison.y" /* yacc.c:1646  */
    {
		(yyval.b).t = makelistP(listainstrucciones.nextQuad);
		(yyval.b).f = makelistP(listainstrucciones.nextQuad + 1);
		gen(&listainstrucciones,"ifmayorigual",(yyvsp[-2].e).place,(yyvsp[0].e).place,-1);
		gen(&listainstrucciones,"goto",-1,-1,-1);
		printf("exp_a BOPREL exp_a por exp_b\n");}
#line 2351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 505 "bison.y" /* yacc.c:1646  */
    {
		(yyval.b).t = makelistP(listainstrucciones.nextQuad);
		(yyval.b).f = makelistP(listainstrucciones.nextQuad + 1);
		gen(&listainstrucciones,"ifmenorigual",(yyvsp[-2].e).place,(yyvsp[0].e).place,-1);
		gen(&listainstrucciones,"goto",-1,-1,-1);
		printf("exp_a BOPREL exp_a por exp_b\n");}
#line 2362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 511 "bison.y" /* yacc.c:1646  */
    {(yyval.valor_texto) = (yyvsp[0].valor_texto); printf("BIDENTIFICADOR por operando\n");}
#line 2368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 512 "bison.y" /* yacc.c:1646  */
    {printf("operando BPUNTO operando por operando\n");}
#line 2374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 513 "bison.y" /* yacc.c:1646  */
    {printf("operando BCORCHETE_APERTURA expresion BCORCHETE_CIERRE por operando\n");}
#line 2380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 514 "bison.y" /* yacc.c:1646  */
    {printf("operando BREF por operando\n");}
#line 2386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 515 "bison.y" /* yacc.c:1646  */
    {(yyval.valor_texto) = (yyvsp[0].valor_texto); printf("BIDENTIFICADOR por operando_booleano\n");}
#line 2392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 516 "bison.y" /* yacc.c:1646  */
    {printf("instruccion BPUNTO_Y_COMA instrucciones por instrucciones\n");}
#line 2398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 517 "bison.y" /* yacc.c:1646  */
    {printf("instruccion por instrucciones\n");}
#line 2404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 518 "bison.y" /* yacc.c:1646  */
    {printf("BCONTINUAR por instruccion\n");}
#line 2410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 519 "bison.y" /* yacc.c:1646  */
    {printf("asignacion por instruccion\n");}
#line 2416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 520 "bison.y" /* yacc.c:1646  */
    {printf("asignacion booleana por instruccion\n");}
#line 2422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 521 "bison.y" /* yacc.c:1646  */
    {printf("alternativa por instruccion\n");}
#line 2428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 522 "bison.y" /* yacc.c:1646  */
    {printf("iteracion por instruccion\n");}
#line 2434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 524 "bison.y" /* yacc.c:1646  */
    {
	if (obtenerObjeto(&listavariables,(yyvsp[-2].valor_texto))->tipo == (yyvsp[0].e).type){
		gen(&listainstrucciones,"asignacion",(yyvsp[0].e).place,-1,obtenerObjeto(&listavariables,(yyvsp[-2].valor_texto))->id);
	}else if((obtenerObjeto(&listavariables,(yyvsp[-2].valor_texto))->tipo == REAL) && ((yyvsp[0].e).type == ENTERO)){
		int idtemporal = insertar_variable(&listavariables,NULL,"real","temporal");
		gen(&listainstrucciones,"inttoreal",(yyvsp[0].e).place,-1,idtemporal);
		gen(&listainstrucciones,"asignacion",idtemporal,-1,obtenerObjeto(&listavariables,(yyvsp[-2].valor_texto))->id);
	}else if((obtenerObjeto(&listavariables,(yyvsp[-2].valor_texto))->tipo == ENTERO) && ((yyvsp[0].e).type == REAL)){
		exit(-1);
	}
	(yyval.valor_texto) = (yyvsp[-2].valor_texto);
	printf("operando BDOS_PUNTOS_IGUAL expresion por asignacion\n");}
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 536 "bison.y" /* yacc.c:1646  */
    {printf("expresion por asignacion\n");}
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 537 "bison.y" /* yacc.c:1646  */
    {
	backpatchP(&listainstrucciones,(yyvsp[-8].b).t,(yyvsp[-6].quad));
	if ((yyvsp[-2].next) != NULL){
		backpatchP(&listainstrucciones,(yyvsp[-8].b).f,(yyvsp[-3].quad));
		(yyval.next) = mergeP((yyvsp[-2].next),(yyvsp[-4].next));
		backpatchP(&listainstrucciones,(yyval.next),(yyvsp[-1].quad));
	}else{
		(yyval.next) = mergeP((yyvsp[-8].b).f,(yyvsp[-4].next));
		backpatchP(&listainstrucciones,(yyval.next),(yyvsp[-3].quad));
	}
	
	printf("BSI expresion BENTONCES instrucciones lista_opciones BFSI por alternativa\n");}
#line 2474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 549 "bison.y" /* yacc.c:1646  */
    {
	backpatchP(&listainstrucciones,(yyvsp[-6].b).t,(yyvsp[-4].quad));
	backpatchP(&listainstrucciones,(yyvsp[-6].b).f,(yyvsp[-1].quad));
	if ((yyvsp[0].next) != NULL){
		(yyval.next) = mergeP((yyvsp[-2].next),(yyvsp[0].next));
	}else{
		(yyval.next) = mergeP((yyvsp[-6].b).f,(yyvsp[-2].next));
	}	
	printf("BSINO expresion BENTONCES instrucciones lista_opciones por lista_opciones\n");}
#line 2488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 558 "bison.y" /* yacc.c:1646  */
    {(yyval.next) = NULL; printf("empty por lista_opciones\n");}
#line 2494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 559 "bison.y" /* yacc.c:1646  */
    {printf("it_cota_fija por iteracion\n");}
#line 2500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 560 "bison.y" /* yacc.c:1646  */
    {printf("it_cota_exp por iteracion\n");}
#line 2506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 561 "bison.y" /* yacc.c:1646  */
    {
	backpatchP(&listainstrucciones,(yyvsp[-6].b).t,(yyvsp[-4].quad));
	backpatchP(&listainstrucciones,(yyvsp[-6].b).f,(yyvsp[-1].quad));
	backpatchP(&listainstrucciones,(yyvsp[-2].next),(yyvsp[-7].quad));
	printf("BMIENTRAS expresion BHACER instrucciones BFMIENTRAS por it_cota_exp\n");}
#line 2516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 566 "bison.y" /* yacc.c:1646  */
    {
	backpatchP(&listainstrucciones,(yyvsp[-6].b).t,(yyvsp[-4].quad));
	backpatchP(&listainstrucciones,(yyvsp[-6].b).f,(yyvsp[-1].quad));
	backpatchP(&listainstrucciones,(yyvsp[-2].next),(yyvsp[-4].quad)-4);
	printf("BPARA aux_cota_fija BHASTA expresion BHACER instrucciones BFPARA por it_cota_fija\n");}
#line 2526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 571 "bison.y" /* yacc.c:1646  */
    {
	int idtemporal;
	if ((yyvsp[0].e).type == ENTERO){
		idtemporal = insertar_variable(&listavariables,NULL,"entero","temporal");
	}else{
		idtemporal = insertar_variable(&listavariables,NULL,"real","temporal");
	}
	gen(&listainstrucciones,"asignacion",(yyvsp[0].e).place,-1,idtemporal);
	gen(&listainstrucciones,"ifmayor",obtenerObjeto(&listavariables,(yyvsp[-2].valor_texto))->id , idtemporal, (listainstrucciones.nextQuad)+3);
	gen(&listainstrucciones,"i++",-1,-1,obtenerObjeto(&listavariables,(yyvsp[-2].valor_texto))->id);
	(yyval.b).t = makelistP(listainstrucciones.nextQuad);
	gen(&listainstrucciones,"goto",-1,-1,-1);
	(yyval.b).f = makelistP(listainstrucciones.nextQuad);
	gen(&listainstrucciones,"goto",-1,-1,-1);
	printf("asignacion BHASTA expresion por aux_cota_fija\n");
}
#line 2547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 587 "bison.y" /* yacc.c:1646  */
    {printf("BACCION a_cabecera bloque BFACCION por accion_d\n");}
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 588 "bison.y" /* yacc.c:1646  */
    {printf("BFUNCION f_cabecera bloque BDEV expresion BFFUNCION por funcion_d\n");}
#line 2559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 589 "bison.y" /* yacc.c:1646  */
    {printf("BIDENTIFICADOR BPARENTESIS_APERTURA d_par_form BPARENTESIS_CIERRE BPUNTO_Y_COMA por a_cabecera\n");}
#line 2565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 590 "bison.y" /* yacc.c:1646  */
    {printf("BIDENTIFICADOR BPARENTESIS_APERTURA lista_d_var BPARENTESIS_CIERRE BDEF d_tipo BPUNTO_Y_COMA por f_cabecera\n");}
#line 2571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 591 "bison.y" /* yacc.c:1646  */
    {printf("d_p_form BPUNTO_Y_COMA d_par_form por d_par_form\n");}
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 592 "bison.y" /* yacc.c:1646  */
    {printf("empty por d_par_form\n");}
#line 2583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 594 "bison.y" /* yacc.c:1646  */
    {printf("BEND lista_id BDOS_PUNTOS d_tipo por d_p_form\n");}
#line 2589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 595 "bison.y" /* yacc.c:1646  */
    {printf("BSAL lista_id BDOS_PUNTOS d_tipo por d_p_form\n");}
#line 2595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 596 "bison.y" /* yacc.c:1646  */
    {printf("BES lista_id BDOS_PUNTOS d_tipo por d_p_form\n");}
#line 2601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 599 "bison.y" /* yacc.c:1646  */
    {printf("BIDENTIFICADOR BPARENTESIS_APERTURA l_ll BPARENTESIS_CIERRE por funcion_ll\n");}
#line 2607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 600 "bison.y" /* yacc.c:1646  */
    {printf("expresion BCOMA l_ll por l_ll\n");}
#line 2613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 601 "bison.y" /* yacc.c:1646  */
    {printf("expresion por l_ll\n");}
#line 2619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 603 "bison.y" /* yacc.c:1646  */
    {(yyval.quad) = listainstrucciones.nextQuad; printf("M por empty\n");}
#line 2625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 605 "bison.y" /* yacc.c:1646  */
    {(yyval.next) = makelistP(listainstrucciones.nextQuad); gen(&listainstrucciones,"goto",-1,-1,-1); printf("N por empty\n");}
#line 2631 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2635 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 606 "bison.y" /* yacc.c:1906  */


int main(int argc, char** argv) {
	inicializacion(&listavariables);
	inicializacion(&listaconstantes);
	inicializacionQ(&listainstrucciones);
	FILE *aux,*compilado,*variables,*parseado;
	int f1 = 0,f2 = 0,f3 = 0,f4 = 0; //Flags para saber que opciones se han hecho
	char opt;
	while ((opt = getopt(argc, argv, ":i:o:t:v:h")) != -1) {
        switch (opt) {
			case 'i':
				f1 = 1;
				stdin = fopen (optarg,"r+");
				if (stdin==NULL) {fputs ("File error\n",stderr); exit (1);}
				break;
			case 'o':
				f2 = 1;
				compilado = fopen(optarg,"w+");
				break;
			case 't':
				f3 = 1;
				variables = fopen(optarg,"w+");
				break;
			case 'v':
				f4 = 1;
				parseado = fopen(optarg,"w+");
				break;
			case 'h':
				printf("Compilador de lenguaje inventado por fitxi\n");
				printf("\t./compilador [-iotvh] ...\n");
				printf("Opciones\n");
				printf("\t-i: Permite el compilado de un archivo cuyo nombre se le pasa a continuación.\n");
				printf("\t\tMODO DE USO: ./compilador -i prueba.txt\n");
				printf("\t-o: Escribe el codigo compilado en un archivo cuyo nombre se le pasa a continuación.\n");
				printf("\t\tMODO DE USO: ./compilador -i prueba.txt -o compilado.txt\n");
				printf("\t-t: Guarda la tabla de simbolos en un archivo cuyo nombre se le pasa a continuación.\n");
				printf("\t\tMODO DE USO: ./compilador -i prueba.txt -t tabladesimbolos.txt\n");
				printf("\t-v: Registra el comportamiento del parser en un archivo cuyo nombre se le pasa a continuación.\n");
				printf("\t\tMODO DE USO: ./compilador -i prueba.txt -v parseado.txt\n");
				printf("\t-h: Imprime la ayuda del compilador.\n");
				printf("\t\tMODO DE USO: ./compilador -h\n");

				printf("Gracias por usar nuestro compilador :)\n");
				return 0;

			default:
				exit(EXIT_FAILURE);
        }
    }

	yyin = stdin;

	if (f4 == 1){
		aux = stdout;
		stdout = parseado;
	}

	do {
		yyparse();
	} while(!feof(yyin));

	if (f4 == 1){
		stdout = aux;
	}

	if (f3 == 1){
		aux = stdout;
		stdout = variables;
		leerlista(&listavariables);
		stdout = aux;
	}

	if (f2 == 1){
		aux = stdout;
		stdout = compilado;
	}
	leerlistaQ(&listainstrucciones,&listavariables);
	if (f2 == 1){
		stdout = aux;
	}

	if (f1 == 1){
		fclose(stdin);
	}
	if (f2 == 1){
		fclose(compilado);
	}
	if (f3 == 1){
		fclose(variables);
	}
	if (f4 == 1){
		fclose(parseado);
	}
	return 0;
}

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}
