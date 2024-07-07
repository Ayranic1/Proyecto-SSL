/* Definiciones */
%{
    #include "parser.tab.h"
    #include <string.h>
    #include <stdio.h>
    #include <stdlib.h>
    extern int yylex(); // Declaración externa de yylex
    int yylex();
    extern void yyerror(const char *s); // Declaración externa de yyerror


    extern int yychar; // Declaración externa de yychar
    extern YYSTYPE yylval; // Declaración externa de yylval
    extern int yynerrs; // Declaración externa de yynerrs
    int Nlinea = 1;
    int Ncolum = 1;
%}

%option noyywrap



%% 
[a-zA-Z0-9.;]     { Ncolum++; }
\t                { Ncolum += 4; }
[ \r]             { Ncolum++; }
\n                { Nlinea++; Ncolum = 1; }
"{"               { Ncolum++; return Allave; } 
"}"               { Ncolum++; return Cllave; }

[ \t\n]+          { /* Ignorar espacios en blanco */ }
.                 { fprintf(stderr, "Error: Caracter no reconocido '%s'\n", yytext); }

%%