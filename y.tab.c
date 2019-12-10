/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "bison.y" /* yacc.c:337  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "SymbolTable/TablaDeSimbolos.h"
#include "booleanos/booleanos.h"
#include "QuadruplesTable/QuadrupleTable.h"
void yyerror(const char* s);
int yylex();
static FILE* yyin;
TablaDeSimbolos listavariables;
TablaDeSimbolos listaconstantes;
TablaDeCuadruplas listainstrucciones;


#line 86 "y.tab.c" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
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
#line 17 "bison.y" /* yacc.c:352  */

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

#line 134 "y.tab.c" /* yacc.c:352  */

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
#line 31 "bison.y" /* yacc.c:352  */

	long valor_entero;
	char* valor_texto;
	double valor_doble;
	char valor_letra;
	E e;
	B b;
	int quad;

#line 304 "y.tab.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYLAST   320

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  270

#define YYUNDEFTOK  2
#define YYMAXUTOK   329

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
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
       0,   176,   176,   180,   182,   184,   185,   186,   188,   189,
     190,   192,   194,   195,   196,   197,   199,   201,   203,   205,
     206,   208,   209,   210,   211,   212,   213,   217,   218,   220,
     221,   223,   224,   225,   226,   227,   228,   230,   231,   233,
     234,   236,   237,   239,   240,   242,   243,   245,   246,   248,
     249,   250,   252,   254,   257,   258,   260,   268,   287,   310,
     333,   356,   379,   405,   406,   407,   408,   409,   421,   422,
     428,   434,   438,   439,   440,   441,   445,   451,   457,   463,
     469,   475,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   494,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   518,   520,
     521,   522,   525,   526,   527,   529
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
  "lista_d_tipo", "d_tipo", "expresion_t", "lista_campos", "lista_d_cte",
  "lista_d_var_entrada", "lista_d_var_salida", "lista_d_var",
  "lista_id_entrada", "lista_id_salida", "lista_id", "decl_ent_sal",
  "decl_ent", "decl_sal", "expresion", "asignacion_booleana", "exp_a",
  "exp_b", "operando", "operando_booleano", "instrucciones", "instruccion",
  "asignacion", "alternativa", "lista_opciones", "iteracion",
  "it_cota_exp", "it_cota_fija", "accion_d", "funcion_d", "a_cabecera",
  "f_cabecera", "d_par_form", "d_p_form", "funcion_ll", "l_ll", "M", YY_NULLPTR
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

#define YYPACT_NINF -133

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-133)))

