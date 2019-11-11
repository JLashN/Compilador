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
void yyerror(const char* s);
int yylex();
static FILE* yyin;

#line 74 "y.tab.c" /* yacc.c:339  */

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
    BES = 320,
    BIDENTIFICADORB = 321,
    UMINUS = 322,
    UBNO = 323
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
#define BLITERAL_NUMERICO 296
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
#define UMINUS 322
#define UBNO 323

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 9 "bison.y" /* yacc.c:355  */

	long valor_entero;
	char* valor_texto;
	double valor_doble;

#line 256 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 273 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   266

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  221

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

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
      65,    66,    67,    68
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   138,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   227,
     228,   229,   232,   233,   234
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
  "BPARENTESIS_CIERRE", "BLITERAL_NUMERICO", "BY", "BO", "BNO",
  "BVERDADERO", "BFALSO", "BOPREL", "BCONTINUAR", "BDOS_PUNTOS_IGUAL",
  "BSI", "BENTONCES", "BMIENTRAS", "BFSI", "BSINO", "BHACER", "BFMIENTRAS",
  "BPARA", "BHASTA", "BFPARA", "BACCION", "BFUNCION", "BDEV", "BFFUNCION",
  "BFACCION", "BES", "BIDENTIFICADORB", "UMINUS", "UBNO", "$accept",
  "desc_algoritmo", "cabecera_alg", "bloque_alg", "decl_globales",
  "decl_a_f", "bloque", "declaraciones", "declaracion_tipo",
  "declaracion_const", "declaracion_var", "lista_d_tipo", "d_tipo",
  "expresion_t", "lista_campos", "lista_d_cte", "lista_d_var", "lista_id",
  "decl_ent_sal", "decl_ent", "decl_sal", "expresion", "exp_a", "exp_b",
  "operando", "operando_booleano", "instrucciones", "instruccion",
  "asignacion", "alternativa", "lista_opciones", "iteracion",
  "it_cota_exp", "it_cota_fija", "accion_d", "funcion_d", "a_cabecera",
  "f_cabecera", "d_par_form", "d_p_form", "funcion_ll", "l_ll", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323
};
# endif

#define YYPACT_NINF -118

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-118)))

