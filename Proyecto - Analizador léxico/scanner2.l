/*definicciones*/
%option noyywrap

caracter [a-zA-Z0-9,.¿?!¡ ] 
url [a-zA-Z0-9.#/:-_]
entero [0-9]
espacio [ ]
%%
_ {printf ("Se ha detectador un guion bajo \n");}
ó {printf ("o acentuada");}
\{ {printf ("Se ha detectado una apertura de llave \n");}
\} {printf ("Se ha detectado un cierre de llave \n");}
\[ {printf ("Se ha detectado una apertura de corchete \n");}
\] {printf ("Se ha detectado un cierre de corchete \n");}
[1-9]+"."[0-9]+ {printf ("Se ha detectado un float: %s\n", yytext);}
[1-9]+|0 {printf ("Se ha detectado un integer: %s\n", yytext);}
true|false {printf ("Se ha detectado un boolean: %s\n", yytext);}
in{espacio}progress {printf ("in progress \n");} 
to{espacio}do {printf ("to do \n");}
canceled {printf ("canceled \n");}
done {printf ("done \n");}
on{espacio}hold {printf ("on hold \n");}
[1-2][0-9]{3}-(0[1-9]|1[0-2])-(0[1-9]|[12][0-9]|3[01]) { printf("Se ha detectado el dato Date: %s\n", yytext); }
(http:\/\/|https:\/\/){url}(\/\:{entero}+)?(\/{url}*)* {printf ("se ha detectado el string de tipo url");}
: {printf ("Se han detectado dos puntos \n");}
\" {printf ("Se han detectado comillas \n");}
empresas {printf ("campo: empresas \n");}
nombre_empresa {printf ("nombre_empresa: string \n");}
fundaci[óo]n { printf("fundacion: integer \n"); }
direcci[óo]n {printf ("dirección: { \n calle: string \n ciudad: string \n país: string \n } \n");}
ingresos_anuales {printf ("ingresosanuales: float \n");}
pyme {printf ("pyme: bool \n");}
link {printf ("link: string (url) \n");}
departamentos {printf ("campo: departamentos \n");}
nombre {printf ("nombre: string \n");} 
jefe {printf ("jefe: string \n");}
subdepartamentos {printf ("subcampo: subdepartamentos \n");}
empleados {printf ("empleado: string \n");}
edad {printf ("edad: integer \n");}
cargo:{espacio}[Pp]roduct{espacio}[Aa]nalyst {printf ("cargo: string (Product Analyst) \n");}
cargo:{espacio}[Pp]roject{espacio}[Mm]anager {printf ("cargo: string (Project Manager) \n");}
cargo:{espacio}(UX|ux){espacio}[Dd]esigner {printf ("cargo: string (UX designer) \n");}
cargo:{espacio}[Mm]arketing {printf ("cargo: string (Marketing) \n");}
cargo:{espacio}[Dd]eveloper {printf ("cargo: string (Developer) \n");}
cargo:{espacio}[dD]evops {printf ("cargo: string (Devops) \n");}
cargo:{espacio}(DB|db){espacio}admin {printf ("cargo: string (DB admin) \n");}
salario {printf ("salario: float \n");}
fecha_contrataci[óon] {printf ("fecha_contratacion: date \n");}
proyectos {printf ("proyectos: string \n");}
estado {printf ("estado: string (%s)\n");} /*nombramos un tipo de dato que llamamos estado*/
estado:{espacio}on{espacio}hold {printf ("estado: string (on hold)\n");} /*nombramos un tipo de dato que llamamos estado*/
estado:{espacio}to{espacio}do {printf ("estado: string (to do)\n");}
estado:{espacio}canceled {printf ("estado: string (canceled)\n");}
estado:{espacio}done {printf ("estado: string (done)\n");}
estado:{espacio}in{espacio}progress {printf ("estado: string (in progress)\n");}
fecha_inicio {printf ("fecha_inicio: date  \n");}
fecha_fin {printf ("fecha_fin: date \n");}
version {printf ("campo: version \n");}
firma_digital {printf ("campo: firma \n firma_digital: string \n");}
{caracter}+ {printf ("String: %s\n", yytext );}
[ \t\n]+
.   {printf ("Caracter no reconocido: %s\n", yytext); }



%%
/*código de usuario*/

int main (void) {
    yylex();

}