#define YYTABLE_NINF -24

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,    30,    39,    54,  -133,   105,    64,     6,    51,    95,
     105,   105,    83,   101,   102,   118,   124,   138,   140,   136,
       7,    51,    51,    51,   147,   152,    91,    95,    95,  -133,
    -133,   141,   153,    94,    74,   176,   174,   172,   212,   216,
    -133,   192,     9,     9,     9,  -133,   139,   139,   253,  -133,
    -133,  -133,  -133,  -133,   214,    13,   210,  -133,   254,  -133,
    -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,   221,    51,
     222,    51,   258,   259,   256,   233,  -133,  -133,  -133,    26,
     262,   248,   141,  -133,  -133,   263,   244,  -133,    14,  -133,
     264,   266,   267,   268,  -133,    74,    74,  -133,  -133,   164,
      10,  -133,  -133,   141,   138,   269,   138,  -133,   139,   202,
    -133,   178,   225,   223,   230,     9,     9,     9,     9,     9,
       9,   272,   139,  -133,   139,    74,     7,    -7,   217,   138,
     218,   191,  -133,   276,   200,  -133,   277,  -133,  -133,   255,
     270,   143,  -133,    64,   143,     6,     6,     6,     6,   156,
      37,  -133,     9,     9,     9,     9,     9,     9,     6,  -133,
    -133,  -133,  -133,  -133,  -133,   260,   245,  -133,     7,     7,
     139,   202,   202,  -133,  -133,  -133,  -133,    11,   261,  -133,
     201,  -133,   138,   138,   138,   246,   278,  -133,   251,   139,
     141,   258,   258,   141,   259,   259,   141,  -133,   271,  -133,
    -133,  -133,  -133,  -133,  -133,  -133,   214,   214,   214,   214,
     214,   214,  -133,    74,    74,   139,  -133,   235,   237,   236,
    -133,   265,   273,   274,   290,    -7,   275,   234,  -133,  -133,
    -133,  -133,  -133,  -133,   294,   143,  -133,  -133,  -133,   139,
     249,  -133,   139,   141,   141,   141,  -133,  -133,   141,  -133,
     262,   279,   250,  -133,   252,  -133,  -133,  -133,   299,  -133,
     285,     7,     7,  -133,   141,   235,   257,  -133,  -133,  -133
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    20,    36,    15,    10,
       7,     7,     0,     0,     0,     0,     0,    42,     0,     0,
       0,    15,    15,    15,     0,     0,     0,    10,    10,     5,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,    82,     0,     0,     0,    89,     0,     0,     0,    86,
      66,    65,    95,    91,    54,    64,     0,    11,    88,    90,
      92,    93,   100,    99,    55,    12,    13,    14,     0,    15,
       0,    15,    38,    40,     0,    49,    51,     8,     9,    82,
      30,     0,     0,    26,    28,     0,     0,    27,    64,    16,
       0,     0,     0,     0,    82,     0,     0,    73,    74,     0,
       0,    72,    17,     0,     0,     0,    42,     2,     0,    68,
      67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,     0,   108,     0,    42,
       0,     0,    52,     0,     0,    53,     0,     3,    50,     0,
       0,     0,    25,    20,     0,    36,    36,    36,    36,     0,
       0,    71,     0,     0,     0,     0,     0,     0,    36,   115,
     115,    47,    48,    18,    41,   114,     0,    63,     0,     0,
       0,    57,    58,    59,    60,    61,    62,    83,     0,    94,
      56,    87,     0,     0,     0,     0,     0,   103,     0,     0,
       0,     0,    38,     0,     0,    40,     0,    21,     0,    19,
      24,    34,    35,    32,    33,    75,    76,    77,    78,    80,
      81,    79,    31,     0,     0,     0,   112,    98,     0,     0,
      84,     0,     0,     0,     0,   108,     0,     0,    43,    44,
      37,    45,    46,    39,     0,     0,    69,    70,   113,     0,
       0,   101,     0,     0,     0,     0,   105,   107,     0,   104,
      30,     0,     0,    96,     0,   109,   110,   111,     0,    29,
       0,     0,     0,   106,     0,    98,     0,    22,    97,   102
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -133,  -133,  -133,  -133,   243,   228,    63,    28,    18,    90,
    -133,   165,   -81,  -132,    59,   -61,   119,   115,   -82,   121,
     120,  -101,  -133,  -133,   238,   -20,  -133,   -26,   -89,   -16,
     -29,  -124,  -133,  -133,  -133,    52,  -133,  -133,  -133,  -133,
    -133,  -133,  -133,    93,  -133,  -133,   104,   160
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    18,     9,    26,    19,    20,    21,    22,
      23,    13,    85,    86,   140,    16,   132,   135,    37,   133,
     136,    38,    74,    75,    76,    87,    53,    54,   100,    88,
      56,    57,    58,    59,    60,   240,    61,    62,    63,    27,
      28,    69,    71,   185,   186,    64,   166,   213
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,   142,   181,   162,    55,   101,   150,   151,    99,   198,
      14,    41,   200,    94,   182,   158,   109,   110,   111,     1,
     121,   121,   161,    10,   164,   183,   112,   113,    10,    10,
     122,   -23,   122,   122,     3,   123,   180,   123,   123,     4,
      42,    43,    42,    43,   217,   218,    44,   188,    44,    65,
      66,    67,   159,   160,    45,   -23,    46,   184,    47,     5,
       6,   124,     7,    48,    17,   108,   101,   101,    12,   149,
      99,    15,    49,    50,    51,    50,    51,   205,    94,   159,
     160,   221,   222,   223,   201,   202,   203,   204,   165,   171,
     172,   173,   174,   175,   176,    11,   101,   212,    31,    99,
      11,    11,   178,   251,   179,   177,    52,    42,    43,   228,
      55,    32,   231,    95,     6,   234,     7,    33,    96,    97,
      98,    90,    72,    73,   236,   237,   206,   207,   208,   209,
     210,   211,   128,    34,   130,    91,    35,   265,   266,    49,
      50,    51,    36,    41,    40,    79,    39,    41,    52,    52,
     219,    68,    55,    55,    24,    25,    70,    80,    89,    81,
      92,    93,   255,   256,   257,    82,    83,   258,    84,   227,
      84,   152,    42,    43,    42,    43,    42,    43,    44,   152,
      44,   102,    44,   267,   101,   101,   105,    99,    99,   115,
     116,   117,   118,   119,   120,   165,   167,   115,   116,   117,
     118,   119,   120,   103,   104,    50,    51,    50,    51,    50,
      51,   115,   116,   117,   118,   119,   120,   106,   167,   252,
     190,   191,   254,   107,   153,   154,   155,   156,   157,   193,
     194,   108,   153,   154,   155,   156,   157,   117,   118,   119,
     120,    52,    52,   159,   160,    55,    55,   115,   116,   117,
     118,   119,   120,    29,    30,    77,    78,   114,   125,   126,
     127,   129,   131,   134,   137,    73,   139,   141,   143,   145,
     144,   146,   147,   148,   163,   168,    94,   169,   170,   189,
     187,   192,   195,   225,   196,   216,   224,   197,   239,   220,
     215,   226,   241,   242,   243,   246,   249,   235,   248,   250,
     261,   253,   244,   245,   263,   264,   262,   260,   199,   259,
     233,   230,   229,   138,   232,   269,     0,   268,   247,   238,
     214
};

