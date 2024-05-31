/*definicciones*/
%option noyywrap

caracter [a-zA-Z0-9,.¿?!¡] 

%%
\{ {printf ("Apertura de llave \n");}
\} {printf ("Cierre de llave \n");}
\[ {printf ("Apertura de corchete \n");}
\] {printf ("Cierre de corchete \n");}
" " {printf ("Espacio encontrado \n");}
{caracter}+ {printf ("String: %s\n", yytext );}
[1-9]+"."[0-9]+ {printf (" float: %s\n", yytext);}
[1-9]+|0 {printf ("integer: %s\n", yytext);}
true|false {printf ("boolean: %s\n", yytext);}

Empresas {printf ("campo: empresa \n");}
nombre_empresa {printf ("nombre_empresa: string \n");}
fundacion {printf ("fundacion: integer \n");}
dirección {printf ("dirección: { \n calle: string \n ciudad: string \n país: string \n } \n");}
ingresos_anuales {printf ("ingresos anueales: float \n");}
pyme {printf ("pyme: bool \n");}
version {printf ("campo: version \n");}
link {printf ("link: string \n");}
firma_digital {printf ("campo: firma \n");}

deptartamentos {printf ("[\n nombre: string \n jefe: string \n empleados: [ \n { \n nombre: string \n edad: integer \n salario: float \n activo: bool \n fecha_contratación: date \n }]]");}





%%
/*código de usuario*/

int main (void) {
    yyin = fopen ("ejemplo.txt", "r");
    yylex();
}