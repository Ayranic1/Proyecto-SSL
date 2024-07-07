
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int yylex();
extern void yyerror(const char *s);
extern FILE *yyin; 
int parse_correcto = 1; //0 = incorrecto, 1 = correcto
FILE *outfile;
extern int Nlinea;



/* Line 189 of yacc.c  */
#line 87 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     espacio = 258,
     GuionBajo = 259,
     oacento = 260,
     Allave = 261,
     Cllave = 262,
     Acorchete = 263,
     Ccorchete = 264,
     coma = 265,
     real = 266,
     entero = 267,
     boolean = 268,
     inprogress = 269,
     todo = 270,
     canceled = 271,
     done = 272,
     onhold = 273,
     date = 274,
     url = 275,
     dospuntos = 276,
     comillas = 277,
     empresas = 278,
     nombreEmpresa = 279,
     fundacion = 280,
     barrainvertida = 281,
     barra = 282,
     guinmedio = 283,
     nulo = 284,
     direccion = 285,
     calle = 286,
     ciudad = 287,
     pais = 288,
     ingresosAnio = 289,
     pyme = 290,
     link = 291,
     deptos = 292,
     nombre = 293,
     activo = 294,
     jefe = 295,
     subdeptos = 296,
     empleados = 297,
     edad = 298,
     cargo = 299,
     PA = 300,
     PM = 301,
     UXD = 302,
     MK = 303,
     DEV = 304,
     devops = 305,
     DBA = 306,
     salario = 307,
     fechacontrato = 308,
     proyectos = 309,
     estado = 310,
     fechaI = 311,
     fechaF = 312,
     version = 313,
     firma_digital = 314,
     string = 315
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 19 "parser.y"
 
    char string[30];
    int entero;
    float real;
    char boolean[6];
    char *reservada;
    char *date;
    char *url;