static const yytype_int16 yycheck[] =
{
      20,    82,   126,   104,    20,    34,    95,    96,    34,   141,
       4,     4,   144,     4,    21,     5,    42,    43,    44,     3,
       7,     7,   103,     5,   106,    32,    46,    47,    10,    11,
      19,     5,    19,    19,     4,    24,   125,    24,    24,     0,
      33,    34,    33,    34,   168,   169,    39,   129,    39,    21,
      22,    23,    42,    43,    47,    29,    49,    64,    51,     5,
       9,    48,    11,    56,    13,    39,    95,    96,     4,    95,
      96,    65,    65,    66,    67,    66,    67,    40,     4,    42,
      43,   182,   183,   184,   145,   146,   147,   148,   108,   115,
     116,   117,   118,   119,   120,     5,   125,   158,    15,   125,
      10,    11,   122,   235,   124,   121,   126,    33,    34,   190,
     126,    10,   193,    39,     9,   196,    11,    15,    44,    45,
      46,    27,    31,    32,   213,   214,   152,   153,   154,   155,
     156,   157,    69,    15,    71,    41,    12,   261,   262,    65,
      66,    67,     4,     4,     8,     4,     6,     4,   168,   169,
     170,     4,   168,   169,    59,    60,     4,    16,     5,    18,
      66,    67,   243,   244,   245,    24,    25,   248,    27,   189,
      27,    15,    33,    34,    33,    34,    33,    34,    39,    15,
      39,     5,    39,   264,   213,   214,    14,   213,   214,    33,
      34,    35,    36,    37,    38,   215,    40,    33,    34,    35,
      36,    37,    38,    29,    30,    66,    67,    66,    67,    66,
      67,    33,    34,    35,    36,    37,    38,     5,    40,   239,
      29,    30,   242,     7,    68,    69,    70,    71,    72,    29,
      30,    39,    68,    69,    70,    71,    72,    35,    36,    37,
      38,   261,   262,    42,    43,   261,   262,    33,    34,    35,
      36,    37,    38,    10,    11,    27,    28,     4,    48,     5,
      39,    39,     4,     4,     8,    32,     4,    19,     5,     5,
      26,     5,     5,     5,     5,    50,     4,    54,    48,    61,
      63,     5,     5,     5,    29,    40,    40,    17,    53,    28,
      30,    40,    55,    57,    29,     5,    62,    26,    23,     5,
      50,    52,    29,    29,     5,    20,    54,    28,   143,   250,
     195,   192,   191,    75,   194,    58,    -1,   265,   225,   215,
     160
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    76,     4,     0,     5,     9,    11,    77,    79,
      83,    84,     4,    86,     4,    65,    90,    13,    78,    81,
      82,    83,    84,    85,    59,    60,    80,   114,   115,    79,
      79,    15,    10,    15,    15,    12,     4,    93,    96,     6,
       8,     4,    33,    34,    39,    47,    49,    51,    56,    65,
      66,    67,   100,   101,   102,   104,   105,   106,   107,   108,
     109,   111,   112,   113,   120,    82,    82,    82,     4,   116,
       4,   117,    31,    32,    97,    98,    99,    80,    80,     4,
      16,    18,    24,    25,    27,    87,    88,   100,   104,     5,
      27,    41,    66,    67,     4,    39,    44,    45,    46,   102,
     103,   105,     5,    29,    30,    14,     5,     7,    39,   102,
     102,   102,   100,   100,     4,    33,    34,    35,    36,    37,
      38,     7,    19,    24,    48,    48,     5,    39,    81,    39,
      81,     4,    91,    94,     4,    92,    95,     8,    99,     4,
      89,    19,    87,     5,    26,     5,     5,     5,     5,   102,
     103,   103,    15,    68,    69,    70,    71,    72,     5,    42,
      43,    87,    96,     5,    93,   100,   121,    40,    50,    54,
      48,   102,   102,   102,   102,   102,   102,   104,   100,   100,
     103,   106,    21,    32,    64,   118,   119,    63,    93,    61,
      29,    30,     5,    29,    30,     5,    29,    17,    88,    86,
      88,    90,    90,    90,    90,    40,   102,   102,   102,   102,
     102,   102,    90,   122,   122,    30,    40,   106,   106,   100,
      28,    96,    96,    96,    40,     5,    40,   100,    87,    94,
      91,    87,    95,    92,    87,    26,   103,   103,   121,    53,
     110,    55,    57,    29,    29,    29,     5,   118,    23,    62,
       5,    88,   100,    52,   100,    87,    87,    87,    87,    89,
      28,    50,    54,     5,    20,   106,   106,    87,   110,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    75,    76,    77,    78,    79,    79,    79,    80,    80,
      80,    81,    82,    82,    82,    82,    83,    84,    85,    86,
      86,    87,    87,    87,    87,    87,    87,    88,    88,    89,
      89,    90,    90,    90,    90,    90,    90,    91,    91,    92,
      92,    93,    93,    94,    94,    95,    95,    96,    96,    97,
      97,    97,    98,    99,   100,   100,   101,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   104,   104,   104,   104,   105,   106,   106,   107,
     107,   107,   107,   107,   108,   108,   109,   110,   110,   111,
     111,   112,   113,   114,   115,   116,   117,   118,   118,   119,
     119,   119,   120,   121,   121,   122
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     5,
       0,     5,     5,     5,     5,     5,     0,     3,     0,     3,
       0,     3,     0,     3,     3,     3,     3,     3,     3,     1,
       2,     1,     2,     2,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     2,     2,     4,
       4,     2,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     4,     2,     1,     3,     1,     1,
       1,     1,     1,     1,     3,     1,     6,     5,     0,     1,
       1,     5,     9,     4,     6,     5,     7,     3,     0,     4,
       4,     4,     4,     3,     1,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
| yyreduce -- do a reduction.  |
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
#line 176 "bison.y" /* yacc.c:1652  */
    {printf("BALGORITMO BIDENTIFICADOR BPUNTO_Y_COMA cabecera_alg bloque_alg BFALGORITMO BPUNTO por desc_algoritmo\n");}
#line 1603 "y.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 180 "bison.y" /* yacc.c:1652  */
    {printf("decl_globales decl_a_f decl_ent_sal BCOMENTARIO por cabecera_alg\n");}
#line 1609 "y.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 182 "bison.y" /* yacc.c:1652  */
    {printf("bloque BCOMENTARIO por bloque_alg\n");}
#line 1615 "y.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 184 "bison.y" /* yacc.c:1652  */
    {printf("declaracion_tipo decl_globales por decl_globales\n");}
#line 1621 "y.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 185 "bison.y" /* yacc.c:1652  */
    {printf("declaracion_const decl_globales por decl_globales\n");}
#line 1627 "y.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 186 "bison.y" /* yacc.c:1652  */
    {printf("empty por decl_globales\n");}
#line 1633 "y.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 188 "bison.y" /* yacc.c:1652  */
    {printf("accion_d decl_a_f por decl_a_f\n");}
#line 1639 "y.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 189 "bison.y" /* yacc.c:1652  */
    {printf("funcion_d decl_a_f por decl_a_f\n");}
#line 1645 "y.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 190 "bison.y" /* yacc.c:1652  */
    {printf("empty por decl_a_f\n");}
#line 1651 "y.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 192 "bison.y" /* yacc.c:1652  */
    {printf("declaraciones instrucciones por bloque\n");}
#line 1657 "y.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 194 "bison.y" /* yacc.c:1652  */
    {printf("declaracion_tipo declaraciones por declaraciones\n");}
#line 1663 "y.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 195 "bison.y" /* yacc.c:1652  */
    {printf("declaracion_const declaraciones por declaraciones\n");}
#line 1669 "y.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 196 "bison.y" /* yacc.c:1652  */
    {printf("declaracion_var declaraciones por declaraciones\n");}
#line 1675 "y.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 197 "bison.y" /* yacc.c:1652  */
    {printf("empty por declaraciones\n");}
#line 1681 "y.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 199 "bison.y" /* yacc.c:1652  */
    {printf("BTIPO lista_d_tipo BFTIPO BPUNTO_Y_COMA por declaracion_tipo\n");}
#line 1687 "y.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 201 "bison.y" /* yacc.c:1652  */
    {printf("BCONST lista_d_cte BFCONST BPUNTO_Y_COMA por declaracion_const\n");}
#line 1693 "y.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 203 "bison.y" /* yacc.c:1652  */
    {printf("BVAR lista_d_var BFVAR BPUNTO_Y_COMA por declaracion_var\n");}
#line 1699 "y.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 205 "bison.y" /* yacc.c:1652  */
    {printf("BIDENTIFICADOR BIGUAL d_tipo BPUNTO_Y_COMA lista_d_tipo por lista_d_tipo\n");}
#line 1705 "y.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 206 "bison.y" /* yacc.c:1652  */
    {printf("empty por lista_d_tipo\n");}
#line 1711 "y.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 208 "bison.y" /* yacc.c:1652  */
    {printf("BTUPLA lista_campos BFTUPLA por d_tipo\n");}
#line 1717 "y.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 209 "bison.y" /* yacc.c:1652  */
    {printf("BTABLA BCORCHETE_APERTURA expresion_t BPUNTOSS expresion_t BCORCHETE_CIERRE BDE d_tipo por d_tipo\n");}
#line 1723 "y.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 210 "bison.y" /* yacc.c:1652  */
    {printf("BIDENTIFICADOR por d_tipo\n");}
#line 1729 "y.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 211 "bison.y" /* yacc.c:1652  */
    {printf("expresion_t BPUNTOSS expresion_t por d_tipo\n");}
#line 1735 "y.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 212 "bison.y" /* yacc.c:1652  */
    {printf("BREF d_tipo por d_tipo\n");}
#line 1741 "y.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 213 "bison.y" /* yacc.c:1652  */
    {
		(yyval.valor_texto) = (yyvsp[0].valor_texto);
		printf("BTIPO_BASE por d_tipo\n");}
#line 1749 "y.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 217 "bison.y" /* yacc.c:1652  */
    {printf("expresion por expresion_t\n");}
#line 1755 "y.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 218 "bison.y" /* yacc.c:1652  */
    {printf("BLITERAL_CARACTER por expresion_t\n");}
#line 1761 "y.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 220 "bison.y" /* yacc.c:1652  */
    {printf("BIDENTIFICADOR BDOS_PUNTOS d_tipo BPUNTO_Y_COMA lista_campos por lista_campos\n");}
#line 1767 "y.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 221 "bison.y" /* yacc.c:1652  */
    {printf("empty por lista_campos\n");}
#line 1773 "y.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 223 "bison.y" /* yacc.c:1652  */
    {insertar_variable(&listaconstantes,(yyvsp[-4].valor_texto),"booleano","constante"); printf("BIDENTIFICADORB BIGUAL exp_b BPUNTO_Y_COMA lista_d_cte por lista_d_cte\n");}
#line 1779 "y.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 224 "bison.y" /* yacc.c:1652  */
    {insertar_variable(&listaconstantes,(yyvsp[-4].valor_texto),"entero","constante"); printf("BIDENTIFICADOR BIGUAL BLITERAL_ENTERO BPUNTO_Y_COMA lista_d_cte por lista_d_cte\n");}
#line 1785 "y.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 225 "bison.y" /* yacc.c:1652  */
    {insertar_variable(&listaconstantes,(yyvsp[-4].valor_texto),"real","constante"); printf("BIDENTIFICADOR BIGUAL BLITERAL_REAL BPUNTO_Y_COMA lista_d_cte por lista_d_cte\n");}
#line 1791 "y.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 226 "bison.y" /* yacc.c:1652  */
    {insertar_variable(&listaconstantes,(yyvsp[-4].valor_texto),"caracter","constante"); printf("BIDENTIFICADOR BIGUAL BLITERAL_CARACTER BPUNTO_Y_COMA lista_d_cte por lista_d_cte\n");}
#line 1797 "y.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 227 "bison.y" /* yacc.c:1652  */
    {insertar_variable(&listaconstantes,(yyvsp[-4].valor_texto),"cadena","constante"); printf("BIDENTIFICADOR BIGUAL BLITERAL_CARACTER BPUNTO_Y_COMA lista_d_cte por lista_d_cte\n");}
#line 1803 "y.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 228 "bison.y" /* yacc.c:1652  */
    {printf("empty por lista_d_cte\n");}
#line 1809 "y.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 230 "bison.y" /* yacc.c:1652  */
    {printf("lista_id BDOS_PUNTOS BIDENTIFICADOR BPUNTO_Y_COMA lista_d_var por lista_d_var\n");}
#line 1815 "y.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 231 "bison.y" /* yacc.c:1652  */
    {printf("empty por lista_d_var\n");}
#line 1821 "y.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 233 "bison.y" /* yacc.c:1652  */
    {printf("lista_id BDOS_PUNTOS BIDENTIFICADOR BPUNTO_Y_COMA lista_d_var por lista_d_var\n");}
#line 1827 "y.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 234 "bison.y" /* yacc.c:1652  */
    {printf("empty por lista_d_var\n");}
#line 1833 "y.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 236 "bison.y" /* yacc.c:1652  */
    {printf("lista_id BDOS_PUNTOS BIDENTIFICADOR BPUNTO_Y_COMA lista_d_var por lista_d_var\n");}
#line 1839 "y.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 237 "bison.y" /* yacc.c:1652  */
    {printf("empty por lista_d_var\n");}
#line 1845 "y.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 239 "bison.y" /* yacc.c:1652  */
    { insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"entrada"); (yyval.valor_texto) = (yyvsp[0].valor_texto); printf("lista_id BDOS_PUNTOS d_tipo por lista_id");}
