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
#define YYLAST   349

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  292

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
     205,   207,   209,   210,   211,   212,   213,   214,   215,   219,
     220,   222,   223,   225,   226,   227,   228,   229,   230,   232,
     233,   235,   236,   238,   239,   241,   242,   243,   244,   246,
     247,   248,   249,   251,   252,   253,   254,   256,   257,   258,
     260,   262,   265,   266,   268,   276,   295,   318,   341,   364,
     387,   413,   414,   415,   416,   417,   429,   430,   436,   442,
     446,   454,   460,   465,   469,   475,   481,   487,   493,   499,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   518,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   544,   545,   546,
     549,   550,   551,   553
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
  "lista_opciones", "iteracion", "it_cota_exp", "it_cota_fija", "accion_d",
  "funcion_d", "a_cabecera", "f_cabecera", "d_par_form", "d_p_form",
  "funcion_ll", "l_ll", "M", YY_NULLPTR
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

#define YYPACT_NINF -145

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-145)))

#define YYTABLE_NINF -25

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,    15,    28,    27,  -145,    50,    32,     3,   165,    35,
      50,    50,     8,    38,    30,    39,   121,     9,   139,   167,
     169,   165,   165,   165,   143,   196,    46,    35,    35,  -145,
    -145,    33,   214,    52,    36,   216,    75,   155,   210,   228,
     239,  -145,   235,   120,   120,   120,  -145,    36,    36,   276,
    -145,  -145,  -145,  -145,  -145,   221,    23,   234,  -145,   289,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,   242,
     165,   257,   165,    18,    20,   290,   265,  -145,  -145,  -145,
      68,   295,   281,    33,  -145,  -145,  -145,   296,   277,  -145,
      19,  -145,   297,   299,   300,   301,  -145,    36,    36,  -145,
    -145,   215,   126,  -145,  -145,    33,     9,    33,     9,   302,
       9,  -145,   131,   191,  -145,   255,    98,    -8,   261,   120,
     120,   120,   120,   120,   120,   304,   131,  -145,   131,    36,
     169,    12,   247,     9,   250,   180,   202,  -145,   307,   208,
     233,  -145,   308,  -145,  -145,   285,   298,   116,  -145,    32,
     116,     3,     3,     3,     3,   207,   172,  -145,   120,   120,
     120,   120,   120,   120,     3,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,   286,   278,  -145,   169,   169,   131,   191,
     191,  -145,  -145,  -145,  -145,     1,   291,  -145,   226,  -145,
       9,     9,     9,   280,   312,  -145,   282,   131,    33,    18,
      33,    18,    18,    33,    20,    33,    20,    20,    33,  -145,
     303,  -145,  -145,  -145,  -145,  -145,  -145,  -145,   221,   221,
     221,   221,   221,   221,  -145,    36,    36,   131,  -145,   268,
     269,   266,  -145,   305,   306,   309,   320,    12,   310,   264,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
     322,   116,   263,  -145,  -145,  -145,    36,   279,  -145,   131,
      33,    33,    33,  -145,  -145,    33,  -145,   295,   311,   315,
     129,  -145,   283,  -145,  -145,  -145,   327,  -145,   316,    33,
     169,   169,  -145,    33,   335,   268,   284,  -145,    32,  -145,
    -145,  -145
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
       0,     4,    90,     0,     0,     0,    97,     0,     0,     0,
      94,    74,    73,   103,    99,    62,    72,     0,    11,    96,
      98,   100,   101,   108,   107,    63,    12,    13,    14,     0,
      15,     0,    15,    40,    42,     0,    57,    59,     8,     9,
      90,    32,     0,     0,    28,    30,    27,     0,     0,    29,
      72,    16,     0,     0,     0,     0,    90,     0,     0,    81,
      82,     0,     0,    80,    17,     0,     0,     0,     0,     0,
      44,     2,     0,    76,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
       0,   116,     0,    44,     0,     0,     0,    60,     0,     0,
       0,    61,     0,     3,    58,     0,     0,     0,    26,    21,
       0,    38,    38,    38,    38,     0,     0,    79,     0,     0,
       0,     0,     0,     0,    38,   123,   123,    53,    55,    54,
      56,    18,    43,   122,     0,    71,     0,     0,     0,    65,
      66,    67,    68,    69,    70,    91,     0,   102,    64,    95,
       0,     0,     0,     0,     0,   111,     0,     0,     0,     0,
       0,     0,    40,     0,     0,     0,     0,    42,     0,    22,
       0,    19,    25,    36,    37,    34,    35,    83,    84,    85,
      86,    88,    89,    87,    33,     0,     0,     0,   120,   106,
       0,     0,    92,     0,     0,     0,     0,   116,     0,     0,
      45,    47,    46,    48,    39,    49,    51,    50,    52,    41,
       0,     0,     0,    77,    78,   121,     0,     0,   109,     0,
       0,     0,     0,   113,   115,     0,   112,    32,     0,     0,
       0,   104,     0,   117,   118,   119,     0,    31,     0,     0,
       0,     0,   114,     0,     0,   106,     0,    23,    21,   105,
     110,    20
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -145,  -145,  -145,  -145,   260,   245,    51,   183,    45,   141,
    -145,  -144,  -145,   -66,  -129,    74,    37,   142,   136,  -102,
     -84,   -68,   -79,  -145,  -145,   270,   -20,  -145,   -33,   -45,
     -16,   -14,  -114,  -145,  -145,  -145,    60,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,   110,  -145,  -145,   122,   182
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    18,     9,    26,    19,    20,    21,    22,
      23,    13,   252,    87,    88,   146,    16,   137,   141,    38,
     138,   142,    39,    75,    76,    77,    89,    54,    55,   102,
      90,   103,    58,    59,    60,    61,   257,    62,    63,    64,
      27,    28,    70,    72,   193,   194,    65,   174,   225
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,   101,   116,   117,    56,   211,    57,    14,   172,     1,
     113,   114,   115,    36,   101,   101,   189,   148,   210,     3,
     126,   212,   135,    31,   139,   127,   125,   168,     4,   170,
     125,   196,     5,   190,   165,   166,    12,    80,   126,   167,
      96,   169,   126,   127,   191,    33,   177,   127,    32,    81,
      10,    82,   156,   157,    34,    10,    10,    83,    84,     6,
      85,     7,   229,   230,   155,   101,    43,    44,    15,    43,
      44,   128,    45,   -24,    37,    97,   192,    73,    74,    92,
      98,    99,   100,   136,   188,   140,   179,   180,   181,   182,
     183,   184,   173,    93,    24,    25,   101,   -24,    86,    51,
      52,    50,    51,    52,   105,   106,   186,   112,   187,   185,
      53,   233,   234,   235,    56,   241,    57,   243,    94,    95,
      42,   132,   268,   134,    96,   218,   219,   220,   221,   222,
     223,   164,   240,    35,   242,    42,   246,   245,   248,   247,
     165,   166,   250,    85,   291,    40,    11,    69,   176,    43,
      44,    11,    11,    43,    44,    45,    53,    53,   231,    45,
      56,    56,    57,    57,    43,    44,   285,   286,   165,   166,
      45,   165,   166,    42,     6,    41,     7,   239,    17,   280,
     253,   254,    51,    52,   107,   108,    51,    52,   213,   214,
     215,   216,   101,   101,   273,   274,   275,    51,    52,   276,
      71,   224,    43,    44,    66,    67,    68,   173,    45,   198,
     199,   270,   217,   284,   165,   166,    46,   287,    47,    91,
      48,   104,   158,   101,   109,    49,   121,   122,   123,   124,
     158,   200,   201,   110,    50,    51,    52,   203,   204,   272,
     119,   120,   121,   122,   123,   124,   111,   175,   119,   120,
     121,   122,   123,   124,   119,   120,   121,   122,   123,   124,
      53,    53,   205,   206,    56,    56,    57,    57,   165,   166,
      29,    30,    78,    79,   112,   159,   160,   161,   162,   163,
     118,   131,   129,   159,   160,   161,   162,   163,   119,   120,
     121,   122,   123,   124,   130,   175,   133,    74,   143,   145,
     147,   149,   151,   150,   152,   153,   154,   171,    96,   178,
     195,   197,   202,   207,   208,   209,   227,   237,   228,   232,
     236,   256,   238,   259,   258,   263,   266,   267,   269,   251,
     279,   271,   282,   265,   260,   261,   283,   281,   262,   278,
     288,   277,   290,   249,   244,   289,   144,   264,   226,   255
};