/* Line 214 of yacc.c  */
#line 195 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 207 "parser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   715

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNRULES -- Number of states.  */
#define YYNSTATES  709

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      61,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,    17,    29,    55,    81,   107,
     133,   159,   185,   203,   221,   222,   225,   278,   330,   383,
     384,   386,   388,   389,   392,   416,   440,   464,   488,   512,
     536,   538,   539,   542,   567,   593,   618,   644,   670,   696,
     697,   702,   704,   705,   708,   733,   759,   784,   810,   835,
     860,   861,   864,   918,   920,   921,   923,   925,   927,   929,
     931,   933,   935,   937,   939,   940,   943,   977,   979,   980,
     984,   986,   988,   990,   992,   994,   996,   997,   999
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    -1,    64,    -1,     6,    22,    23,    22,
      21,     8,    65,     9,    10,     7,    -1,     6,    22,    23,
      22,    21,     8,    65,     9,    10,    29,     7,    -1,     6,
      22,    23,    22,    21,     8,    65,     9,    10,    22,    58,
      22,    21,    22,    11,    22,    10,    22,    59,    22,    21,
      22,    60,    22,     7,    -1,     6,    22,    23,    22,    21,
       8,    65,     9,    10,    22,    59,    22,    21,    22,    60,
      22,    10,    22,    58,    22,    21,    22,    11,    22,     7,
      -1,     6,    22,    58,    22,    21,    22,    11,    22,    10,
      22,    23,    22,    21,     8,    65,     9,    10,    22,    59,
      22,    21,    22,    60,    22,     7,    -1,     6,    22,    58,
      22,    21,    22,    11,    22,    10,    22,    59,    22,    21,
      22,    60,    22,    10,    22,    23,    22,    21,     8,    65,
       9,     7,    -1,     6,    22,    59,    22,    21,    22,    60,
      22,    10,    22,    23,    22,    21,     8,    65,     9,    10,
      22,    58,    22,    21,    22,    11,    22,     7,    -1,     6,
      22,    59,    22,    21,    22,    60,    22,    10,    22,    58,
      22,    21,    22,    11,    22,    10,    22,    23,    22,    21,
       8,    65,     9,     7,    -1,     6,    22,    23,    22,    21,
       8,    65,     9,    10,    22,    58,    22,    21,    22,    11,
      22,     7,    -1,     6,    22,    23,    22,    21,     8,    65,
       9,    10,    22,    59,    22,    21,    22,    60,    22,     7,
      -1,    -1,     1,    61,    -1,     6,    22,    24,    22,    21,
      22,    60,    22,    10,    22,    25,    22,    21,    12,    10,
      22,    30,    22,    21,     6,    67,     7,    10,    22,    34,
      22,    21,    11,    10,    22,    35,    22,    21,    13,    10,
      22,    36,    22,    21,    22,    66,    22,    10,    22,    37,
      22,    21,     8,    68,     9,    10,    65,    -1,     6,    22,
      24,    22,    21,    22,    60,    22,    10,    22,    25,    22,
      21,    12,    10,    22,    30,    22,    21,     6,     7,    10,
      22,    34,    22,    21,    11,    10,    22,    35,    22,    21,
      13,    10,    22,    36,    22,    21,    22,    66,    22,    10,
      22,    37,    22,    21,     8,    68,     9,    10,    65,    -1,
       6,    22,    24,    22,    21,    22,    60,    22,    10,    22,
      25,    22,    21,    12,    10,    22,    30,    22,    21,     6,
      29,     7,    10,    22,    34,    22,    21,    11,    10,    22,
      35,    22,    21,    13,    10,    22,    36,    22,    21,    22,
      66,    22,    10,    22,    37,    22,    21,     8,    68,     9,
      10,    65,    -1,    -1,    29,    -1,    20,    -1,    -1,     1,
      61,    -1,    22,    31,    22,    21,    22,    60,    22,    10,
      22,    32,    22,    21,    22,    60,    22,    10,    22,    33,
      22,    21,    22,    60,    22,    -1,    22,    31,    22,    21,
      22,    60,    22,    10,    22,    33,    22,    21,    22,    60,
      22,    10,    22,    32,    22,    21,    22,    60,    22,    -1,
      22,    32,    22,    21,    22,    60,    22,    10,    22,    31,
      22,    21,    22,    60,    22,    10,    22,    33,    22,    21,
      22,    60,    22,    -1,    22,    32,    22,    21,    22,    60,
      22,    10,    22,    33,    22,    21,    22,    60,    22,    10,
      22,    31,    22,    21,    22,    60,    22,    -1,    22,    33,
      22,    21,    22,    60,    22,    10,    22,    31,    22,    21,
      22,    60,    22,    10,    22,    32,    22,    21,    22,    60,
      22,    -1,    22,    33,    22,    21,    22,    60,    22,    10,
      22,    32,    22,    21,    22,    60,    22,    10,    22,    31,
      22,    21,    22,    60,    22,    -1,    29,    -1,    -1,     1,
      61,    -1,     6,    22,    38,    22,    21,    22,    60,    22,
      10,    22,    40,    22,    21,    69,    22,    41,    22,    21,
       8,    70,     9,     7,    10,    68,    -1,     6,    22,    38,
      22,    21,    22,    60,    22,    10,    22,    41,    22,    21,
       8,    70,     9,    10,    22,    40,    22,    21,    69,     7,
      10,    68,    -1,     6,    22,    40,    22,    21,    69,    22,
      38,    22,    21,    22,    60,    22,    10,    22,    41,    22,
      21,     8,    70,     9,     7,    10,    68,    -1,     6,    22,
      40,    22,    21,    69,    22,    41,    22,    21,     8,    70,
       9,    10,    22,    38,    22,    21,    22,    60,    22,    10,
       7,    10,    68,    -1,     6,    22,    41,    22,    21,     8,
      70,     9,    10,    22,    38,    22,    21,    22,    60,    22,
      10,    22,    40,    22,    21,    69,     7,    10,    68,    -1,
       6,    22,    41,    22,    21,     8,    70,     9,    10,    22,
      40,    22,    21,    69,    22,    38,    22,    21,    22,    60,
      22,    10,     7,    10,    68,    -1,    -1,    22,    60,    22,
      10,    -1,    29,    -1,    -1,     1,    61,    -1,     6,    22,
      38,    22,    21,    22,    60,    22,    10,    22,    40,    22,
      21,    69,    22,    42,    22,    21,     8,    71,     9,     7,
      10,    70,    -1,     6,    22,    38,    22,    21,    22,    60,
      22,    10,    22,    42,    22,    21,     8,    71,     9,    10,
      22,    40,    22,    21,    69,     7,    10,    70,    -1,     6,
      22,    40,    22,    21,    69,    22,    38,    22,    21,    22,
      60,    22,    10,    22,    42,    22,    21,     8,    71,     9,
       7,    10,    70,    -1,     6,    22,    40,    22,    21,    69,
      10,    22,    42,    22,    21,     8,    71,     9,    10,    22,
      38,    22,    21,    22,    60,    22,     7,    10,    70,    -1,
       6,    22,    42,    22,    21,     8,    71,     9,    10,    22,
      38,    22,    21,    22,    60,    22,    10,    22,    40,    22,
      21,    69,    10,    70,    -1,     6,    22,    42,    22,    21,
       8,    71,     9,    10,    22,    40,    22,    21,    69,    22,
      38,    22,    21,    22,    60,    22,     7,    10,    70,    -1,
      -1,     1,    61,    -1,     6,    22,    38,    22,    21,    22,
      60,    22,    10,    22,    43,    22,    21,    72,    10,    22,
      44,    22,    21,    22,    73,    22,    10,    22,    52,    22,
      21,    11,    10,    22,    39,    22,    21,    13,    10,    22,
      53,    22,    21,    22,    19,    22,    10,    22,    54,    22,
      21,     8,    74,     9,     7,    10,    71,    -1,    29,    -1,
      -1,    29,    -1,    12,    -1,    45,    -1,    46,    -1,    47,
      -1,    48,    -1,    49,    -1,    50,    -1,    51,    -1,    -1,
       1,    61,    -1,     6,    22,    38,    22,    21,    22,    60,
      22,    10,    22,    55,    22,    21,    75,    10,    22,    56,
      22,    21,    22,    19,    22,    10,    22,    57,    22,    21,
      22,    77,    22,     7,    10,    74,    -1,    29,    -1,    -1,
      22,    76,    22,    -1,    29,    -1,    14,    -1,    15,    -1,
      18,    -1,    16,    -1,    17,    -1,    -1,    19,    -1,    29,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    41,    41,    42,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    58,    59,    60,    61,    62,    64,
      65,    66,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    81,    82,    83,    84,    85,    86,    87,    88,    90,
      91,    92,    95,    96,    97,    98,    99,   100,   101,   102,
     105,   106,   107,   108,   110,   111,   112,   115,   115,   115,
     115,   115,   115,   115,   118,   119,   120,   121,   123,   124,
     125,   128,   128,   128,   128,   128,   131,   132,   133
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "espacio", "GuionBajo", "oacento",
  "Allave", "Cllave", "Acorchete", "Ccorchete", "coma", "real", "entero",
  "boolean", "inprogress", "todo", "canceled", "done", "onhold", "date",
  "url", "dospuntos", "comillas", "empresas", "nombreEmpresa", "fundacion",
  "barrainvertida", "barra", "guinmedio", "nulo", "direccion", "calle",
  "ciudad", "pais", "ingresosAnio", "pyme", "link", "deptos", "nombre",
  "activo", "jefe", "subdeptos", "empleados", "edad", "cargo", "PA", "PM",
  "UXD", "MK", "DEV", "devops", "DBA", "salario", "fechacontrato",
  "proyectos", "estado", "fechaI", "fechaF", "version", "firma_digital",
  "string", "'\\n'", "$accept", "expr", "Sigma", "LISTA", "URL",
  "LOCACION", "DEPTOS", "JEFE", "SUBDEPTOS", "EMPLEADOS", "EDAD",
  "CARGOEMPLEADO", "PROYECTOS", "EST", "ESTADOP", "FECHAFIN", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,    10
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    65,    65,    65,    65,    65,    66,
      66,    66,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    68,    68,    68,    68,    68,    68,    68,    68,    69,
      69,    69,    70,    70,    70,    70,    70,    70,    70,    70,
      71,    71,    71,    71,    72,    72,    72,    73,    73,    73,
      73,    73,    73,    73,    74,    74,    74,    74,    75,    75,
      75,    76,    76,    76,    76,    76,    77,    77,    77
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,    10,    11,    25,    25,    25,    25,
      25,    25,    17,    17,     0,     2,    52,    51,    52,     0,
       1,     1,     0,     2,    23,    23,    23,    23,    23,    23,
       1,     0,     2,    24,    25,    24,    25,    25,    25,     0,
       4,     1,     0,     2,    24,    25,    24,    25,    24,    24,
       0,     2,    53,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,    33,     1,     0,     3,
       1,     1,     1,     1,     1,     1,     0,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     3,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,     0,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       6,     7,     8,     9,    10,    11,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    20,     0,     0,     0,     0,     0,     0,     0,
      19,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    24,    25,    26,    27,    28,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     0,    18,    16,     0,     0,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43,     0,     0,     0,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,     0,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    36,     0,     0,     0,     0,    54,     0,     0,    37,
      38,     0,     0,     0,     0,    56,    55,     0,     0,     0,
       0,    39,     0,     0,     0,    39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,     0,     0,    46,     0,    48,    49,    45,    47,
       0,     0,    57,    58,    59,    60,    61,    62,    63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
       0,    65,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,     0,     0,     0,     0,    68,     0,    70,
       0,    71,    72,    74,    75,    73,     0,     0,    69,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,    77,    78,     0,     0,     0,     0,    66
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    20,   293,   151,   343,   371,   378,   429,
     587,   629,   660,   680,   686,   704
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -479
static const yytype_int16 yypact[] =
{
      16,    15,    50,  -479,   -18,  -479,    41,    57,    64,    84,
      88,    95,    85,    96,    98,    42,   106,    62,    60,   101,
     115,   103,   104,  -479,   107,   117,   118,   120,   110,     5,
     111,   112,   114,  -479,   -42,   129,   -15,   -13,   116,   119,
     121,  -479,   122,   123,   124,   125,    77,   127,   128,   130,
     131,   132,   133,   134,   135,   136,   142,   137,   147,   138,
     151,   152,    82,    42,   102,    42,   153,   143,   144,   145,
     159,   148,   160,   149,   150,    78,    80,   162,   163,   164,
     166,   155,  -479,   156,  -479,   157,   158,   161,   165,   168,
     167,    81,   126,   139,   169,   141,   170,   173,   172,   174,
     175,   178,   180,   186,   171,   190,   191,   192,   193,   194,
     195,   196,   198,   199,   200,   215,   202,   217,   109,   176,
     218,   177,    42,   219,    42,   204,   209,   210,   211,   225,
     213,   229,   220,   179,   232,   233,   235,   236,   237,   239,
    -479,  -479,  -479,  -479,  -479,  -479,    13,   185,   238,    67,
     240,   242,  -479,   228,   230,   231,   234,   241,   244,   221,
     243,   245,   246,   247,   248,   249,   250,   251,   252,   223,
     224,   254,   201,   203,   205,   255,   256,   257,   258,   259,
     260,   262,   263,   266,   269,   275,   276,   277,   278,   265,
     268,   270,   271,   284,   285,   227,    75,   -22,    79,   274,
     279,   280,   281,   282,   283,   286,   287,   288,   272,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   305,
     299,   300,   301,   303,   304,   306,   308,   309,   317,   273,
     302,   307,   310,   311,   312,   318,   319,   313,   314,   315,
     316,   320,   321,   322,   324,   329,   146,   330,   331,   335,
     336,   337,   338,   327,   328,   332,   333,   334,   339,   341,
     342,   343,   261,   264,   345,   226,   325,   326,   344,   346,
     348,   347,   351,   352,   354,   355,   358,   359,   360,   361,
     363,   364,    -5,   365,   366,   367,   368,   369,   370,   371,
     372,  -479,  -479,   373,   374,   375,   376,   377,   378,   379,
      -5,    -5,   350,   349,   353,   356,   357,   362,   380,   381,
     382,   383,   384,   385,   386,   388,   389,   390,   392,   404,
     387,  -479,  -479,  -479,  -479,  -479,  -479,   393,   396,   397,
     391,   394,   399,   401,   403,   413,   405,   406,    46,   421,
     422,   395,   410,   424,    46,    46,  -479,    43,   425,   427,
     428,   412,   416,   417,    42,   431,   432,   423,   426,   429,
    -479,    42,    42,   430,    31,   435,  -479,  -479,   398,   400,
    -479,   433,    48,   437,   439,    54,   402,   440,   436,   438,
     441,   442,   443,  -479,    40,   444,   445,  -479,   447,   448,
     449,   450,   451,   452,    72,   453,   458,   455,   456,   457,
      24,   459,   460,   419,    48,   461,    31,   462,   463,   464,
     466,   467,   468,   471,   434,     3,    17,   470,   472,    31,
     476,   479,   482,   473,   474,   222,   446,   475,  -479,   489,
     477,    31,   478,    48,   480,   481,   491,   407,   483,  -479,
     408,   494,   454,   484,   469,   499,   485,   415,   487,   490,
     492,   493,   495,   496,   486,   497,   501,   498,   500,    61,
     502,   503,   506,    66,   511,   507,   509,   510,   512,   513,
     514,   515,   508,   488,   516,   517,   518,   519,   521,   520,
     504,   523,   524,   522,   526,    17,   527,   505,   529,   530,
     528,   531,    48,   532,    48,   525,    31,   537,   543,   545,
     534,   535,    31,   536,   533,   550,   539,   552,   540,   541,
      17,   554,   544,   557,   538,   547,   549,   551,   564,    31,
     565,   566,   542,   568,   553,   546,   556,   558,   548,    31,
     569,   571,   567,   572,   576,   570,   577,   559,   573,   414,
     579,   574,   583,   584,    46,   589,    46,   590,   580,   581,
     582,   585,   586,   587,   591,   592,   595,  -479,    46,  -479,
      46,   599,   575,   593,   602,   596,   578,   594,    46,    46,
    -479,  -479,    17,   597,   598,    17,     9,   600,   561,  -479,
    -479,   604,   603,   563,   616,  -479,  -479,   601,   605,   606,
     620,    31,   607,   623,   609,    31,   625,   624,   626,   628,
     627,   608,   629,   630,    48,   631,   632,    48,   614,    48,
      48,  -479,    48,    48,  -479,   617,  -479,  -479,  -479,  -479,
     621,    21,  -479,  -479,  -479,  -479,  -479,  -479,  -479,   622,
     635,   633,   340,   634,   636,   637,   639,   638,   267,   640,
     642,   641,   643,   644,   611,   645,   647,   648,   646,   649,
     651,   650,   615,   652,   654,   665,    27,   618,   655,  -479,
     667,  -479,   612,   671,   658,   672,   660,    17,   661,  -479,
     653,   662,   675,   664,   656,   666,   668,    36,    59,  -479,
     677,  -479,  -479,  -479,  -479,  -479,   669,   670,  -479,   659,
     673,   676,   674,   679,   678,   680,   681,   657,   682,   684,
     685,    10,  -479,  -479,   686,   687,   683,    27,  -479
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -479,  -479,  -479,   -63,  -186,  -479,  -341,  -400,  -403,  -478,
    -479,  -479,  -356,  -479,  -479,  -479
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -65
static const yytype_int16 yytable[] =
{
      70,   413,    72,   349,   350,     6,   415,   498,    42,   204,
      44,   205,    33,   424,   147,   291,    39,    40,   426,   432,
     148,   585,     1,   427,   292,   425,   -50,    34,   657,   702,
     445,   443,   523,   658,    35,   149,   -64,     4,   586,   703,
       7,     8,   150,    18,    43,    45,   428,   341,    19,   376,
       5,   -14,   342,   369,   377,   -31,   659,   -42,   678,   129,
     370,   131,   408,     9,   409,   679,   622,   623,   624,   625,
     626,   627,   628,   681,   682,   683,   684,   685,   390,    10,
     391,   351,   392,   352,   353,    82,    11,    84,    83,   505,
      85,   507,   381,    15,   581,   382,   509,   584,   154,   155,
     156,   470,   515,   471,   475,    12,   476,   202,   203,    13,
     206,   207,   401,   402,   309,   310,    14,    21,    16,   532,
      17,    23,    22,    24,    25,    26,    27,    29,    30,   542,
      31,    28,    32,    36,    37,    38,    41,    53,    46,   125,
      98,    47,    69,    48,    49,    50,    51,    52,    54,    55,
      63,    56,    57,    58,    59,    65,    60,    61,    62,    64,
      66,    67,    71,    68,    73,    74,    75,    76,    77,    79,
      78,    80,    86,    87,    88,    81,    89,    90,    91,    92,
      93,   111,   255,    94,    99,   104,   140,    95,    97,   669,
      96,   598,   101,   103,   105,   602,   106,   107,   100,   102,
     108,   611,   109,   557,   614,   559,   616,   617,   110,   618,
     619,   112,   113,   114,   115,   116,   117,   570,   118,   571,
     119,   120,   121,   122,   123,   124,   132,   579,   580,   127,
     130,   133,   134,   135,   136,   137,   126,   128,   138,   141,
     142,   139,   143,   144,   145,   146,   152,   157,   153,   158,
     159,   163,   160,   161,   164,   165,   162,   175,   176,   274,
     438,   178,   201,   179,   166,   180,   167,   168,   183,   169,
     170,   171,   172,   173,   174,   177,   189,   181,   182,   190,
     184,   185,   186,   187,   188,   191,   192,   195,   193,   194,
     196,   360,   197,   198,   199,   200,   208,   271,   366,   367,
     272,   209,   210,   211,   212,   213,   639,   217,   214,   215,
     216,   219,   220,   221,   222,   223,   224,   225,   228,   226,
     227,   229,   230,   231,   218,   232,   233,   237,   234,   235,
     236,   244,   245,   238,   253,   246,   247,   248,   249,   254,
     256,   257,   250,   251,   252,   258,   259,   260,   261,   262,
     263,   708,     0,     0,   264,   265,   266,   275,     0,   276,
     311,   267,   239,   268,   269,   270,   273,   240,     0,   280,
     241,   242,   243,   281,   282,   277,   283,   284,   278,   279,
     285,   286,   287,   288,   289,   290,   294,   295,   296,   297,
     298,   299,   633,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   327,   318,   319,   320,   321,   322,   323,   312,
     324,   325,   326,   313,   328,   330,   314,   315,   331,   332,
     335,   338,   316,   336,   329,   337,   339,   340,   333,   344,
     345,   334,   347,   348,   357,   354,   355,   356,   358,   359,
     317,   361,   362,   372,   363,   385,   451,   364,   386,   449,
     365,   387,   368,   458,   393,   375,   346,   552,   373,   379,
     374,   380,   384,   383,   388,   389,   404,   394,   395,   396,
     416,   397,   398,   399,   400,   403,   405,   406,   407,   412,
     422,   410,   411,   414,   433,   417,   418,   419,   420,   434,
     421,   430,   435,   431,   423,   436,   437,   440,   441,   442,
     444,   448,   446,   447,   452,   450,   454,   439,   456,   459,
     455,   467,   460,   461,   453,   462,   485,   463,   464,   466,
     468,   477,   469,   472,   465,   473,   457,   474,   492,   478,
     479,   494,   480,   481,   482,     0,   483,   484,   487,   488,
     489,   490,   491,   496,   493,   510,   495,   497,   486,   499,
     501,   502,   511,   504,   506,   512,   513,   514,   516,   518,
     519,   520,   521,   522,   524,   500,   525,   526,   503,   528,
     529,   531,   533,   530,   545,   537,   534,   536,   539,   543,
     540,   544,   546,   547,   535,   508,   541,   549,   538,   553,
     555,   556,   548,   517,     0,   551,   554,   550,   527,   558,
     560,   561,   568,   562,   563,   569,   564,   572,   565,   566,
     575,   594,   567,   590,   574,   573,   578,   576,   577,   582,
     583,   589,   588,   592,   591,   593,   595,   597,   596,   599,
     600,   601,   603,   605,   604,   606,   615,   607,   620,   609,
     610,   612,   613,   621,   630,   631,     0,     0,   636,   637,
     664,     0,   608,   643,   642,   632,   634,   635,     0,     0,
     638,   651,   640,   641,   645,   649,   644,   646,   647,   653,
     648,   650,   652,   656,   654,   655,   663,   662,   665,   661,
     666,   668,   667,   670,   672,   673,   674,   687,   676,   677,
     696,   688,   689,   707,   706,   691,   693,   692,   694,     0,
     695,     0,     0,   697,   699,   700,     0,   701,   705,     0,
       0,   675,     0,   671,   698,   690
};

static const yytype_int16 yycheck[] =
{
      63,   404,    65,   344,   345,    23,   406,   485,    23,    31,
      23,    33,     7,    10,     1,    20,    58,    59,     1,   419,
       7,    12,     6,     6,    29,    22,     9,    22,     1,    19,
     433,   431,   510,     6,    29,    22,     9,    22,    29,    29,
      58,    59,    29,     1,    59,    58,    29,     1,     6,     1,
       0,     9,     6,    22,     6,     9,    29,     9,    22,   122,
      29,   124,    38,    22,    40,    29,    45,    46,    47,    48,
      49,    50,    51,    14,    15,    16,    17,    18,    38,    22,
      40,    38,    42,    40,    41,     7,    22,     7,    10,   492,
      10,   494,    38,     8,   572,    41,   496,   575,    31,    32,
      33,    40,   502,    42,    38,    21,    40,    32,    33,    21,
      31,    32,    40,    41,   300,   301,    21,    11,    22,   519,
      22,    61,    60,    22,     9,    22,    22,    10,    10,   529,
      10,    24,    22,    22,    22,    21,     7,    60,    22,    30,
      59,    22,    60,    22,    22,    22,    22,    22,    21,    21,
       8,    21,    21,    21,    21,     8,    22,    22,    22,    22,
      22,    10,    60,    11,    11,    22,    22,    22,     9,     9,
      22,    22,    10,    10,    10,    25,    10,    22,    22,    22,
      22,    10,    36,    22,    58,    12,     7,    22,    21,   667,
      22,   591,    23,    23,    22,   595,    22,    22,    59,    58,
      22,   604,    22,   544,   607,   546,   609,   610,    22,   612,
     613,    21,    21,    21,    21,    21,    21,   558,    22,   560,
      22,    22,    22,     8,    22,     8,    22,   568,   569,    11,
      11,    22,    22,    22,     9,    22,    60,    60,     9,     7,
       7,    21,     7,     7,     7,     6,    61,     7,    10,     7,
      22,    10,    22,    22,    10,    34,    22,    34,    34,    33,
      38,    60,    35,    60,    21,    60,    21,    21,    11,    22,
      22,    22,    22,    22,    22,    21,    10,    22,    22,    10,
      22,    22,    22,    21,    21,    10,    10,    22,    11,    11,
      22,   354,    22,    22,    10,    10,    22,    36,   361,   362,
      36,    22,    22,    22,    22,    22,    39,    35,    22,    22,
      22,    21,    21,    21,    21,    21,    21,    21,    13,    22,
      22,    22,    22,    22,    35,    22,    22,    10,    22,    21,
      21,    13,    13,    60,    10,    22,    22,    22,    22,    10,
      10,    10,    22,    22,    22,    10,    10,    10,    10,    22,
      22,   707,    -1,    -1,    22,    22,    22,    32,    -1,    33,
      10,    22,    60,    22,    22,    22,    21,    60,    -1,    22,
      60,    60,    60,    22,    22,    31,    22,    22,    32,    31,
      22,    22,    22,    22,    21,    21,    21,    21,    21,    21,
      21,    21,    52,    22,    22,    22,    22,    22,    22,    22,
      22,    22,    10,    22,    22,    22,    22,    22,    22,    60,
      22,    22,    22,    60,    10,    22,    60,    60,    22,    22,
      21,     8,    60,    22,    37,    22,    21,    21,    37,     8,
       8,    37,    22,     9,    22,    10,     9,     9,    22,    22,
      60,    10,    10,     8,    21,     9,    38,    21,    10,    42,
      21,    10,    22,    38,    10,    22,    61,    43,    60,    22,
      60,    22,    22,    61,    22,    22,     8,    22,    21,    21,
       8,    22,    22,    22,    22,    22,    21,    21,    21,    60,
       9,    22,    22,    22,     8,    22,    22,    21,    21,    10,
      22,    21,    10,    21,    60,    22,    22,    22,     9,    22,
      22,    10,    22,    22,    10,    22,    22,    61,     9,    22,
      41,    10,    22,    21,    60,    22,     8,    22,    22,    22,
      22,    10,    22,    21,    38,    22,    41,    21,     8,    22,
      21,     8,    22,    21,    21,    -1,    22,    22,    22,    22,
      22,    22,    21,    21,    40,     8,    22,    21,    60,    22,
      21,    21,     9,    22,    22,    10,    22,    22,    22,     9,
      21,     9,    22,    22,    10,    60,    22,    10,    40,    22,
      21,     7,     7,    22,     7,    22,    10,     9,    22,    10,
      22,    10,    10,     7,    42,    60,    38,    10,    42,    10,
       7,     7,    22,    60,    -1,    22,    22,    38,    60,    10,
      10,    21,    10,    22,    22,    10,    21,     8,    22,    22,
       8,    10,    21,     9,    21,    40,    22,    21,    40,    22,
      22,    60,    22,    60,    21,     9,    21,     7,    22,    22,
       7,    22,     7,     7,    10,     7,    22,    10,    21,    10,
      10,    10,    10,    22,    22,    10,    -1,    -1,    11,    10,
      38,    -1,    44,    10,    13,    22,    22,    21,    -1,    -1,
      22,    10,    22,    21,    53,    19,    22,    22,    21,    54,
      22,    22,    22,     8,    22,    21,     9,    22,     7,    61,
      22,    21,    10,    22,    22,    10,    22,    10,    22,    21,
      10,    22,    22,    10,     7,    22,    22,    21,    19,    -1,
      22,    -1,    -1,    22,    22,    21,    -1,    22,    22,    -1,
      -1,    55,    -1,    60,    57,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    63,    64,    22,     0,    23,    58,    59,    22,
      22,    22,    21,    21,    21,     8,    22,    22,     1,     6,
      65,    11,    60,    61,    22,     9,    22,    22,    24,    10,
      10,    10,    22,     7,    22,    29,    22,    22,    21,    58,
      59,     7,    23,    59,    23,    58,    22,    22,    22,    22,
      22,    22,    22,    60,    21,    21,    21,    21,    21,    21,
      22,    22,    22,     8,    22,     8,    22,    10,    11,    60,
      65,    60,    65,    11,    22,    22,    22,     9,    22,     9,
      22,    25,     7,    10,     7,    10,    10,    10,    10,    10,
      22,    22,    22,    22,    22,    22,    22,    21,    59,    58,
      59,    23,    58,    23,    12,    22,    22,    22,    22,    22,
      22,    10,    21,    21,    21,    21,    21,    21,    22,    22,
      22,    22,     8,    22,     8,    30,    60,    11,    60,    65,
      11,    65,    22,    22,    22,    22,     9,    22,     9,    21,
       7,     7,     7,     7,     7,     7,     6,     1,     7,    22,
      29,    67,    61,    10,    31,    32,    33,     7,     7,    22,
      22,    22,    22,    10,    10,    34,    21,    21,    21,    22,
      22,    22,    22,    22,    22,    34,    34,    21,    60,    60,
      60,    22,    22,    11,    22,    22,    22,    21,    21,    10,
      10,    10,    10,    11,    11,    22,    22,    22,    22,    10,
      10,    35,    32,    33,    31,    33,    31,    32,    22,    22,
      22,    22,    22,    22,    22,    22,    22,    35,    35,    21,
      21,    21,    21,    21,    21,    21,    22,    22,    13,    22,
      22,    22,    22,    22,    22,    21,    21,    10,    60,    60,
      60,    60,    60,    60,    13,    13,    22,    22,    22,    22,
      22,    22,    22,    10,    10,    36,    10,    10,    10,    10,
      10,    10,    22,    22,    22,    22,    22,    22,    22,    22,
      22,    36,    36,    21,    33,    32,    33,    31,    32,    31,
      22,    22,    22,    22,    22,    22,    22,    22,    22,    21,
      21,    20,    29,    66,    21,    21,    21,    21,    21,    21,
      22,    22,    22,    22,    22,    22,    22,    22,    22,    66,
      66,    10,    60,    60,    60,    60,    60,    60,    22,    22,
      22,    22,    22,    22,    22,    22,    22,    10,    10,    37,
      22,    22,    22,    37,    37,    21,    22,    22,     8,    21,
      21,     1,     6,    68,     8,     8,    61,    22,     9,    68,
      68,    38,    40,    41,    10,     9,     9,    22,    22,    22,
      65,    10,    10,    21,    21,    21,    65,    65,    22,    22,
      29,    69,     8,    60,    60,    22,     1,     6,    70,    22,
      22,    38,    41,    61,    22,     9,    10,    10,    22,    22,
      38,    40,    42,    10,    22,    21,    21,    22,    22,    22,
      22,    40,    41,    22,     8,    21,    21,    21,    38,    40,
      22,    22,    60,    70,    22,    69,     8,    22,    22,    21,
      21,    22,     9,    60,    10,    22,     1,     6,    29,    71,
      21,    21,    69,     8,    10,    10,    22,    22,    38,    61,
      22,     9,    22,    69,    22,    70,    22,    22,    10,    42,
      22,    38,    10,    60,    22,    41,     9,    41,    38,    22,
      22,    21,    22,    22,    22,    38,    22,    10,    22,    22,
      40,    42,    21,    22,    21,    38,    40,    10,    22,    21,
      22,    21,    21,    22,    22,     8,    60,    22,    22,    22,
      22,    21,     8,    40,     8,    22,    21,    21,    71,    22,
      60,    21,    21,    40,    22,    70,    22,    70,    60,    69,
       8,     9,    10,    22,    22,    69,    22,    60,     9,    21,
       9,    22,    22,    71,    10,    22,    10,    60,    22,    21,
      22,     7,    69,     7,    10,    42,     9,    22,    42,    22,
      22,    38,    69,    10,    10,     7,    10,     7,    22,    10,
      38,    22,    43,    10,    22,     7,     7,    68,    10,    68,
      10,    21,    22,    22,    21,    22,    22,    21,    10,    10,
      68,    68,     8,    40,    21,     8,    21,    40,    22,    68,
      68,    71,    22,    22,    71,    12,    29,    72,    22,    60,
       9,    21,    60,     9,    10,    21,    22,     7,    69,    22,
       7,    22,    69,     7,    10,     7,     7,    10,    44,    10,
      10,    70,    10,    10,    70,    22,    70,    70,    70,    70,
      21,    22,    45,    46,    47,    48,    49,    50,    51,    73,
      22,    10,    22,    52,    22,    21,    11,    10,    22,    39,
      22,    21,    13,    10,    22,    53,    22,    21,    22,    19,
      22,    10,    22,    54,    22,    21,     8,     1,     6,    29,
      74,    61,    22,     9,    38,     7,    22,    10,    21,    71,
      22,    60,    22,    10,    22,    55,    22,    21,    22,    29,
      75,    14,    15,    16,    17,    18,    76,    10,    22,    22,
      56,    22,    21,    22,    19,    22,    10,    22,    57,    22,
      21,    22,    19,    29,    77,    22,     7,    10,    74
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:

/* Line 1455 of yacc.c  */
#line 46 "parser.y"
    {printf ("json valido!");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 47 "parser.y"
    {printf ("json valido!");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 48 "parser.y"
    {printf ("json valido!");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 49 "parser.y"
    {printf ("json valido!");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 50 "parser.y"
    {printf ("json valido!");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 51 "parser.y"
    {printf ("json valido!");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 52 "parser.y"
    {printf ("json valido!");;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 53 "parser.y"
    {printf ("json valido!");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 54 "parser.y"
    {printf ("json valido!");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 55 "parser.y"
    {printf ("json valido!");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 59 "parser.y"
    { parse_correcto = 0; yyerror("error sintáctico\n"); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 70 "parser.y"
    { parse_correcto = 0; yyerror("error sintáctico\n"); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 82 "parser.y"
    { parse_correcto = 0; yyerror("error sintáctico\n"); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 96 "parser.y"
    { parse_correcto = 0; yyerror("error sintáctico\n"); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 106 "parser.y"
    { parse_correcto = 0; yyerror("error sintáctico\n"); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 119 "parser.y"
    { parse_correcto = 0; yyerror("error sintáctico\n"); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2000 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 137 "parser.y"

int main() 
{
    char opcion[3];
    char buffer[256];
    char salir[10];
    
    
    printf ("Bienvenido al analizador lexico json \n");
    printf ("(1) ingresar texto manualmente\n(2) ingresar ruta de un .txt \n ctrl+c para cerrar \n");
    printf ("opcion: ");
    fgets(opcion, sizeof(opcion), stdin);  // Leer la opción usando fgets
    switch (opcion[0]) {
        case '1': 
            printf("opcion: %d", opcion[0]);
            printf("\n");
            printf("ingrese el texto a analizar (ctrl+C para terminar): \n");
            yyin = stdin;
            getchar();
            break;
    
        case '2': 
            printf("ingrese la ruta al archivo de texto: ");
            fgets(buffer, sizeof(buffer), stdin);  // Leer la ruta usando fgets
            buffer[strcspn(buffer, "\n")] = 0;  // Eliminar el carácter de nueva línea al final
            yyin = fopen(buffer, "r");
            if (!yyin) {
                perror("no se puede abrir el archivo");
                exit(EXIT_FAILURE);
            }
            else {
                // Leer y mostrar el contenido del archivo
                char ch;
                while ((ch = fgetc(yyin)) != EOF) {
                    putchar(ch);
                }
                rewind(yyin);
            }
            getchar();
            break;

        default:
            printf ("Opcion no valida, apriete cualquier letra para cerrar. \n");
            exit (EXIT_FAILURE);
            getchar();
     }
    if (yyparse() == 0 && parse_correcto) {
        printf("json correcto. \n");
        getchar();
    } else {
        printf("json incorrecto. \n");
        getchar();
    }
    getchar();

    if (yyin != stdin) {
        fclose(yyin);
        getchar();
    }
    getchar();
    return 0;
    getchar();
}
    

void yyerror(const char *s) {
    fprintf(stderr, "error en la linea %d: %s\n", Nlinea, s);
    getchar();

}