#line 1851 "y.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 240 "bison.y" /* yacc.c:1652  */
    {insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"entrada"); printf("BIDENTIFICADOR BCOMA lista_id por lista_id\n");}
#line 1857 "y.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 242 "bison.y" /* yacc.c:1652  */
    { insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"salida"); (yyval.valor_texto) = (yyvsp[0].valor_texto); printf("lista_id BDOS_PUNTOS d_tipo por lista_id");}
#line 1863 "y.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 243 "bison.y" /* yacc.c:1652  */
    {insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"salida"); printf("BIDENTIFICADOR BCOMA lista_id por lista_id\n");}
#line 1869 "y.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 245 "bison.y" /* yacc.c:1652  */
    { insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"entorno"); (yyval.valor_texto) = (yyvsp[0].valor_texto); printf("lista_id BDOS_PUNTOS d_tipo por lista_id");}
#line 1875 "y.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 246 "bison.y" /* yacc.c:1652  */
    {insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"entorno"); printf("BIDENTIFICADOR BCOMA lista_id por lista_id\n");}
#line 1881 "y.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 248 "bison.y" /* yacc.c:1652  */
    {printf("decl_ent por decl_ent_sal\n");}
#line 1887 "y.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 249 "bison.y" /* yacc.c:1652  */
    {printf("decl_ent decl_sal por decl_ent_sal\n");}