static const yytype_uint16 yycheck[] =
{
      20,    34,    47,    48,    20,   149,    20,     4,   110,     3,
      43,    44,    45,     4,    47,    48,   130,    83,   147,     4,
      19,   150,     4,    15,     4,    24,     7,   106,     0,   108,
       7,   133,     5,    21,    42,    43,     4,     4,    19,   105,
       4,   107,    19,    24,    32,    15,    54,    24,    10,    16,
       5,    18,    97,    98,    15,    10,    11,    24,    25,     9,
      27,    11,   176,   177,    97,    98,    33,    34,    65,    33,
      34,    48,    39,     5,    65,    39,    64,    31,    32,    27,
      44,    45,    46,    65,   129,    65,   119,   120,   121,   122,
     123,   124,   112,    41,    59,    60,   129,    29,    65,    66,
      67,    65,    66,    67,    29,    30,   126,    39,   128,   125,
     130,   190,   191,   192,   130,   199,   130,   201,    66,    67,
       4,    70,   251,    72,     4,   158,   159,   160,   161,   162,
     163,     5,   198,    12,   200,     4,   204,   203,   206,   205,
      42,    43,   208,    27,   288,     6,     5,     4,    50,    33,
      34,    10,    11,    33,    34,    39,   176,   177,   178,    39,
     176,   177,   176,   177,    33,    34,   280,   281,    42,    43,
      39,    42,    43,     4,     9,     8,    11,   197,    13,    50,
     225,   226,    66,    67,    29,    30,    66,    67,   151,   152,
     153,   154,   225,   226,   260,   261,   262,    66,    67,   265,
       4,   164,    33,    34,    21,    22,    23,   227,    39,    29,
      30,   256,    40,   279,    42,    43,    47,   283,    49,     5,
      51,     5,    15,   256,    14,    56,    35,    36,    37,    38,
      15,    29,    30,     5,    65,    66,    67,    29,    30,   259,
      33,    34,    35,    36,    37,    38,     7,    40,    33,    34,
      35,    36,    37,    38,    33,    34,    35,    36,    37,    38,
     280,   281,    29,    30,   280,   281,   280,   281,    42,    43,
      10,    11,    27,    28,    39,    68,    69,    70,    71,    72,
       4,    39,    48,    68,    69,    70,    71,    72,    33,    34,
      35,    36,    37,    38,     5,    40,    39,    32,     8,     4,
      19,     5,     5,    26,     5,     5,     5,     5,     4,    48,
      63,    61,     5,     5,    29,    17,    30,     5,    40,    28,
      40,    53,    40,    57,    55,     5,    62,     5,    65,    26,
      15,    52,     5,    23,    29,    29,    20,    54,    29,    28,
       5,   267,    58,   207,   202,   285,    76,   237,   166,   227
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    76,     4,     0,     5,     9,    11,    77,    79,
      83,    84,     4,    86,     4,    65,    91,    13,    78,    81,
      82,    83,    84,    85,    59,    60,    80,   115,   116,    79,
      79,    15,    10,    15,    15,    12,     4,    65,    94,    97,
       6,     8,     4,    33,    34,    39,    47,    49,    51,    56,
      65,    66,    67,   101,   102,   103,   105,   106,   107,   108,
     109,   110,   112,   113,   114,   121,    82,    82,    82,     4,
     117,     4,   118,    31,    32,    98,    99,   100,    80,    80,
       4,    16,    18,    24,    25,    27,    65,    88,    89,   101,
     105,     5,    27,    41,    66,    67,     4,    39,    44,    45,
      46,   103,   104,   106,     5,    29,    30,    29,    30,    14,
       5,     7,    39,   103,   103,   103,   104,   104,     4,    33,
      34,    35,    36,    37,    38,     7,    19,    24,    48,    48,
       5,    39,    81,    39,    81,     4,    65,    92,    95,     4,
      65,    93,    96,     8,   100,     4,    90,    19,    88,     5,
      26,     5,     5,     5,     5,   103,   104,   104,    15,    68,
      69,    70,    71,    72,     5,    42,    43,    88,    97,    88,
      97,     5,    94,   101,   122,    40,    50,    54,    48,   103,
     103,   103,   103,   103,   103,   105,   101,   101,   104,   107,
      21,    32,    64,   119,   120,    63,    94,    61,    29,    30,
      29,    30,     5,    29,    30,    29,    30,     5,    29,    17,
      89,    86,    89,    91,    91,    91,    91,    40,   103,   103,
     103,   103,   103,   103,    91,   123,   123,    30,    40,   107,
     107,   101,    28,    97,    97,    97,    40,     5,    40,   101,
      88,    95,    88,    95,    92,    88,    96,    88,    96,    93,
      88,    26,    87,   104,   104,   122,    53,   111,    55,    57,
      29,    29,    29,     5,   119,    23,    62,     5,    89,    65,
     104,    52,   101,    88,    88,    88,    88,    90,    28,    15,
      50,    54,     5,    20,    88,   107,   107,    88,     5,   111,
      58,    86
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
     114,   115,   116,   117,   118,   119,   119,   120,   120,   120,
     121,   122,   122,   123
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
       1,     1,     3,     1,     6,     5,     0,     1,     1,     5,
       9,     4,     6,     5,     7,     3,     0,     4,     4,     4,
       4,     3,     1,     0
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
#line 1620 "y.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 180 "bison.y" /* yacc.c:1652  */
    {printf("decl_globales decl_a_f decl_ent_sal BCOMENTARIO por cabecera_alg\n");}
#line 1626 "y.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 182 "bison.y" /* yacc.c:1652  */
    {printf("bloque BCOMENTARIO por bloque_alg\n");}
#line 1632 "y.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 184 "bison.y" /* yacc.c:1652  */
    {printf("declaracion_tipo decl_globales por decl_globales\n");}
#line 1638 "y.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 185 "bison.y" /* yacc.c:1652  */
    {printf("declaracion_const decl_globales por decl_globales\n");}
#line 1644 "y.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 186 "bison.y" /* yacc.c:1652  */
    {printf("empty por decl_globales\n");}
#line 1650 "y.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 188 "bison.y" /* yacc.c:1652  */
    {printf("accion_d decl_a_f por decl_a_f\n");}
#line 1656 "y.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 189 "bison.y" /* yacc.c:1652  */
    {printf("funcion_d decl_a_f por decl_a_f\n");}
#line 1662 "y.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 190 "bison.y" /* yacc.c:1652  */
    {printf("empty por decl_a_f\n");}
#line 1668 "y.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 192 "bison.y" /* yacc.c:1652  */
    {printf("declaraciones instrucciones por bloque\n");}
#line 1674 "y.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 194 "bison.y" /* yacc.c:1652  */
    {printf("declaracion_tipo declaraciones por declaraciones\n");}
#line 1680 "y.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 195 "bison.y" /* yacc.c:1652  */
    {printf("declaracion_const declaraciones por declaraciones\n");}
#line 1686 "y.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 196 "bison.y" /* yacc.c:1652  */
    {printf("declaracion_var declaraciones por declaraciones\n");}
#line 1692 "y.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 197 "bison.y" /* yacc.c:1652  */
    {printf("empty por declaraciones\n");}
#line 1698 "y.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 199 "bison.y" /* yacc.c:1652  */
    {printf("BTIPO lista_d_tipo BFTIPO BPUNTO_Y_COMA por declaracion_tipo\n");}
#line 1704 "y.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 201 "bison.y" /* yacc.c:1652  */
    {printf("BCONST lista_d_cte BFCONST BPUNTO_Y_COMA por declaracion_const\n");}
#line 1710 "y.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 203 "bison.y" /* yacc.c:1652  */
    {printf("BVAR lista_d_var BFVAR BPUNTO_Y_COMA por declaracion_var\n");}
#line 1716 "y.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 205 "bison.y" /* yacc.c:1652  */
    {printf("BIDENTIFICADOR BIGUAL d_tipo BPUNTO_Y_COMA lista_d_tipo por lista_d_tipo\n");}
#line 1722 "y.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 206 "bison.y" /* yacc.c:1652  */
    {printf("BIDENTIFICADORB BIGUAL d_tipo BPUNTO_Y_COMA lista_d_tipo por lista_d_tipo\n");}
#line 1728 "y.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 207 "bison.y" /* yacc.c:1652  */
    {printf("empty por lista_d_tipo\n");}
#line 1734 "y.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 209 "bison.y" /* yacc.c:1652  */
    {printf("BTUPLA lista_campos BFTUPLA por d_tipo\n");}
#line 1740 "y.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 210 "bison.y" /* yacc.c:1652  */
    {printf("BTABLA BCORCHETE_APERTURA expresion_t BPUNTOSS expresion_t BCORCHETE_CIERRE BDE d_tipo por d_tipo\n");}
#line 1746 "y.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 211 "bison.y" /* yacc.c:1652  */
    {printf("BIDENTIFICADOR por d_tipo\n");}
#line 1752 "y.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 212 "bison.y" /* yacc.c:1652  */
    {printf("expresion_t BPUNTOSS expresion_t por d_tipo\n");}
#line 1758 "y.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 213 "bison.y" /* yacc.c:1652  */
    {printf("BREF d_tipo por d_tipo\n");}
#line 1764 "y.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 214 "bison.y" /* yacc.c:1652  */
    {printf("BIDENTIFICADORB por d_tipo\n");}
#line 1770 "y.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 215 "bison.y" /* yacc.c:1652  */
    {
		(yyval.valor_texto) = (yyvsp[0].valor_texto);
		printf("BTIPO_BASE por d_tipo\n");}
#line 1778 "y.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 219 "bison.y" /* yacc.c:1652  */
    {printf("expresion por expresion_t\n");}
#line 1784 "y.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 220 "bison.y" /* yacc.c:1652  */
    {printf("BLITERAL_CARACTER por expresion_t\n");}
#line 1790 "y.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 222 "bison.y" /* yacc.c:1652  */
    {printf("BIDENTIFICADOR BDOS_PUNTOS d_tipo BPUNTO_Y_COMA lista_campos por lista_campos\n");}
#line 1796 "y.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 223 "bison.y" /* yacc.c:1652  */
    {printf("empty por lista_campos\n");}
#line 1802 "y.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 225 "bison.y" /* yacc.c:1652  */
    {insertar_variable(&listaconstantes,(yyvsp[-4].valor_texto),"booleano","constante"); printf("BIDENTIFICADORB BIGUAL exp_b BPUNTO_Y_COMA lista_d_cte por lista_d_cte\n");}
#line 1808 "y.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 226 "bison.y" /* yacc.c:1652  */
    {insertar_variable(&listaconstantes,(yyvsp[-4].valor_texto),"entero","constante"); printf("BIDENTIFICADOR BIGUAL BLITERAL_ENTERO BPUNTO_Y_COMA lista_d_cte por lista_d_cte\n");}
#line 1814 "y.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 227 "bison.y" /* yacc.c:1652  */
    {insertar_variable(&listaconstantes,(yyvsp[-4].valor_texto),"real","constante"); printf("BIDENTIFICADOR BIGUAL BLITERAL_REAL BPUNTO_Y_COMA lista_d_cte por lista_d_cte\n");}
#line 1820 "y.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 228 "bison.y" /* yacc.c:1652  */
    {insertar_variable(&listaconstantes,(yyvsp[-4].valor_texto),"caracter","constante"); printf("BIDENTIFICADOR BIGUAL BLITERAL_CARACTER BPUNTO_Y_COMA lista_d_cte por lista_d_cte\n");}
#line 1826 "y.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 229 "bison.y" /* yacc.c:1652  */
    {insertar_variable(&listaconstantes,(yyvsp[-4].valor_texto),"cadena","constante"); printf("BIDENTIFICADOR BIGUAL BLITERAL_CARACTER BPUNTO_Y_COMA lista_d_cte por lista_d_cte\n");}
#line 1832 "y.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 230 "bison.y" /* yacc.c:1652  */
    {printf("empty por lista_d_cte\n");}
#line 1838 "y.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 232 "bison.y" /* yacc.c:1652  */
    {printf("lista_id BDOS_PUNTOS BIDENTIFICADOR BPUNTO_Y_COMA lista_d_var por lista_d_var\n");}
#line 1844 "y.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 233 "bison.y" /* yacc.c:1652  */
    {printf("empty por lista_d_var\n");}
#line 1850 "y.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 235 "bison.y" /* yacc.c:1652  */
    {printf("lista_id BDOS_PUNTOS BIDENTIFICADOR BPUNTO_Y_COMA lista_d_var por lista_d_var\n");}
#line 1856 "y.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 236 "bison.y" /* yacc.c:1652  */
    {printf("empty por lista_d_var\n");}
#line 1862 "y.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 238 "bison.y" /* yacc.c:1652  */
    {printf("lista_id BDOS_PUNTOS BIDENTIFICADOR BPUNTO_Y_COMA lista_d_var por lista_d_var\n");}
#line 1868 "y.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 239 "bison.y" /* yacc.c:1652  */
    {printf("empty por lista_d_var\n");}
#line 1874 "y.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 241 "bison.y" /* yacc.c:1652  */
    { insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"entrada"); (yyval.valor_texto) = (yyvsp[0].valor_texto); printf("lista_id BDOS_PUNTOS d_tipo por lista_id");}