#define YYTABLE_NINF -24

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      31,    32,    48,    34,  -118,     7,    53,    62,   121,     9,
       7,     7,    83,    92,    89,   105,   119,   125,   128,   103,
     121,   121,   121,   137,   139,   108,     9,     9,  -118,  -118,
       6,   124,   136,   140,   120,   142,   132,   160,  -118,   131,
      15,   118,  -118,   118,  -118,  -118,  -118,   134,   134,   177,
    -118,  -118,   168,   123,    18,  -118,  -118,   167,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,  -118,   143,   121,   144,
     121,   119,   119,   187,   159,  -118,  -118,  -118,     2,   194,
     203,     6,  -118,  -118,   208,   197,  -118,    39,  -118,   219,
    -118,   119,   220,   222,  -118,   134,  -118,    15,  -118,   152,
      78,   168,  -118,   176,   173,   180,    15,    15,    15,    15,
      15,    15,    15,   118,   118,   226,   134,  -118,  -118,   103,
     -12,   169,   119,   170,  -118,  -118,  -118,  -118,   202,   217,
      67,  -118,    53,    67,    62,  -118,  -118,   230,   206,   198,
     174,  -118,  -118,   103,   103,   134,    55,    55,  -118,  -118,
    -118,  -118,   183,  -118,  -118,   -11,   209,  -118,   119,   119,
     119,   199,   235,  -118,   201,   134,     6,  -118,   216,  -118,
    -118,  -118,   119,   134,  -118,   189,   188,   190,  -118,   218,
     221,   223,   240,   -12,   228,   186,   241,    67,  -118,  -118,
     134,   200,  -118,   134,     6,     6,     6,  -118,  -118,     6,
    -118,   194,   227,   205,  -118,   204,  -118,  -118,  -118,   249,
    -118,   237,   103,   103,  -118,     6,   189,   207,  -118,  -118,
    -118
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    20,    32,    15,    10,
       7,     7,     0,     0,     0,     0,    34,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,    36,     0,     0,     0,     4,    63,
       0,     0,    53,     0,    59,    60,    70,     0,     0,     0,
      67,    75,    42,    43,    52,    58,    11,    69,    71,    72,
      73,    80,    79,    44,    12,    13,    14,     0,    15,     0,
      15,    34,    34,     0,    37,    39,     8,     9,    63,    30,
       0,     0,    26,    28,     0,     0,    27,    52,    16,     0,
      17,     0,     0,     0,     2,     0,    63,     0,    54,     0,
       0,     0,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66,    74,     0,
      88,     0,    34,     0,    40,    41,     3,    38,     0,     0,
       0,    25,    20,     0,    32,    35,    18,     0,    94,     0,
       0,    51,    61,     0,     0,     0,    45,    46,    47,    48,
      49,    50,    62,    55,    56,    64,     0,    68,     0,     0,
       0,     0,     0,    83,     0,     0,     0,    21,     0,    19,
      24,    31,    34,     0,    92,    78,     0,     0,    65,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    33,    93,
       0,     0,    81,     0,     0,     0,     0,    85,    87,     0,
      84,    30,     0,     0,    76,     0,    89,    90,    91,     0,
      29,     0,     0,     0,    86,     0,    78,     0,    22,    77,
      82
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -118,  -118,  -118,  -118,    99,   150,   -47,    40,    33,    54,
    -118,   126,   -80,   -98,    59,   127,   -67,   -85,  -118,  -118,
     191,   -19,   -29,   -26,   -16,  -118,  -117,  -118,  -118,  -118,
      46,  -118,  -118,  -118,  -118,  -118,  -118,  -118,    80,  -118,
    -118,    91
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    13,    84,    85,   129,    15,    35,    36,    73,    74,
      75,    86,    52,    53,    87,    55,    56,    57,    58,    59,
     191,    60,    61,    62,    26,    27,    68,    70,   161,   162,
      63,   139
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,   131,   157,    54,   124,   125,   135,   -23,   116,   158,
      78,    98,    99,   117,   101,   100,     6,   102,     7,    96,
     159,   121,    79,   123,    80,   115,   175,   176,   103,   104,
      81,    82,   168,    83,     1,   170,     3,   116,    10,     5,
      40,    95,   117,    10,    10,    41,   115,    42,     4,    40,
      43,    44,    45,   160,    97,   164,    42,    12,   116,    11,
      64,    65,    66,   117,    11,    11,    14,   118,   140,    23,
      24,    39,    50,   179,   180,   181,   138,   146,   147,   148,
     149,   150,   151,   152,   101,   101,   186,   153,   154,   202,
     108,   109,   110,   111,    83,   216,   217,   156,    30,   155,
      51,    40,    31,    54,    32,   188,    41,    39,    42,    28,
      29,    43,    44,    45,   206,   207,   208,    33,   142,   209,
     113,   114,    96,    34,    51,    51,   177,    54,    54,    88,
       6,    37,     7,    50,    16,   218,    38,    40,    39,    71,
      72,    67,    41,    69,    42,    90,   185,    43,    44,    45,
      91,    46,    40,    47,   138,    48,    92,    41,    89,    42,
      49,    93,    43,    44,    45,   113,   114,    94,    40,    50,
      95,   203,   119,    41,   205,    42,    76,    77,    43,    44,
      45,   105,   120,   122,    50,   106,   107,   108,   109,   110,
     111,    72,   141,    51,    51,   126,    54,    54,   128,   112,
      50,   106,   107,   108,   109,   110,   111,   106,   107,   108,
     109,   110,   111,   132,   141,   112,   106,   107,   108,   109,
     110,   111,   130,   133,   134,   136,   137,   143,   144,   145,
      96,   166,   165,   163,   167,   172,   173,   178,   174,   182,
     183,   184,   187,   190,   192,   197,   201,   194,   193,   200,
     195,   199,   196,   204,   214,   211,   212,   215,   169,   213,
     210,   171,   219,   198,   189,   127,   220
};

