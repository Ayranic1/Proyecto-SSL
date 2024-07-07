
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 19 "parser.y"
 
    char string[30];
    int entero;
    float real;
    char boolean[6];
    char *reservada;
    char *date;
    char *url;



/* Line 1676 of yacc.c  */
#line 124 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