#line 1880 "y.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 242 "bison.y" /* yacc.c:1652  */
    { insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"entrada"); (yyval.valor_texto) = (yyvsp[0].valor_texto); printf("lista_id BDOS_PUNTOS d_tipo por lista_id");}
#line 1886 "y.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 243 "bison.y" /* yacc.c:1652  */
    {insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"entrada"); printf("BIDENTIFICADOR BCOMA lista_id por lista_id\n");}
#line 1892 "y.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 244 "bison.y" /* yacc.c:1652  */
    {insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"entrada"); printf("BIDENTIFICADOR BCOMA lista_id por lista_id\n");}
#line 1898 "y.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 246 "bison.y" /* yacc.c:1652  */
    { insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"salida"); (yyval.valor_texto) = (yyvsp[0].valor_texto); printf("lista_id BDOS_PUNTOS d_tipo por lista_id");}
#line 1904 "y.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 247 "bison.y" /* yacc.c:1652  */
    { insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"salida"); (yyval.valor_texto) = (yyvsp[0].valor_texto); printf("lista_id BDOS_PUNTOS d_tipo por lista_id");}
#line 1910 "y.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 248 "bison.y" /* yacc.c:1652  */
    {insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"salida"); printf("BIDENTIFICADOR BCOMA lista_id por lista_id\n");}