#line 1893 "y.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 250 "bison.y" /* yacc.c:1652  */
    {printf("decl_sal por decl_ent_sal\n");}
#line 1899 "y.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 252 "bison.y" /* yacc.c:1652  */
    {printf("BENT lista_d_var por decl_ent\n");}
#line 1905 "y.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 254 "bison.y" /* yacc.c:1652  */
    {printf("BSAL lista_d_var por decl_sal\n");}
#line 1911 "y.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 257 "bison.y" /* yacc.c:1652  */
    {(yyval.e).type = (yyvsp[0].e).type; (yyval.e).place=(yyvsp[0].e).place;printf("exp_a por expresion\n");}
#line 1917 "y.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 258 "bison.y" /* yacc.c:1652  */
    {printf("funcion_ll por expresion\n");}
#line 1923 "y.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 260 "bison.y" /* yacc.c:1652  */
    {
	backpatchP(&listainstrucciones,(yyvsp[0].b).f,listainstrucciones.nextQuad);
	gen(&listainstrucciones,"asignacionfalse",-1,-1,obtenerObjeto(&listavariables,(yyvsp[-2].valor_texto))->id);
	gen(&listainstrucciones,"goto",-1,-1,listainstrucciones.nextQuad+2); //EL goto siempre va a un registro de la tabla de cuadruplas
	backpatchP(&listainstrucciones,(yyvsp[0].b).t,listainstrucciones.nextQuad);
	gen(&listainstrucciones,"asignaciontrue",-1,-1,obtenerObjeto(&listavariables,(yyvsp[-2].valor_texto))->id);
	printf("operando BDOS_PUNTOS_IGUAL expresion por asignacion\n");}
