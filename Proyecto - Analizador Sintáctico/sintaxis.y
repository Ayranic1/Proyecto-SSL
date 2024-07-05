%{
#include <stdio.h>
#include <stdlib.h>

/* Declarar la función yylex para obtener tokens del lexer */
int yylex();
void yyerror(const chars);
%}

/* Definiciones de tokens */
%token INTEGER FLOAT BOOLEAN STRING URL DATE
%token LBRACE RBRACE LBRACKET RBRACKET COLON QUOTE
%token EMPRESAS NOMBRE_EMPRESA FUNDACION DIRECCION INGRESOS_ANUALES
%token PYME LINK DEPTOS NOMBRE JEFE SUBDEPTOS
%token EMPLEADOS EDAD CARGO SALARIO FECHA_CONTRATACION PROYECTOS
%token ESTADO FECHA_INICIO FECHA_FIN VERSION FIRMA_DIGITAL CALLE CIUD PAIS

%%

/* Reglas de la gramática */

json:
    empresas
    ;

empresas:
    EMPRESAS LBRACE empresa_list RBRACE
    ;

empresa_list:
    empresa
    | empresa_list empresa
    ;

empresa:
    NOMBRE_EMPRESA COLON STRING
    | FUNDACION COLON INTEGER
    | DIRECCION COLON direccion
    | INGRESOS_ANUALES COLON FLOAT
    | PYME COLON BOOLEAN
    | LINK COLON URL
    | DEPTOS COLON LBRACE departamento_list RBRACE
    ;

direccion:
    LBRACE calle COLON STRING RBRACE
    | LBRACE ciudad COLON STRING RBRACE
    | LBRACE pais COLON STRING RBRACE
    ;

departamento_list:
    departamento
    | departamento_list departamento
    ;

departamento:
    NOMBRE COLON STRING
    | JEFE COLON STRING
    | SUBDEPTOS COLON LBRACE subdepartamento_list RBRACE
    | EMPLEADOS COLON LBRACE empleado_list RBRACE
    ;

subdepartamento_list:
    subdepartamento
    | subdepartamento_list subdepartamento
    ;

subdepartamento:
    NOMBRE COLON STRING
    ;

empleado_list:
    empleado
    | empleado_list empleado
    ;

empleado:
    NOMBRE COLON STRING
    | EDAD COLON INTEGER
    | CARGO COLON STRING
    | SALARIO COLON FLOAT
    | FECHA_CONTRATACION COLON DATE
    ;

calle:

ciudad:

pais:


%%

void yyerror(const chars) {
    fprintf(stderr, "Error: %s\n", s);
}

int main(void) {
    yyparse();
    return 0;
}