#line 1916 "y.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 249 "bison.y" /* yacc.c:1652  */
    {insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"salida"); printf("BIDENTIFICADOR BCOMA lista_id por lista_id\n");}
#line 1922 "y.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 251 "bison.y" /* yacc.c:1652  */
    { insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"entorno"); (yyval.valor_texto) = (yyvsp[0].valor_texto); printf("lista_id BDOS_PUNTOS d_tipo por lista_id");}
#line 1928 "y.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 252 "bison.y" /* yacc.c:1652  */
    { insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"entorno"); (yyval.valor_texto) = (yyvsp[0].valor_texto); printf("lista_id BDOS_PUNTOS d_tipo por lista_id");}
#line 1934 "y.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 253 "bison.y" /* yacc.c:1652  */
    {insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"entorno"); printf("BIDENTIFICADOR BCOMA lista_id por lista_id\n");}
#line 1940 "y.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 254 "bison.y" /* yacc.c:1652  */
    {insertar_variable(&listavariables,(yyvsp[-2].valor_texto),(yyvsp[0].valor_texto),"entorno"); printf("BIDENTIFICADOR BCOMA lista_id por lista_id\n");}
#line 1946 "y.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 256 "bison.y" /* yacc.c:1652  */
    {printf("decl_ent por decl_ent_sal\n");}
