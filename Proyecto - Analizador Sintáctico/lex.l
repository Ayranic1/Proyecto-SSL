/* Definiciones */
%{
    #include "parser.tab.h"
    #include <string.h>
    #include <stdio.h>
    #include <stdlib.h>
    extern int yylex(); // Declaración externa de yylex
    extern void yyerror(const char *s); // Declaración externa de yyerror

    extern YYSTYPE yylval; // Declaración externa de yylval
    int Nlinea = 1;
    int Ncolum = 1;

%}

%option noyywrap


%%

"empresas"              { Ncolum += 8; return empresas; }
"version"               { Ncolum += 7; return version;}
"firma_digital"         { Ncolum += 13; return firma_digital;}
"nombre_empresa"        { Ncolum += 14;return nombreEmpresa;}
"fundacion"             { Ncolum += 9;return fundacion; }
"direccion"             { Ncolum += 9;return direccion;}
"calle"                 { Ncolum += 5;return calle;}
"ciudad"                { Ncolum += 6;return ciudad;}
"pais"                  { Ncolum += 4;return pais;}
"ingresos_anuales"      { Ncolum += 16;return ingresosanuales;}
"pyme"                  { Ncolum += 4;return pyme;}
"link"                  { Ncolum += 4;return link;}
"departamentos"         { Ncolum += 13;return departamentos;}
"true"                  { Ncolum += 4;return boolean;}
"false"                 { Ncolum += 5;return boolean;}
"nombre"                { Ncolum += 6;return nombre;}
"jefe"                  { Ncolum += 4;return jefe;}
"subdepartamentos"      { Ncolum += 16;return subdep;}
"empleados"             { Ncolum += 9;return empleados;}
"edad"                  { Ncolum += 4;return edad;}
"cargo"                 { Ncolum += 5;return cargo;}
"salario"               { Ncolum += 7;return salario;}
"activo"                { Ncolum += 6;return activo;}
"fecha_contratacion"    { Ncolum += 18;return feccon;}
"proyectos"             { Ncolum += 9;return proyectos;}
"estado"                { Ncolum += 6;return estado;}
"fecha_inicio"          { Ncolum += 12;return fecini;}
"fecha_fin"             { Ncolum += 9;return fecfin;}
"Product Analyst"       { Ncolum += 15;return cargo2;}
"Project Manager"       { Ncolum += 15;return cargo2;}
"UX designer"           { Ncolum += 11;return cargo2;}
"Marketing"             { Ncolum += 9;return cargo2;}
"Developer"             { Ncolum += 9;return cargo2;}
"Devops"                { Ncolum += 6;return cargo2;}
"DB admin"              { Ncolum += 8;return cargo2;}
"To do"                 { Ncolum += 5;return status;}
"In progress"           { Ncolum += 11;return status;}
"Canceled"              { Ncolum += 8;return status;}
"Done"                  { Ncolum += 4;return status;}
"On hold"               { Ncolum += 7;return status;}
"null"                  { return null;}
"Null"                  { return null2;}
[A-Za-z¡!?¿]+           {Ncolum += yyleng; return Estring;}

"{"                     { Ncolum++; return llave1; } 
"}"                     { Ncolum++; return llave2; }
"["                     { Ncolum++; return cor1; } 
"]"                     { Ncolum++; return cor2; }
":"                     { Ncolum++; return dosp; }
"\""                    { Ncolum++; return comdo; }
","                     { Ncolum++;  return coma;}

[ ]+                    { Ncolum += yyleng;}
[\t]+                   {Ncolum += yyleng;}
[\n]+                   {Nlinea++; Ncolum = 1;}
[\r]+                   {Ncolum = 1;}

"-"(0[1-9]|[1-9]|1[0-2])"-"         { Ncolum +=yyleng;return mes;} /* mes */

(0[1-9]|[1-9]|1[0-9]|2[0-9]|30|31)   { Ncolum +=2; return day;} /* díaa */

(19[0-9][0-9]|20[0-9][0-9])   { Ncolum += yyleng; return year; /* año */ }

(\-)?((0[.][0-9]+|[0-9]+[.][0-9]+)|[0-9]+)  { Ncolum += yyleng; return real;}

https?:\/\/(www\.)?[a-zA-Z0-9\-]+(\.[a-zA-Z]+)+(\/[a-zA-Z0-9\-._~:\/?#\[\]@!$&'()*+,;=]*)? { Ncolum += yyleng; return link2; }




.                   {Ncolum++; fprintf(stderr, "Error: Caracter no reconocido '%s' en la linea %d, columna %d\n", yytext, Nlinea, Ncolum); }

%% 