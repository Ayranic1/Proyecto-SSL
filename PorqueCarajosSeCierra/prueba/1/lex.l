/* Definiciones */
%{
    #include "parser.tab.h"
    #include <string.h>
    #include <stdio.h>
    #include <stdlib.h>
    int yylex();
    extern void yyerror(const char *s); // Declaración externa de yyerror
    extern int yylex(); // Declaración externa de yylex

    extern int yychar; // Declaración externa de yychar
    extern YYSTYPE yylval; // Declaración externa de yylval
    extern int yynerrs; // Declaración externa de yynerrs
    int Nlinea = 1;
    int Ncolum = 1;
%}

%option noyywrap

caracter [a-zA-Z0-9,.¿?!¡ ] 
entero [0-9]+
booleano (true|false)

%% 
[a-zA-Z0-9.;]   { Ncolum++; }
\t                { Ncolum += 4; }
[ \r]             { Ncolum++; }
\n                { Nlinea++; Ncolum = 1; }
"{"               { Ncolum++; return Allave; } 
"}"               { Ncolum++; return Cllave; }
":"               { Ncolum++; return dospuntos; }
","               { Ncolum++; return coma; }
\"[^"]*\"         { Ncolum += yyleng; yylval.string = strdup(yytext); return string; } 
{entero}          { Ncolum += yyleng; yylval.entero = atoi(yytext); return entero; }
"true"            { Ncolum += 4; strcpy(yylval.boolean, "true"); return boolean; }
"false"           { Ncolum += 5; strcpy(yylval.boolean, "false"); return boolean; }
[ \t\n]+          { /* Ignorar espacios en blanco */ }
.                 { fprintf(stderr, "Error: Caracter no reconocido '%s'\n", yytext); }

%%