#line 1952 "y.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 257 "bison.y" /* yacc.c:1652  */
    {printf("decl_ent decl_sal por decl_ent_sal\n");}
#line 1958 "y.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 258 "bison.y" /* yacc.c:1652  */
    {printf("decl_sal por decl_ent_sal\n");}
#line 1964 "y.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 260 "bison.y" /* yacc.c:1652  */
    {printf("BENT lista_d_var por decl_ent\n");}
#line 1970 "y.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 262 "bison.y" /* yacc.c:1652  */
    {printf("BSAL lista_d_var por decl_sal\n");}
#line 1976 "y.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 265 "bison.y" /* yacc.c:1652  */
    {(yyval.e).type = (yyvsp[0].e).type; (yyval.e).place=(yyvsp[0].e).place;printf("exp_a por expresion\n");}
#line 1982 "y.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 266 "bison.y" /* yacc.c:1652  */
    {printf("funcion_ll por expresion\n");}
#line 1988 "y.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 268 "bison.y" /* yacc.c:1652  */
    {
	backpatchP(&listainstrucciones,(yyvsp[0].b).f,listainstrucciones.nextQuad);
	gen(&listainstrucciones,"asignacionfalse",-1,-1,obtenerObjeto(&listavariables,(yyvsp[-2].valor_texto))->id);
	gen(&listainstrucciones,"goto",-1,-1,listainstrucciones.nextQuad+2); //EL goto siempre va a un registro de la tabla de cuadruplas
	backpatchP(&listainstrucciones,(yyvsp[0].b).t,listainstrucciones.nextQuad);
	gen(&listainstrucciones,"asignaciontrue",-1,-1,obtenerObjeto(&listavariables,(yyvsp[-2].valor_texto))->id);
	printf("operando BDOS_PUNTOS_IGUAL expresion por asignacion\n");}