static const yytype_uint8 yycheck[] =
{
      19,    81,   119,    19,    71,    72,    91,     5,    19,    21,
       4,    40,    41,    24,    43,    41,     9,    43,    11,     4,
      32,    68,    16,    70,    18,     7,   143,   144,    47,    48,
      24,    25,   130,    27,     3,   133,     4,    19,     5,     5,
      34,    39,    24,    10,    11,    39,     7,    41,     0,    34,
      44,    45,    46,    65,    39,   122,    41,     4,    19,     5,
      20,    21,    22,    24,    10,    11,     4,    49,    97,    60,
      61,     4,    66,   158,   159,   160,    95,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   166,   113,   114,   187,
      35,    36,    37,    38,    27,   212,   213,   116,    15,   115,
     119,    34,    10,   119,    15,   172,    39,     4,    41,    10,
      11,    44,    45,    46,   194,   195,   196,    12,    40,   199,
      42,    43,     4,     4,   143,   144,   145,   143,   144,     5,
       9,     6,    11,    66,    13,   215,     8,    34,     4,    31,
      32,     4,    39,     4,    41,     5,   165,    44,    45,    46,
      30,    48,    34,    50,   173,    52,    14,    39,    22,    41,
      57,    29,    44,    45,    46,    42,    43,     7,    34,    66,
      39,   190,     5,    39,   193,    41,    26,    27,    44,    45,
      46,     4,    39,    39,    66,    33,    34,    35,    36,    37,
      38,    32,    40,   212,   213,     8,   212,   213,     4,    47,
      66,    33,    34,    35,    36,    37,    38,    33,    34,    35,
      36,    37,    38,     5,    40,    47,    33,    34,    35,    36,
      37,    38,    19,    26,     5,     5,     4,    51,    55,    49,
       4,    29,    62,    64,    17,     5,    30,    28,    40,    40,
       5,    40,    26,    54,    56,     5,     5,    29,    58,    63,
      29,    23,    29,    53,     5,    28,    51,    20,   132,    55,
     201,   134,   216,   183,   173,    74,    59
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    70,     4,     0,     5,     9,    11,    71,    73,
      77,    78,     4,    80,     4,    84,    13,    72,    75,    76,
      77,    78,    79,    60,    61,    74,   103,   104,    73,    73,
      15,    10,    15,    12,     4,    85,    86,     6,     8,     4,
      34,    39,    41,    44,    45,    46,    48,    50,    52,    57,
      66,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     100,   101,   102,   109,    76,    76,    76,     4,   105,     4,
     106,    31,    32,    87,    88,    89,    74,    74,     4,    16,
      18,    24,    25,    27,    81,    82,    90,    93,     5,    22,
       5,    30,    14,    29,     7,    39,     4,    39,    91,    91,
      92,    91,    92,    90,    90,     4,    33,    34,    35,    36,
      37,    38,    47,    42,    43,     7,    19,    24,    49,     5,
      39,    75,    39,    75,    85,    85,     8,    89,     4,    83,
      19,    81,     5,    26,     5,    86,     5,     4,    90,   110,
      91,    40,    40,    51,    55,    49,    91,    91,    91,    91,
      91,    91,    91,    92,    92,    93,    90,    95,    21,    32,
      65,   107,   108,    64,    85,    62,    29,    17,    82,    80,
      82,    84,     5,    30,    40,    95,    95,    90,    28,    86,
      86,    86,    40,     5,    40,    90,    81,    26,    85,   110,
      54,    99,    56,    58,    29,    29,    29,     5,   107,    23,
      63,     5,    82,    90,    53,    90,    81,    81,    81,    81,
      83,    28,    51,    55,     5,    20,    95,    95,    81,    99,
      59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    71,    72,    73,    73,    73,    74,    74,
      74,    75,    76,    76,    76,    76,    77,    78,    79,    80,
      80,    81,    81,    81,    81,    81,    81,    82,    82,    83,
      83,    84,    84,    85,    85,    86,    86,    87,    87,    87,
      88,    89,    90,    90,    90,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    92,    92,    92,    92,    92,
      92,    92,    92,    93,    93,    93,    93,    94,    95,    95,
      96,    96,    96,    96,    97,    97,    98,    99,    99,   100,
     100,   101,   102,   103,   104,   105,   106,   107,   107,   108,
     108,   108,   109,   110,   110
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     5,
       0,     5,     0,     5,     0,     3,     1,     1,     2,     1,
       2,     2,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     2,     3,     3,     2,     1,     1,
       1,     3,     3,     1,     3,     4,     2,     1,     3,     1,
       1,     1,     1,     1,     2,     1,     6,     5,     0,     1,
       1,     5,     9,     4,     6,     5,     7,     3,     0,     4,
       4,     4,     4,     3,     1
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
#line 138 "bison.y" /* yacc.c:1646  */
    {printf("BALGORITMO BIDENTIFICADOR BPUNTO_Y_COMA cabecera_alg bloque_alg BFALGORITMO BPUNTO por desc_algoritmo\n");}
#line 1523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 139 "bison.y" /* yacc.c:1646  */
    {printf("decl_globales decl_a_f decl_ent_sal BCOMENTARIO por cabecera_alg\n");}
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 140 "bison.y" /* yacc.c:1646  */
    {printf("bloque BCOMENTARIO por bloque_alg\n");}
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 141 "bison.y" /* yacc.c:1646  */
    {printf("declaracion_tipo decl_globales por decl_globales\n");}
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 142 "bison.y" /* yacc.c:1646  */
    {printf("declaracion_const decl_globales por decl_globales\n");}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 143 "bison.y" /* yacc.c:1646  */
    {printf("empty por decl_globales\n");}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 144 "bison.y" /* yacc.c:1646  */
    {printf("accion_d decl_a_f por decl_a_f\n");}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 145 "bison.y" /* yacc.c:1646  */
    {printf("funcion_d decl_a_f por decl_a_f\n");}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 146 "bison.y" /* yacc.c:1646  */
    {printf("empty por decl_a_f\n");}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 147 "bison.y" /* yacc.c:1646  */
    {printf("declaraciones instrucciones por bloque\n");}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 148 "bison.y" /* yacc.c:1646  */
    {printf("declaracion_tipo declaraciones por declaraciones\n");}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 149 "bison.y" /* yacc.c:1646  */
    {printf("declaracion_const declaraciones por declaraciones\n");}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 150 "bison.y" /* yacc.c:1646  */
    {printf("declaracion_var declaraciones por declaraciones\n");}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 151 "bison.y" /* yacc.c:1646  */
    {printf("empty por declaraciones\n");}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 152 "bison.y" /* yacc.c:1646  */
    {printf("BTIPO lista_d_tipo BFTIPO BPUNTO_Y_COMA por declaracion_tipo\n");}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 153 "bison.y" /* yacc.c:1646  */
    {printf("BCONST lista_d_cte BFCONST BPUNTO_Y_COMA por declaracion_const\n");}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 154 "bison.y" /* yacc.c:1646  */
    {printf("BVAR lista_d_var BFVAR BPUNTO_Y_COMA por declaracion_var\n");}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 155 "bison.y" /* yacc.c:1646  */
    {printf("BIDENTIFICADOR BIGUAL d_tipo BPUNTO_Y_COMA lista_d_tipo por lista_d_tipo\n");}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 156 "bison.y" /* yacc.c:1646  */
    {printf("empty por lista_d_tipo\n");}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 157 "bison.y" /* yacc.c:1646  */
    {printf("BTUPLA lista_campos BFTUPLA por d_tipo\n");}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 158 "bison.y" /* yacc.c:1646  */
    {printf("BTABLA BCORCHETE_APERTURA expresion_t BPUNTOSS expresion_t BCORCHETE_CIERRE BDE d_tipo por d_tipo\n");}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 159 "bison.y" /* yacc.c:1646  */
    {printf("BIDENTIFICADOR por d_tipo\n");}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 160 "bison.y" /* yacc.c:1646  */
    {printf("expresion_t BPUNTOSS expresion_t por d_tipo\n");}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 161 "bison.y" /* yacc.c:1646  */
    {printf("BREF d_tipo por d_tipo\n");}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 162 "bison.y" /* yacc.c:1646  */
    {printf("BTIPO_BASE por d_tipo\n");}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 163 "bison.y" /* yacc.c:1646  */
    {printf("expresion por expresion_t\n");}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 164 "bison.y" /* yacc.c:1646  */
    {printf("BLITERAL_CARACTER por expresion_t\n");}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 165 "bison.y" /* yacc.c:1646  */
    {printf("BIDENTIFICADOR BDOS_PUNTOS d_tipo BPUNTO_Y_COMA lista_campos por lista_campos\n");}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 166 "bison.y" /* yacc.c:1646  */
    {printf("empty por lista_campos\n");}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 167 "bison.y" /* yacc.c:1646  */
    {printf("BIDENTIFICADOR BIGUAL BLITERAL BPUNTO_Y_COMA lista_d_cte por lista_d_cte\n");}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 168 "bison.y" /* yacc.c:1646  */
    {printf("empty por lista_d_cte\n");}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 169 "bison.y" /* yacc.c:1646  */
    {printf("lista_id BDOS_PUNTOS BIDENTIFICADOR BPUNTO_Y_COMA lista_d_var por lista_d_var\n");}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 170 "bison.y" /* yacc.c:1646  */
    {printf("empty por lista_d_var\n");}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 171 "bison.y" /* yacc.c:1646  */
    {printf("BIDENTIFICADOR BCOMA lista_id por lista_id\n");}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 172 "bison.y" /* yacc.c:1646  */
    {printf("empty por lista_id\n");}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 173 "bison.y" /* yacc.c:1646  */
    {printf("decl_ent por decl_ent_sal\n");}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 174 "bison.y" /* yacc.c:1646  */
    {printf("decl_ent decl_sal por decl_ent_sal\n");}
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 175 "bison.y" /* yacc.c:1646  */
    {printf("decl_sal por decl_ent_sal\n");}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 176 "bison.y" /* yacc.c:1646  */
    {printf("BENT lista_d_var por decl_ent\n");}
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 177 "bison.y" /* yacc.c:1646  */
    {printf("BSAL lista_d_var por decl_sal\n");}
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 178 "bison.y" /* yacc.c:1646  */
    {printf("exp_a por expresion\n");}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 179 "bison.y" /* yacc.c:1646  */
    {printf("exp_b por expresion\n");}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 180 "bison.y" /* yacc.c:1646  */
    {printf("funcion_ll por expresion\n");}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 181 "bison.y" /* yacc.c:1646  */
    {printf("exp_a BSUMA exp_a por exp_a\n");}
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 182 "bison.y" /* yacc.c:1646  */
    {printf("exp_a BMENOS exp_a por exp_a\n");}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 183 "bison.y" /* yacc.c:1646  */
    {printf("exp_a BPOR exp_a por exp_a\n");}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 184 "bison.y" /* yacc.c:1646  */
    {printf("exp_a BENTRE exp_a por exp_a\n");}
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 185 "bison.y" /* yacc.c:1646  */
    {printf("exp_a BMOD exp_a por exp_a\n");}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 186 "bison.y" /* yacc.c:1646  */
    {printf("exp_a BDIV exp_a por exp_a\n");}
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 187 "bison.y" /* yacc.c:1646  */
    {printf("BPARENTESIS_APERTURA exp_a BPARENTESIS_CIERRE por exp_a\n");}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 188 "bison.y" /* yacc.c:1646  */
    {printf("operando por exp_a\n");}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 189 "bison.y" /* yacc.c:1646  */
    {printf("BLITERAL_NUMERICO por exp_a\n");}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 190 "bison.y" /* yacc.c:1646  */
    {printf("BMENOS exp_a por exp_a\n");}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 191 "bison.y" /* yacc.c:1646  */
    {printf("exp_b BY exp_b por exp_b\n");}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 192 "bison.y" /* yacc.c:1646  */
    {printf("exp_b BO exp_b por exp_b\n");}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 193 "bison.y" /* yacc.c:1646  */
    {printf("BNO exp_b por exp_b\n");}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 194 "bison.y" /* yacc.c:1646  */
    {printf("operando_booleano por exp_b\n");}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 195 "bison.y" /* yacc.c:1646  */
    {printf("BVERDADERO por exp_b\n");}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 196 "bison.y" /* yacc.c:1646  */
    {printf("BFALSO por exp_b\n");}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 197 "bison.y" /* yacc.c:1646  */
    {printf("BPARENTESIS_APERTURA exp_b BPARENTESIS_CIERRE por exp_b\n");}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 198 "bison.y" /* yacc.c:1646  */
    {printf("exp_a BOPREL exp_a por exp_b\n");}
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 199 "bison.y" /* yacc.c:1646  */
    {printf("BIDENTIFICADOR por operando\n");}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 200 "bison.y" /* yacc.c:1646  */
    {printf("operando BPUNTO operando por operando\n");}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 201 "bison.y" /* yacc.c:1646  */
    {printf("operando BCORCHETE_APERTURA expresion BCORCHETE_CIERRE por operando\n");}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 202 "bison.y" /* yacc.c:1646  */
    {printf("operando BREF por operando\n");}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 203 "bison.y" /* yacc.c:1646  */
    {printf("BIDENTIFICADOR por operando_booleano\n");}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 204 "bison.y" /* yacc.c:1646  */
    {printf("instruccion BPUNTO_Y_COMA instrucciones por instrucciones\n");}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 205 "bison.y" /* yacc.c:1646  */
    {printf("instruccion por instrucciones\n");}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 206 "bison.y" /* yacc.c:1646  */
    {printf("BCONTINUAR por instruccion\n");}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 207 "bison.y" /* yacc.c:1646  */
    {printf("asignacion por instruccion\n");}
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 208 "bison.y" /* yacc.c:1646  */
    {printf("alternativa por instruccion\n");}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 209 "bison.y" /* yacc.c:1646  */
    {printf("iteracion por instruccion\n");}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 211 "bison.y" /* yacc.c:1646  */
    {printf("operando BDOS_PUNTOS_IGUAL por asignacion\n");}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 212 "bison.y" /* yacc.c:1646  */
    {printf("expresion por asignacion\n");}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 213 "bison.y" /* yacc.c:1646  */
    {printf("BSI expresion BENTONCES instrucciones lista_opciones BFSI por alternativa\n");}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 214 "bison.y" /* yacc.c:1646  */
    {printf("BSINO expresion BENTONCES instrucciones lista_opciones por lista_opciones\n");}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 215 "bison.y" /* yacc.c:1646  */
    {printf("empty por lista_opciones\n");}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 216 "bison.y" /* yacc.c:1646  */
    {printf("it_cota_fija por iteracion\n");}
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 217 "bison.y" /* yacc.c:1646  */
    {printf("it_cota_exp por iteracion\n");}
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 218 "bison.y" /* yacc.c:1646  */
    {printf("BMIENTRAS expresion BHACER instrucciones BFMIENTRAS por it_cota_exp\n");}
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 219 "bison.y" /* yacc.c:1646  */
    {printf("BPARA BIDENTIFICADOR BDOS_PUNTOS_IGUAL expresion BHASTA expresion BHACER instrucciones BFPARA por it_cota_fija\n");}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 220 "bison.y" /* yacc.c:1646  */
    {printf("BACCION a_cabecera bloque BFACCION por accion_d\n");}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 221 "bison.y" /* yacc.c:1646  */
    {printf("BFUNCION f_cabecera bloque BDEV expresion BFFUNCION por funcion_d\n");}
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 222 "bison.y" /* yacc.c:1646  */
    {printf("BIDENTIFICADOR BPARENTESIS_APERTURA d_par_form BPARENTESIS_CIERRE BPUNTO_Y_COMA por a_cabecera\n");}
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 223 "bison.y" /* yacc.c:1646  */
    {printf("BIDENTIFICADOR BPARENTESIS_APERTURA lista_d_var BPARENTESIS_CIERRE BDEF d_tipo BPUNTO_Y_COMA por f_cabecera\n");}
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 224 "bison.y" /* yacc.c:1646  */
    {printf("d_p_form BPUNTO_Y_COMA d_par_form por d_par_form\n");}
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 225 "bison.y" /* yacc.c:1646  */
    {printf("empty por d_par_form\n");}
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 227 "bison.y" /* yacc.c:1646  */
    {printf("BEND lista_id BDOS_PUNTOS d_tipo por d_p_form\n");}
#line 2045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 228 "bison.y" /* yacc.c:1646  */
    {printf("BSAL lista_id BDOS_PUNTOS d_tipo por d_p_form\n");}
#line 2051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 229 "bison.y" /* yacc.c:1646  */
    {printf("BES lista_id BDOS_PUNTOS d_tipo por d_p_form\n");}
#line 2057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 232 "bison.y" /* yacc.c:1646  */
    {printf("BIDENTIFICADOR BPARENTESIS_APERTURA l_ll BPARENTESIS_CIERRE por funcion_ll\n");}
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 233 "bison.y" /* yacc.c:1646  */
    {printf("expresion BCOMA l_ll por l_ll\n");}
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 234 "bison.y" /* yacc.c:1646  */
    {printf("expresion por l_ll\n");}
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2079 "y.tab.c" /* yacc.c:1646  */
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
#line 236 "bison.y" /* yacc.c:1906  */

 
int main() {
	yyin = stdin;

	do {
		yyparse();
	} while(!feof(yyin));

	return 0;
}

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}