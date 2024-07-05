/*definicciones*/
%option noyywrap

/* tokens */
caracter [a-zA-Z0-9,.¿?!¡ ] 
url [a-zA-Z0-9.#/:-_]
entero [0-9]
espacio [ ]

%%
_ {printf ("Se ha detectador un guion bajo \n");}
ó {printf ("o acentuada \n");}
\{ {printf ("Se ha detectado una apertura de llave \n"); return LBRACE;}
\} {printf ("Se ha detectado un cierre de llave \n"); return RBRACE;}
\[ {printf ("Se ha detectado una apertura de corchete \n"); return LBRACKET;}
\] {printf ("Se ha detectado un cierre de corchete \n"); return RBRACKET;}
(-?[0-9]+|0)"."[0-9]+ {printf ("Se ha detectado un float: %s\n", yytext); return FLOAT;}
-?[1-9]+|0 {printf ("Se ha detectado un integer: %s\n", yytext); return INTEGER;}
true|false {printf ("Se ha detectado un boolean: %s\n", yytext); return BOOLEAN;}
in{espacio}progress {printf ("in progress \n");} 
to{espacio}do {printf ("to do \n");}
canceled {printf ("canceled \n");}
done {printf ("done \n");}
on{espacio}hold {printf ("on hold \n");}
\"(19[0-9]{2}|20[0-9]{2})-(0[1-9]|1[0-2])-(0[1-9]|[12][0-9]|3[01])\" { printf("Se ha detectado el dato Date: %s\n", yytext); return DATE;} 
\"(http|https|ftp):\/\/{url}*(\/\:{entero}+)?(\/{url}*)*\" {printf ("se ha detectado el string de tipo url:%s \n", yytext); return URL;} 
: {printf ("Se han detectado dos puntos \n"); return COLON;}
\" {printf ("Se han detectado comillas \n"); return QUOTE;}
empresas {printf ("campo: empresas \n"); return EMPRESA;}
nombre_empresa {printf ("nombre_empresa: string \n"); return NOMBRE_EMPRESA;}
fundaci[óo]n { printf("fundacion: integer \n"); return FUNDACION;}
direcci[óo]n {printf ("dirección: { \n calle: string \n ciudad: string \n país: string \n } \n"); return DIRECCION;}


ingresos_anuales {printf ("ingresosanuales: float \n"); return iNGRESOS_ANULAES;}
pyme {printf ("pyme: bool \n"); return PYME}
link {printf ("link: string (url) \n"); return LINK}
departamentos {printf ("campo: departamentos \n"); return DEPTOS;}
nombre {printf ("nombre: string \n"); return NOMBRE} 
jefe {printf ("jefe: string \n"); return JEFE}
subdepartamentos {printf ("subcampo: subdepartamentos \n");return SUBDEPTOS;}
empleados {printf ("empleado: string \n"); return EMPLEADOS}
edad {printf ("edad: integer \n"); return EDAD}
cargo:{espacio}[Pp]roduct{espacio}[Aa]nalyst {printf ("cargo: string (Product Analyst) \n"); return CARGO;}
cargo:{espacio}[Pp]roject{espacio}[Mm]anager {printf ("cargo: string (Project Manager) \n"); return CARGO;}
cargo:{espacio}(UX|ux){espacio}[Dd]esigner {printf ("cargo: string (UX designer) \n"); return CARGO;}
cargo:{espacio}[Mm]arketing {printf ("cargo: string (Marketing) \n"); return CARGO;}
cargo:{espacio}[Dd]eveloper {printf ("cargo: string (Developer) \n"); return CARGO;}
cargo:{espacio}[dD]evops {printf ("cargo: string (Devops) \n"); return CARGO;}
cargo:{espacio}(DB|db){espacio}admin {printf ("cargo: string (DB admin) \n"); return CARGO;}
salario {printf ("salario: float \n"); return SALARIO;}
fecha_contrataci[óon] {printf ("fecha_contratacion: date \n");  return FECHA_CONTRATACION;}
proyectos {printf ("proyectos: string \n"); return PROYECTO;}
estado {printf ("estado: string \n"); return ESTADO;} /*nombramos un tipo de dato que llamamos estado*/
estado:{espacio}on{espacio}hold {printf ("estado: string (on hold)\n"); return ESTADO;} /*nombramos un tipo de dato que llamamos estado*/
estado:{espacio}to{espacio}do {printf ("estado: string (to do)\n"); return ESTADO;}
estado:{espacio}canceled {printf ("estado: string (canceled)\n"); return ESTADO;}
estado:{espacio}done {printf ("estado: string (done)\n"); return ESTADO;}
estado:{espacio}in{espacio}progress {printf ("estado: string (in progress)\n"); return ESTADO;}
fecha_inicio {printf ("fecha_inicio: date  \n"); return FECHA_INICIO;}
fecha_fin {printf ("fecha_fin: date \n"); return FECHA_FIN;}
version {printf ("campo: version \n"); return VERSION;}
firma_digital {printf ("campo: firma \n firma_digital: string \n");  return FIRMA_DIGITAL;}
{caracter}+ {printf ("String: %s\n", yytext );  return STRING;}
[ \t\n]+
. {printf ("Caracter no reconocido: %s\n", yytext); }

\"[0-9][12345678][0-9]{2}-(0[1-9]|1[0-2])-(0[1-9]|[12][0-9]|3[01])\" { printf("Es invalido el dato Date: %s \n", yytext); }

%%

/*código de usuario*/
int main (void) {
    int opcion;
    char buffer[256];
    char salir[10];
    printf ("Bienvenido al analizador lexico json \n");
    printf ("(1) ingresar texto manualmente\n(2) ingresar ruta de un .txt \n ctrl+c para cerrar \n");
    printf ("opcion: ");
    scanf ("%d", &opcion);
    switch (opcion) {
        case (1): 
            printf ("ingrese el texto a analizar (ctrl+C para terminar): \n");
            yyin = stdin;
            break;

        case (2): 
            printf ("ingrese la ruta al archivo de texto: ");
            scanf ("%s", buffer);
            yyin = fopen(buffer, "r");
            if (!yyin) {
                perror ("no se puede abrir el archivo");
                exit (EXIT_FAILURE);
            }
            break;


        case (3): ;

            break;
        default:
            printf ("opción no válida \n");
            exit (EXIT_FAILURE);
    }
    yylex();
    printf("--------------------------------\n");
    printf("Ingrese una caracter para salir:\n");
    scanf("%s",salir);
    exit(0);
}