#line 2000 "y.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 276 "bison.y" /* yacc.c:1652  */
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
#line 2024 "y.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 295 "bison.y" /* yacc.c:1652  */
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
#line 2052 "y.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 318 "bison.y" /* yacc.c:1652  */
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
#line 2080 "y.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 341 "bison.y" /* yacc.c:1652  */
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
#line 2108 "y.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 364 "bison.y" /* yacc.c:1652  */
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
#line 2136 "y.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 387 "bison.y" /* yacc.c:1652  */
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
#line 2167 "y.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 413 "bison.y" /* yacc.c:1652  */
    {(yyval.e).type = (yyvsp[-1].e).type; (yyval.e).place = (yyvsp[-1].e).place; printf("BPARENTESIS_APERTURA exp_a BPARENTESIS_CIERRE por exp_a\n");}
#line 2173 "y.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 414 "bison.y" /* yacc.c:1652  */
    {(yyval.e).type = obtenerObjeto(&listavariables,(yyvsp[0].valor_texto))->tipo; (yyval.e).place = obtenerObjeto(&listavariables,(yyvsp[0].valor_texto))->id; printf("operando por exp_a\n");}
#line 2179 "y.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 415 "bison.y" /* yacc.c:1652  */
    {printf("BLITERAL_REAL por exp_a\n");}
#line 2185 "y.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 416 "bison.y" /* yacc.c:1652  */
    {printf("BLITERAL_ENTERO por exp_a\n");}
#line 2191 "y.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 417 "bison.y" /* yacc.c:1652  */
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
#line 2208 "y.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 429 "bison.y" /* yacc.c:1652  */
    {(yyval.e).type = (yyvsp[0].e).type; (yyval.e).place = (yyvsp[0].e).place; printf("BMAS exp_a por exp_a\n");}
#line 2214 "y.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 430 "bison.y" /* yacc.c:1652  */
    {
		backpatchP(&listainstrucciones,(yyvsp[-3].b).t,(yyvsp[-1].quad));
		(yyval.b).f = mergeP((yyvsp[-3].b).f,(yyvsp[0].b).f);
		(yyval.b).t = (yyvsp[0].b).t;
	
		printf("exp_b BY exp_b por exp_b\n");}
#line 2225 "y.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 436 "bison.y" /* yacc.c:1652  */
    {
		backpatchP(&listainstrucciones,(yyvsp[-3].b).f,(yyvsp[-1].quad));
		(yyval.b).t = mergeP((yyvsp[-3].b).t,(yyvsp[0].b).t);
		(yyval.b).f = (yyvsp[0].b).f;
		printf("exp_b BO exp_b por exp_b\n");
	}
#line 2236 "y.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 442 "bison.y" /* yacc.c:1652  */
    {
		(yyval.b).t = (yyvsp[0].b).f;
		(yyval.b).f = (yyvsp[0].b).t;		
		printf("BNO exp_b por exp_b\n");}
#line 2245 "y.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 446 "bison.y" /* yacc.c:1652  */
    {
		int t1 = insertar_variable(&listavariables,NULL,"booleano","temporal");
		gen(&listainstrucciones,"asignaciontrue",-1,-1,t1);
		(yyval.b).t = makelistP(listainstrucciones.nextQuad);
		gen(&listainstrucciones,"ifigual",t1,obtenerObjeto(&listavariables,(yyvsp[0].valor_texto))->id,-1);
		(yyval.b).f = makelistP(listainstrucciones.nextQuad);
		gen(&listainstrucciones,"goto",-1,-1,-1);		
		printf("operando_booleano por exp_b\n");}
#line 2258 "y.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 454 "bison.y" /* yacc.c:1652  */
    {
		(yyval.b).t = makelistP(listainstrucciones.nextQuad);
		(yyval.b).f = makelistVaciaP();
		gen(&listainstrucciones,"goto",-1,-1,-1);			
		
		printf("BVERDADERO por exp_b\n");}
#line 2269 "y.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 460 "bison.y" /* yacc.c:1652  */
    {
		(yyval.b).t = makelistVaciaP();
		(yyval.b).f = makelistP(listainstrucciones.nextQuad);
		gen(&listainstrucciones,"goto",-1,-1,-1);		
		printf("BFALSO por exp_b\n");}
#line 2279 "y.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 465 "bison.y" /* yacc.c:1652  */
    {
		(yyval.b).t = (yyvsp[-1].b).t;
		(yyval.b).f = (yyvsp[-1].b).f;
		printf("BPARENTESIS_APERTURA exp_b BPARENTESIS_CIERRE por exp_b\n");}
#line 2288 "y.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 469 "bison.y" /* yacc.c:1652  */
    {
		(yyval.b).t = makelistP(listainstrucciones.nextQuad);
		(yyval.b).f = makelistP(listainstrucciones.nextQuad + 1);
		gen(&listainstrucciones,"ifigual",(yyvsp[-2].e).place,(yyvsp[0].e).place,-1);
		gen(&listainstrucciones,"goto",-1,-1,-1);
		printf("exp_a BOPREL exp_a por exp_b\n");}
#line 2299 "y.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 475 "bison.y" /* yacc.c:1652  */
    {
		(yyval.b).t = makelistP(listainstrucciones.nextQuad);
		(yyval.b).f = makelistP(listainstrucciones.nextQuad + 1);
		gen(&listainstrucciones,"ifmayor",(yyvsp[-2].e).place,(yyvsp[0].e).place,-1);
		gen(&listainstrucciones,"goto",-1,-1,-1);
		printf("exp_a BOPREL exp_a por exp_b\n");}