#line 1935 "y.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 268 "bison.y" /* yacc.c:1652  */
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
#line 1959 "y.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 287 "bison.y" /* yacc.c:1652  */
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
#line 1987 "y.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 310 "bison.y" /* yacc.c:1652  */
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
#line 2015 "y.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 333 "bison.y" /* yacc.c:1652  */
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
#line 2043 "y.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 356 "bison.y" /* yacc.c:1652  */
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
#line 2071 "y.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 379 "bison.y" /* yacc.c:1652  */
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
#line 2102 "y.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 405 "bison.y" /* yacc.c:1652  */
    {(yyval.e).type = (yyvsp[-1].e).type; (yyval.e).place = (yyvsp[-1].e).place; printf("BPARENTESIS_APERTURA exp_a BPARENTESIS_CIERRE por exp_a\n");}
#line 2108 "y.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 406 "bison.y" /* yacc.c:1652  */
    {(yyval.e).type = obtenerObjeto(&listavariables,(yyvsp[0].valor_texto))->tipo; (yyval.e).place = obtenerObjeto(&listavariables,(yyvsp[0].valor_texto))->id; printf("operando por exp_a\n");}
#line 2114 "y.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 407 "bison.y" /* yacc.c:1652  */
    {printf("BLITERAL_REAL por exp_a\n");}
#line 2120 "y.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 408 "bison.y" /* yacc.c:1652  */
    {printf("BLITERAL_ENTERO por exp_a\n");}
#line 2126 "y.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 409 "bison.y" /* yacc.c:1652  */
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
#line 2143 "y.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 421 "bison.y" /* yacc.c:1652  */
    {(yyval.e).type = (yyvsp[0].e).type; (yyval.e).place = (yyvsp[0].e).place; printf("BMAS exp_a por exp_a\n");}
#line 2149 "y.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 422 "bison.y" /* yacc.c:1652  */
    {
		backpatchP(&listainstrucciones,(yyvsp[-3].b).t,(yyvsp[-1].quad));
		(yyval.b).f = mergeP((yyvsp[-3].b).f,(yyvsp[0].b).f);
		(yyval.b).t = (yyvsp[0].b).t;
	
		printf("exp_b BY exp_b por exp_b\n");}
#line 2160 "y.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 428 "bison.y" /* yacc.c:1652  */
    {
		backpatchP(&listainstrucciones,(yyvsp[-3].b).f,(yyvsp[-1].quad));
		(yyval.b).t = mergeP((yyvsp[-3].b).t,(yyvsp[0].b).t);
		(yyval.b).f = (yyvsp[0].b).f;
		printf("exp_b BO exp_b por exp_b\n");
	}
#line 2171 "y.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 434 "bison.y" /* yacc.c:1652  */
    {
		(yyval.b).t = (yyvsp[0].b).f;
		(yyval.b).f = (yyvsp[0].b).t;		
		printf("BNO exp_b por exp_b\n");}
#line 2180 "y.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 438 "bison.y" /* yacc.c:1652  */
    {printf("operando_booleano por exp_b\n");}
#line 2186 "y.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 439 "bison.y" /* yacc.c:1652  */
    {printf("BVERDADERO por exp_b\n");}
#line 2192 "y.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 440 "bison.y" /* yacc.c:1652  */
    {printf("BFALSO por exp_b\n");}
#line 2198 "y.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 441 "bison.y" /* yacc.c:1652  */
    {
		(yyval.b).t = (yyvsp[-1].b).t;
		(yyval.b).f = (yyvsp[-1].b).f;
		printf("BPARENTESIS_APERTURA exp_b BPARENTESIS_CIERRE por exp_b\n");}
#line 2207 "y.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 445 "bison.y" /* yacc.c:1652  */
    {
		(yyval.b).t = makelistP(listainstrucciones.nextQuad);
		(yyval.b).f = makelistP(listainstrucciones.nextQuad + 1);
		gen(&listainstrucciones,"ifigual",(yyvsp[-2].e).place,(yyvsp[0].e).place,-1);
		gen(&listainstrucciones,"goto",-1,-1,-1);
		printf("exp_a BOPREL exp_a por exp_b\n");}
#line 2218 "y.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 451 "bison.y" /* yacc.c:1652  */
    {
		(yyval.b).t = makelistP(listainstrucciones.nextQuad);
		(yyval.b).f = makelistP(listainstrucciones.nextQuad + 1);
		gen(&listainstrucciones,"ifmayor",(yyvsp[-2].e).place,(yyvsp[0].e).place,-1);
		gen(&listainstrucciones,"goto",-1,-1,-1);
		printf("exp_a BOPREL exp_a por exp_b\n");}
