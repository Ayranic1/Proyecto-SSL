/*definicciones*/
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
%}


%option noyywrap

caracter [a-zA-Z0-9,.¿?!¡ ] 
url [a-zA-Z0-9.#/:-_]
entero [0-9]
espacio [ ]         //

%% 
\n              {Nlinea++;} 
[ \t\n]+ ;
"_" {return GuionBajo;} 
"-" {return guinmedio;}
"ó" {return oacento;}
"{" {return Allave;}
"}" {return Cllave;}
"[" {return Acorchete;} 
"]" {return Ccorchete;}
"," {return coma;}
"/" {return barra;}
"\\" {return barrainvertida;}
(-?[0-9]+|0)"."[0-9]+ {yylval.real = atof(yytext); return real;}
-?[0-9]+|0 {yylval.entero = atoi(yytext); return entero;}
"true" {strcpy(yylval.boolean, yytext); return boolean ;}
"false" {strcpy(yylval.boolean, yytext); return boolean ;}
"in progress" {yylval.reservada = yytext; return inprogress;} 
"to do" {yylval.reservada = yytext; return todo;}
"canceled" {yylval.reservada = yytext; return canceled;}
"done" {yylval.reservada = yytext; return done;}
"on hold" {yylval.reservada = yytext; return onhold;}
(19[0-9]{2}|20[0-9]{2})-(0[1-9]|1[0-2])-(0[1-9]|[12][0-9]|3[01]) {yylval.date = strdup(yytext);  return date;}
\"(http|https|ftp):\/\/{url}*(\/\:{entero}+)?(\/{url}*)*\" {yylval.url = yytext; return url;} 
":" {return dospuntos;}
"\"" {return comillas ;}  
"empresas" {yylval.reservada = yytext; return empresas;}
"nombre_empresa" {yylval.reservada = yytext; return nombreEmpresa;}
"fundacion" {yylval.reservada = yytext; return fundacion; }
"direccion" {yylval.reservada = yytext; return direccion;}
"calle" {yylval.reservada = yytext; return calle;}
"ciudad" {yylval.reservada = yytext; return ciudad;}
"pais" {yylval.reservada = yytext; return pais;}
"ingresos_anuales" { yylval.reservada= yytext; return ingresosAnio;}
"pyme" {yylval.reservada= yytext; return pyme;}
"link" {yylval.reservada = yytext; return link;}
"departamentos" {yylval.reservada = yytext; return deptos;}
"nombre" {yylval.reservada = yytext; return nombre;} 
"activo" {yylval.reservada = yytext; return activo;}
"jefe" {yylval.reservada = yytext; return jefe;}
"subdepartamentos" {yylval.reservada =yytext; return subdeptos;} 
"empleados" {yylval.reservada=yytext; return empleados;}
"edad" {yylval.reservada=yytext; return edad;}
"cargo" {yylval.reservada=yytext; return cargo;}
"Product analyst" {yylval.reservada=yytext; return PA;}
"Project manager" {yylval.reservada=yytext; return PM;}
"UX designer" {yylval.reservada=yytext; return UXD;}
"Marketing" {yylval.reservada=yytext; return MK;}  
"Developer" {yylval.reservada=yytext; return DEV;}
"Devops" {yylval.reservada=yytext; return devops;}
"DB admin" {yylval.reservada=yytext; return DBA;}
"salario" {yylval.reservada= yytext; return salario;}
"fecha_contratacion" {yylval.reservada= yytext; return fechacontrato;}
"proyectos" {yylval.reservada = yytext; return proyectos;}
"estado" { yylval.reservada = yytext; return estado;} 
"fecha_inicio" {yylval.reservada = yytext; return fechaI;}
"fecha_fin" {yylval.reservada =yytext; return fechaF;}
"version" {yylval.reservada=yytext; return version;}
"null" {yylval.reservada = yytext; return nulo;}
"firma_digital" {yylval.reservada=yytext; return firma_digital;}
{caracter}+ {sscanf (yytext, "%s", yylval.string); return string;}
. {printf ("error"); }

\"[0-9][12345678][0-9]{2}-(0[1-9]|1[0-2])-(0[1-9]|[12][0-9]|3[01])\" { printf("Es invalido el dato Date: %s \n", yytext); }

%%