#line 2310 "y.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 481 "bison.y" /* yacc.c:1652  */
    {
		(yyval.b).t = makelistP(listainstrucciones.nextQuad);
		(yyval.b).f = makelistP(listainstrucciones.nextQuad + 1);
		gen(&listainstrucciones,"ifmenor",(yyvsp[-2].e).place,(yyvsp[0].e).place,-1);
		gen(&listainstrucciones,"goto",-1,-1,-1);
		printf("exp_a BOPREL exp_a por exp_b\n");}
#line 2321 "y.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 487 "bison.y" /* yacc.c:1652  */
    {
		(yyval.b).t = makelistP(listainstrucciones.nextQuad);
		(yyval.b).f = makelistP(listainstrucciones.nextQuad + 1);
		gen(&listainstrucciones,"ifdiferente",(yyvsp[-2].e).place,(yyvsp[0].e).place,-1);
		gen(&listainstrucciones,"goto",-1,-1,-1);
		printf("exp_a BOPREL exp_a por exp_b\n");}
#line 2332 "y.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 493 "bison.y" /* yacc.c:1652  */
    {
		(yyval.b).t = makelistP(listainstrucciones.nextQuad);
		(yyval.b).f = makelistP(listainstrucciones.nextQuad + 1);
		gen(&listainstrucciones,"ifmayorigual",(yyvsp[-2].e).place,(yyvsp[0].e).place,-1);
		gen(&listainstrucciones,"goto",-1,-1,-1);
		printf("exp_a BOPREL exp_a por exp_b\n");}
#line 2343 "y.tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 499 "bison.y" /* yacc.c:1652  */
    {
		(yyval.b).t = makelistP(listainstrucciones.nextQuad);
		(yyval.b).f = makelistP(listainstrucciones.nextQuad + 1);
		gen(&listainstrucciones,"ifmenorigual",(yyvsp[-2].e).place,(yyvsp[0].e).place,-1);
		gen(&listainstrucciones,"goto",-1,-1,-1);
		printf("exp_a BOPREL exp_a por exp_b\n");}
#line 2354 "y.tab.c" /* yacc.c:1652  */
    break;

  case 90:
#line 505 "bison.y" /* yacc.c:1652  */
    {(yyval.valor_texto) = (yyvsp[0].valor_texto); printf("BIDENTIFICADOR por operando\n");}
#line 2360 "y.tab.c" /* yacc.c:1652  */
    break;

  case 91:
#line 506 "bison.y" /* yacc.c:1652  */
    {printf("operando BPUNTO operando por operando\n");}
#line 2366 "y.tab.c" /* yacc.c:1652  */
    break;

  case 92:
#line 507 "bison.y" /* yacc.c:1652  */
    {printf("operando BCORCHETE_APERTURA expresion BCORCHETE_CIERRE por operando\n");}
#line 2372 "y.tab.c" /* yacc.c:1652  */
    break;

  case 93:
#line 508 "bison.y" /* yacc.c:1652  */
    {printf("operando BREF por operando\n");}
#line 2378 "y.tab.c" /* yacc.c:1652  */
    break;

  case 94:
#line 509 "bison.y" /* yacc.c:1652  */
    {(yyval.valor_texto) = (yyvsp[0].valor_texto); printf("BIDENTIFICADOR por operando_booleano\n");}
#line 2384 "y.tab.c" /* yacc.c:1652  */
    break;

  case 95:
#line 510 "bison.y" /* yacc.c:1652  */
    {printf("instruccion BPUNTO_Y_COMA instrucciones por instrucciones\n");}
#line 2390 "y.tab.c" /* yacc.c:1652  */
    break;

  case 96:
#line 511 "bison.y" /* yacc.c:1652  */
    {printf("instruccion por instrucciones\n");}
#line 2396 "y.tab.c" /* yacc.c:1652  */
    break;

  case 97:
#line 512 "bison.y" /* yacc.c:1652  */
    {printf("BCONTINUAR por instruccion\n");}
#line 2402 "y.tab.c" /* yacc.c:1652  */
    break;

  case 98:
#line 513 "bison.y" /* yacc.c:1652  */
    {printf("asignacion por instruccion\n");}
#line 2408 "y.tab.c" /* yacc.c:1652  */
    break;

  case 99:
#line 514 "bison.y" /* yacc.c:1652  */
    {printf("asignacion booleana por instruccion\n");}
#line 2414 "y.tab.c" /* yacc.c:1652  */
    break;

  case 100:
#line 515 "bison.y" /* yacc.c:1652  */
    {printf("alternativa por instruccion\n");}
#line 2420 "y.tab.c" /* yacc.c:1652  */
    break;

  case 101:
#line 516 "bison.y" /* yacc.c:1652  */
    {printf("iteracion por instruccion\n");}
#line 2426 "y.tab.c" /* yacc.c:1652  */
    break;

  case 102:
#line 518 "bison.y" /* yacc.c:1652  */
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
#line 2442 "y.tab.c" /* yacc.c:1652  */
    break;

  case 103:
#line 529 "bison.y" /* yacc.c:1652  */
    {printf("expresion por asignacion\n");}