#line 2229 "y.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 457 "bison.y" /* yacc.c:1652  */
    {
		(yyval.b).t = makelistP(listainstrucciones.nextQuad);
		(yyval.b).f = makelistP(listainstrucciones.nextQuad + 1);
		gen(&listainstrucciones,"ifmenor",(yyvsp[-2].e).place,(yyvsp[0].e).place,-1);
		gen(&listainstrucciones,"goto",-1,-1,-1);
		printf("exp_a BOPREL exp_a por exp_b\n");}
#line 2240 "y.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 463 "bison.y" /* yacc.c:1652  */
    {
		(yyval.b).t = makelistP(listainstrucciones.nextQuad);
		(yyval.b).f = makelistP(listainstrucciones.nextQuad + 1);
		gen(&listainstrucciones,"ifdiferente",(yyvsp[-2].e).place,(yyvsp[0].e).place,-1);
		gen(&listainstrucciones,"goto",-1,-1,-1);
		printf("exp_a BOPREL exp_a por exp_b\n");}
#line 2251 "y.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 469 "bison.y" /* yacc.c:1652  */
    {
		(yyval.b).t = makelistP(listainstrucciones.nextQuad);
		(yyval.b).f = makelistP(listainstrucciones.nextQuad + 1);
		gen(&listainstrucciones,"ifmayorigual",(yyvsp[-2].e).place,(yyvsp[0].e).place,-1);
		gen(&listainstrucciones,"goto",-1,-1,-1);
		printf("exp_a BOPREL exp_a por exp_b\n");}
#line 2262 "y.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 475 "bison.y" /* yacc.c:1652  */
    {
		(yyval.b).t = makelistP(listainstrucciones.nextQuad);
		(yyval.b).f = makelistP(listainstrucciones.nextQuad + 1);
		gen(&listainstrucciones,"ifmenorigual",(yyvsp[-2].e).place,(yyvsp[0].e).place,-1);
		gen(&listainstrucciones,"goto",-1,-1,-1);
		printf("exp_a BOPREL exp_a por exp_b\n");}
#line 2273 "y.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 481 "bison.y" /* yacc.c:1652  */
    {(yyval.valor_texto) = (yyvsp[0].valor_texto); printf("BIDENTIFICADOR por operando\n");}
#line 2279 "y.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 482 "bison.y" /* yacc.c:1652  */
    {printf("operando BPUNTO operando por operando\n");}
#line 2285 "y.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 483 "bison.y" /* yacc.c:1652  */
    {printf("operando BCORCHETE_APERTURA expresion BCORCHETE_CIERRE por operando\n");}
#line 2291 "y.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 484 "bison.y" /* yacc.c:1652  */
    {printf("operando BREF por operando\n");}
#line 2297 "y.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 485 "bison.y" /* yacc.c:1652  */
    {printf("BIDENTIFICADOR por operando_booleano\n");}
#line 2303 "y.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 486 "bison.y" /* yacc.c:1652  */
    {printf("instruccion BPUNTO_Y_COMA instrucciones por instrucciones\n");}
#line 2309 "y.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 487 "bison.y" /* yacc.c:1652  */
    {printf("instruccion por instrucciones\n");}
#line 2315 "y.tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 488 "bison.y" /* yacc.c:1652  */
    {printf("BCONTINUAR por instruccion\n");}
#line 2321 "y.tab.c" /* yacc.c:1652  */
    break;

  case 90:
#line 489 "bison.y" /* yacc.c:1652  */
    {printf("asignacion por instruccion\n");}
#line 2327 "y.tab.c" /* yacc.c:1652  */
    break;

  case 91:
#line 490 "bison.y" /* yacc.c:1652  */
    {printf("asignacion booleana por instruccion\n");}
#line 2333 "y.tab.c" /* yacc.c:1652  */
    break;

  case 92:
#line 491 "bison.y" /* yacc.c:1652  */
    {printf("alternativa por instruccion\n");}
#line 2339 "y.tab.c" /* yacc.c:1652  */
    break;

  case 93:
#line 492 "bison.y" /* yacc.c:1652  */
    {printf("iteracion por instruccion\n");}
#line 2345 "y.tab.c" /* yacc.c:1652  */
    break;

  case 94:
#line 494 "bison.y" /* yacc.c:1652  */
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
	printf("operando BDOS_PUNTOS_IGUAL expresion por asignacion\n");}
#line 2361 "y.tab.c" /* yacc.c:1652  */
    break;

  case 95:
#line 505 "bison.y" /* yacc.c:1652  */
    {printf("expresion por asignacion\n");}
#line 2367 "y.tab.c" /* yacc.c:1652  */
    break;

  case 96:
#line 506 "bison.y" /* yacc.c:1652  */
    {printf("BSI expresion BENTONCES instrucciones lista_opciones BFSI por alternativa\n");}
#line 2373 "y.tab.c" /* yacc.c:1652  */
    break;

  case 97:
#line 507 "bison.y" /* yacc.c:1652  */
    {printf("BSINO expresion BENTONCES instrucciones lista_opciones por lista_opciones\n");}