#line 2448 "y.tab.c" /* yacc.c:1652  */
    break;

  case 104:
#line 530 "bison.y" /* yacc.c:1652  */
    {printf("BSI expresion BENTONCES instrucciones lista_opciones BFSI por alternativa\n");}
#line 2454 "y.tab.c" /* yacc.c:1652  */
    break;

  case 105:
#line 531 "bison.y" /* yacc.c:1652  */
    {printf("BSINO expresion BENTONCES instrucciones lista_opciones por lista_opciones\n");}
#line 2460 "y.tab.c" /* yacc.c:1652  */
    break;

  case 106:
#line 532 "bison.y" /* yacc.c:1652  */
    {printf("empty por lista_opciones\n");}
#line 2466 "y.tab.c" /* yacc.c:1652  */
    break;

  case 107:
#line 533 "bison.y" /* yacc.c:1652  */
    {printf("it_cota_fija por iteracion\n");}
#line 2472 "y.tab.c" /* yacc.c:1652  */
    break;

  case 108:
#line 534 "bison.y" /* yacc.c:1652  */
    {printf("it_cota_exp por iteracion\n");}
#line 2478 "y.tab.c" /* yacc.c:1652  */
    break;

  case 109:
#line 535 "bison.y" /* yacc.c:1652  */
    {printf("BMIENTRAS expresion BHACER instrucciones BFMIENTRAS por it_cota_exp\n");}
#line 2484 "y.tab.c" /* yacc.c:1652  */
    break;

  case 110:
#line 536 "bison.y" /* yacc.c:1652  */
    {printf("BPARA BIDENTIFICADOR BDOS_PUNTOS_IGUAL expresion BHASTA expresion BHACER instrucciones BFPARA por it_cota_fija\n");}
#line 2490 "y.tab.c" /* yacc.c:1652  */
    break;

  case 111:
#line 537 "bison.y" /* yacc.c:1652  */
    {printf("BACCION a_cabecera bloque BFACCION por accion_d\n");}
#line 2496 "y.tab.c" /* yacc.c:1652  */
    break;

  case 112:
#line 538 "bison.y" /* yacc.c:1652  */
    {printf("BFUNCION f_cabecera bloque BDEV expresion BFFUNCION por funcion_d\n");}
#line 2502 "y.tab.c" /* yacc.c:1652  */
    break;

  case 113:
#line 539 "bison.y" /* yacc.c:1652  */
    {printf("BIDENTIFICADOR BPARENTESIS_APERTURA d_par_form BPARENTESIS_CIERRE BPUNTO_Y_COMA por a_cabecera\n");}
#line 2508 "y.tab.c" /* yacc.c:1652  */
    break;

  case 114:
#line 540 "bison.y" /* yacc.c:1652  */
    {printf("BIDENTIFICADOR BPARENTESIS_APERTURA lista_d_var BPARENTESIS_CIERRE BDEF d_tipo BPUNTO_Y_COMA por f_cabecera\n");}
#line 2514 "y.tab.c" /* yacc.c:1652  */
    break;

  case 115:
#line 541 "bison.y" /* yacc.c:1652  */
    {printf("d_p_form BPUNTO_Y_COMA d_par_form por d_par_form\n");}
#line 2520 "y.tab.c" /* yacc.c:1652  */
    break;

  case 116:
#line 542 "bison.y" /* yacc.c:1652  */
    {printf("empty por d_par_form\n");}
#line 2526 "y.tab.c" /* yacc.c:1652  */
    break;

  case 117:
#line 544 "bison.y" /* yacc.c:1652  */
    {printf("BEND lista_id BDOS_PUNTOS d_tipo por d_p_form\n");}
#line 2532 "y.tab.c" /* yacc.c:1652  */
    break;

  case 118:
#line 545 "bison.y" /* yacc.c:1652  */
    {printf("BSAL lista_id BDOS_PUNTOS d_tipo por d_p_form\n");}
#line 2538 "y.tab.c" /* yacc.c:1652  */
    break;

  case 119:
#line 546 "bison.y" /* yacc.c:1652  */
    {printf("BES lista_id BDOS_PUNTOS d_tipo por d_p_form\n");}
#line 2544 "y.tab.c" /* yacc.c:1652  */
    break;

  case 120:
#line 549 "bison.y" /* yacc.c:1652  */
    {printf("BIDENTIFICADOR BPARENTESIS_APERTURA l_ll BPARENTESIS_CIERRE por funcion_ll\n");}
#line 2550 "y.tab.c" /* yacc.c:1652  */
    break;

  case 121:
#line 550 "bison.y" /* yacc.c:1652  */
    {printf("expresion BCOMA l_ll por l_ll\n");}
#line 2556 "y.tab.c" /* yacc.c:1652  */
    break;

  case 122:
#line 551 "bison.y" /* yacc.c:1652  */
    {printf("expresion por l_ll\n");}
#line 2562 "y.tab.c" /* yacc.c:1652  */
    break;

  case 123:
#line 553 "bison.y" /* yacc.c:1652  */
    {(yyval.quad) = listainstrucciones.nextQuad; printf("M por empty");}
#line 2568 "y.tab.c" /* yacc.c:1652  */
    break;


#line 2572 "y.tab.c" /* yacc.c:1652  */
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
#line 554 "bison.y" /* yacc.c:1918  */


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