#line 2379 "y.tab.c" /* yacc.c:1652  */
    break;

  case 98:
#line 508 "bison.y" /* yacc.c:1652  */
    {printf("empty por lista_opciones\n");}
#line 2385 "y.tab.c" /* yacc.c:1652  */
    break;

  case 99:
#line 509 "bison.y" /* yacc.c:1652  */
    {printf("it_cota_fija por iteracion\n");}
#line 2391 "y.tab.c" /* yacc.c:1652  */
    break;

  case 100:
#line 510 "bison.y" /* yacc.c:1652  */
    {printf("it_cota_exp por iteracion\n");}
#line 2397 "y.tab.c" /* yacc.c:1652  */
    break;

  case 101:
#line 511 "bison.y" /* yacc.c:1652  */
    {printf("BMIENTRAS expresion BHACER instrucciones BFMIENTRAS por it_cota_exp\n");}
#line 2403 "y.tab.c" /* yacc.c:1652  */
    break;

  case 102:
#line 512 "bison.y" /* yacc.c:1652  */
    {printf("BPARA BIDENTIFICADOR BDOS_PUNTOS_IGUAL expresion BHASTA expresion BHACER instrucciones BFPARA por it_cota_fija\n");}
#line 2409 "y.tab.c" /* yacc.c:1652  */
    break;

  case 103:
#line 513 "bison.y" /* yacc.c:1652  */
    {printf("BACCION a_cabecera bloque BFACCION por accion_d\n");}
#line 2415 "y.tab.c" /* yacc.c:1652  */
    break;

  case 104:
#line 514 "bison.y" /* yacc.c:1652  */
    {printf("BFUNCION f_cabecera bloque BDEV expresion BFFUNCION por funcion_d\n");}
#line 2421 "y.tab.c" /* yacc.c:1652  */
    break;

  case 105:
#line 515 "bison.y" /* yacc.c:1652  */
    {printf("BIDENTIFICADOR BPARENTESIS_APERTURA d_par_form BPARENTESIS_CIERRE BPUNTO_Y_COMA por a_cabecera\n");}
#line 2427 "y.tab.c" /* yacc.c:1652  */
    break;

  case 106:
#line 516 "bison.y" /* yacc.c:1652  */
    {printf("BIDENTIFICADOR BPARENTESIS_APERTURA lista_d_var BPARENTESIS_CIERRE BDEF d_tipo BPUNTO_Y_COMA por f_cabecera\n");}
#line 2433 "y.tab.c" /* yacc.c:1652  */
    break;

  case 107:
#line 517 "bison.y" /* yacc.c:1652  */
    {printf("d_p_form BPUNTO_Y_COMA d_par_form por d_par_form\n");}
#line 2439 "y.tab.c" /* yacc.c:1652  */
    break;

  case 108:
#line 518 "bison.y" /* yacc.c:1652  */
    {printf("empty por d_par_form\n");}
#line 2445 "y.tab.c" /* yacc.c:1652  */
    break;

  case 109:
#line 520 "bison.y" /* yacc.c:1652  */
    {printf("BEND lista_id BDOS_PUNTOS d_tipo por d_p_form\n");}
#line 2451 "y.tab.c" /* yacc.c:1652  */
    break;

  case 110:
#line 521 "bison.y" /* yacc.c:1652  */
    {printf("BSAL lista_id BDOS_PUNTOS d_tipo por d_p_form\n");}
#line 2457 "y.tab.c" /* yacc.c:1652  */
    break;

  case 111:
#line 522 "bison.y" /* yacc.c:1652  */
    {printf("BES lista_id BDOS_PUNTOS d_tipo por d_p_form\n");}
#line 2463 "y.tab.c" /* yacc.c:1652  */
    break;

  case 112:
#line 525 "bison.y" /* yacc.c:1652  */
    {printf("BIDENTIFICADOR BPARENTESIS_APERTURA l_ll BPARENTESIS_CIERRE por funcion_ll\n");}
#line 2469 "y.tab.c" /* yacc.c:1652  */
    break;

  case 113:
#line 526 "bison.y" /* yacc.c:1652  */
    {printf("expresion BCOMA l_ll por l_ll\n");}
#line 2475 "y.tab.c" /* yacc.c:1652  */
    break;

  case 114:
#line 527 "bison.y" /* yacc.c:1652  */
    {printf("expresion por l_ll\n");}
#line 2481 "y.tab.c" /* yacc.c:1652  */
    break;

  case 115:
#line 529 "bison.y" /* yacc.c:1652  */
    {(yyval.quad) = listainstrucciones.nextQuad; printf("M por empty");}
#line 2487 "y.tab.c" /* yacc.c:1652  */
    break;


#line 2491 "y.tab.c" /* yacc.c:1652  */
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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
#line 530 "bison.y" /* yacc.c:1918  */


int main() {
	inicializacion(&listavariables);
	inicializacion(&listaconstantes);
	inicializacionQ(&listainstrucciones);

	yyin = stdin;

	do {
		yyparse();
	} while(!feof(yyin));
	//leerlista(&listavariables);
	leerlistaQ(&listainstrucciones,&listavariables);
	return 0;
}

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}
