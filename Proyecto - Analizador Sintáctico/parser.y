%{
#include <stdio.h>
#include <stdlib.h>
extern int yylex();

FILE *htmlFile;
extern FILE *yyin; 

int parse_correcto = 1; //0 = incorrecto, 1 = correcto

FILE *outfile;
extern int Nlinea;


%}
%union { 
    char string[30];
    int entero;
    float real;
    char boolean[6];
    char *reservada;
    char date;
    char url;
}

//fecha
%token espacio GuionBajo oacento Allave Cllave Acorchete Ccorchete coma real entero boolean 
%token inprogress todo canceled done onhold date url dospuntos comillas empresas nombreEmpresa  
%token fundacion barrainvertida barra guinmedio nulo
%token direccion calle ciudad pais ingresosAnio pyme link deptos nombre activo jefe subdeptos empleados edad 
%token cargo PA PM UXD MK DEV devops DBA salario fechacontrato proyectos estado fechaI fechaF version firma_digital string error
%type <string> string
%type <entero> entero
%type <reservada> nulo inprogress todo canceled done onhold dospuntos estado empresas nombreEmpresa fundacion calle ciudad pais direccion ingresosAnio pyme link deptos nombre comillas jefe subdeptos empleados edad cargo PA PM UXD MK DEV devops DBA salario activo fechacontrato proyectos fechaI fechaF version firma_digital
%type <boolean> boolean
%type <real> real
%type <date> date 
%type <url> url



%%

expr:
    | Sigma
;


Sigma: Allave comillas empresas comillas dospuntos Acorchete LISTA Ccorchete coma Cllave {printf ("json valido!");}
| Allave comillas empresas comillas dospuntos Acorchete LISTA Ccorchete coma nulo Cllave {printf ("json valido!");}
| Allave comillas empresas comillas dospuntos Acorchete LISTA Ccorchete coma comillas version comillas dospuntos comillas real comillas coma comillas firma_digital comillas dospuntos comillas string comillas Cllave {printf ("json valido!");}
| Allave comillas empresas comillas dospuntos Acorchete LISTA Ccorchete coma comillas firma_digital comillas dospuntos comillas string comillas coma comillas version comillas dospuntos comillas real comillas Cllave {printf ("json valido!");}
| Allave comillas version comillas dospuntos comillas real comillas coma comillas empresas comillas dospuntos Acorchete LISTA Ccorchete coma comillas firma_digital comillas dospuntos comillas string comillas Cllave {printf ("json valido!");}
| Allave comillas version comillas dospuntos comillas real comillas coma comillas firma_digital comillas dospuntos comillas string comillas coma comillas empresas comillas dospuntos Acorchete LISTA Ccorchete Cllave {printf ("json valido!");}
| Allave comillas firma_digital comillas dospuntos comillas string comillas coma comillas empresas comillas dospuntos Acorchete LISTA Ccorchete coma comillas version comillas dospuntos comillas real comillas  Cllave {printf ("json valido!");}
| Allave comillas firma_digital comillas dospuntos comillas string comillas coma comillas version comillas dospuntos comillas real comillas coma comillas empresas comillas dospuntos Acorchete LISTA Ccorchete Cllave {printf ("json valido!");}
| Allave comillas empresas comillas dospuntos Acorchete LISTA Ccorchete coma comillas version comillas dospuntos comillas real comillas Cllave {printf ("json valido!");}
| Allave comillas empresas comillas dospuntos Acorchete LISTA Ccorchete coma comillas firma_digital comillas dospuntos comillas string comillas Cllave {printf ("json valido!");}
;

LISTA: //este no
    | error '\n' { parse_correcto = 0; yyerror("error sintáctico\n"); }
    | Allave comillas nombreEmpresa comillas dospuntos comillas string comillas coma comillas fundacion comillas dospuntos entero coma comillas direccion comillas dospuntos Allave LOCACION Cllave coma comillas ingresosAnio comillas dospuntos real coma comillas pyme comillas dospuntos boolean coma comillas link comillas dospuntos comillas URL comillas coma comillas deptos comillas dospuntos Acorchete DEPTOS Ccorchete coma LISTA {fprintf(htmlFile, "<div class=\"emp-div\"> \n <h1>nombre empresa: $7<h1/> \n</div>\n");}
    | Allave comillas nombreEmpresa comillas dospuntos comillas string comillas coma comillas fundacion comillas dospuntos entero coma comillas direccion comillas dospuntos Allave Cllave coma comillas ingresosAnio comillas dospuntos real coma comillas pyme comillas dospuntos boolean coma comillas link comillas dospuntos comillas URL comillas coma comillas deptos comillas dospuntos Acorchete DEPTOS Ccorchete coma LISTA {}
    | Allave comillas nombreEmpresa comillas dospuntos comillas string comillas coma comillas fundacion comillas dospuntos entero coma comillas direccion comillas dospuntos Allave nulo Cllave coma comillas ingresosAnio comillas dospuntos real coma comillas pyme comillas dospuntos boolean coma comillas link comillas dospuntos comillas URL comillas coma comillas deptos comillas dospuntos Acorchete DEPTOS Ccorchete coma LISTA  {}
;
URL:
    | nulo 
    | url 
;

LOCACION:  //este sí
        | error '\n' { parse_correcto = 0; yyerror("error sintáctico\n"); }
        | comillas calle comillas dospuntos comillas string comillas coma comillas ciudad comillas dospuntos comillas string comillas coma comillas pais comillas dospuntos comillas string comillas
        | comillas calle comillas dospuntos comillas string comillas coma comillas pais comillas dospuntos comillas string comillas coma comillas ciudad comillas dospuntos comillas string comillas
        | comillas ciudad comillas dospuntos comillas string comillas coma comillas calle comillas dospuntos comillas string comillas coma comillas pais comillas dospuntos comillas string comillas
        | comillas ciudad comillas dospuntos comillas string comillas coma comillas pais comillas dospuntos comillas string comillas coma comillas calle comillas dospuntos comillas string comillas
        | comillas pais comillas dospuntos comillas string comillas coma comillas calle comillas dospuntos comillas string comillas coma comillas ciudad comillas dospuntos comillas string comillas
        | comillas pais comillas dospuntos comillas string comillas coma comillas ciudad comillas dospuntos comillas string comillas coma comillas calle comillas dospuntos comillas string comillas
        | nulo 

;

DEPTOS: 
        | error '\n' { parse_correcto = 0; yyerror("error sintáctico\n"); }
        | Allave comillas nombre comillas dospuntos comillas string comillas coma comillas jefe comillas dospuntos JEFE comillas subdeptos comillas dospuntos Acorchete SUBDEPTOS Ccorchete Cllave coma DEPTOS
        | Allave comillas nombre comillas dospuntos comillas string comillas coma comillas subdeptos comillas  dospuntos Acorchete SUBDEPTOS Ccorchete  coma comillas jefe comillas dospuntos JEFE Cllave coma DEPTOS
        | Allave comillas jefe comillas dospuntos JEFE comillas nombre comillas dospuntos comillas string comillas coma comillas subdeptos comillas dospuntos Acorchete SUBDEPTOS Ccorchete Cllave coma DEPTOS
        | Allave comillas jefe comillas dospuntos JEFE comillas subdeptos comillas  dospuntos Acorchete SUBDEPTOS Ccorchete  coma comillas nombre comillas dospuntos comillas string comillas coma Cllave coma DEPTOS
        | Allave comillas subdeptos comillas dospuntos Acorchete SUBDEPTOS Ccorchete coma comillas nombre comillas dospuntos comillas string comillas coma comillas jefe comillas dospuntos JEFE Cllave coma DEPTOS
        | Allave comillas subdeptos comillas  dospuntos Acorchete SUBDEPTOS Ccorchete  coma comillas jefe comillas dospuntos JEFE comillas nombre comillas dospuntos comillas string comillas coma Cllave coma DEPTOS
;
JEFE:
    | comillas string comillas coma
    | nulo
;

SUBDEPTOS:
        | error '\n' { parse_correcto = 0; yyerror("error sintáctico\n"); }
        | Allave comillas nombre comillas dospuntos comillas string comillas coma comillas jefe comillas dospuntos JEFE comillas empleados comillas dospuntos Acorchete EMPLEADOS Ccorchete Cllave coma SUBDEPTOS
        | Allave comillas nombre comillas dospuntos comillas string comillas coma comillas empleados comillas dospuntos  Acorchete EMPLEADOS Ccorchete coma comillas jefe comillas dospuntos JEFE Cllave coma SUBDEPTOS
        | Allave comillas jefe comillas dospuntos JEFE comillas nombre comillas dospuntos comillas string comillas coma comillas empleados comillas dospuntos Acorchete EMPLEADOS Ccorchete Cllave coma SUBDEPTOS
        | Allave comillas jefe comillas dospuntos JEFE coma comillas empleados comillas dospuntos  Acorchete EMPLEADOS Ccorchete coma comillas nombre comillas dospuntos comillas string comillas Cllave coma SUBDEPTOS
        | Allave comillas empleados comillas dospuntos  Acorchete EMPLEADOS Ccorchete coma comillas nombre comillas dospuntos comillas string comillas coma comillas jefe comillas dospuntos JEFE coma SUBDEPTOS
        | Allave comillas empleados comillas dospuntos  Acorchete EMPLEADOS Ccorchete coma comillas jefe comillas dospuntos JEFE comillas nombre comillas dospuntos comillas string comillas Cllave coma SUBDEPTOS
;

EMPLEADOS: //este no
        | error '\n' { parse_correcto = 0; yyerror("error sintáctico\n"); }
        | Allave comillas nombre comillas dospuntos comillas string comillas coma comillas edad comillas dospuntos EDAD coma comillas cargo comillas dospuntos comillas CARGOEMPLEADO comillas coma comillas salario comillas dospuntos real coma comillas activo comillas dospuntos boolean coma comillas fechacontrato comillas dospuntos comillas date comillas coma comillas proyectos comillas dospuntos Acorchete PROYECTOS Ccorchete Cllave coma EMPLEADOS 
        | nulo
;
EDAD: 
    | nulo
    | entero
;
//activo
CARGOEMPLEADO: PA|PM|UXD|MK|DEV|devops|DBA
; 

PROYECTOS: //este no
        | error '\n' { parse_correcto = 0; yyerror("error sintáctico\n"); }
        | Allave comillas nombre comillas dospuntos comillas string comillas coma comillas estado comillas dospuntos EST coma comillas fechaI comillas dospuntos comillas date comillas coma comillas fechaF comillas dospuntos comillas FECHAFIN comillas Cllave coma PROYECTOS
        | nulo
;
EST:
    |comillas ESTADOP comillas 
    |nulo
;
ESTADOP:
inprogress|todo|onhold|canceled|done

;
FECHAFIN:
        | date 
        | nulo
;


%%
int main() 
{
    int opcion;
    char buffer[256];
    char salir[10];


    htmlFile = fopen("index.html", "w");
    if (htmlFile == NULL){
        printf("Error al crear el documento html");
        return 1;
    }

    printf("Se creo documento HTML\n"); // quitar para la entrega + + + + + + +
    //fprintf(htmlFile, "\n");

    fprintf(htmlFile, "<!DOCTYPE html>\n");
    fprintf(htmlFile, "<html>\n");
    fprintf(htmlFile, "<head>\n");
    fprintf(htmlFile, "    <meta charset=\"UTF-8\">\n");
    fprintf(htmlFile, "    <title>синтаксис диких кодеров</title>\n");
    fprintf(htmlFile, "    <link rel=\"icon\" type=\"image/x-icon\" href=\"icon.png\">\n");
    fprintf(htmlFile, "    <style>\n");
    fprintf(htmlFile, "    .emp-div {\n");
    fprintf(htmlFile, "         border: 1px solid grey;\n");
    fprintf(htmlFile, "         padding: 20px;\n");
    fprintf(htmlFile, "    }\n");
    fprintf(htmlFile, "    </style>\n");
    fprintf(htmlFile, "</head>\n");
    fprintf(htmlFile, "<body>\n");

    //------

    
    
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
            fprintf(htmlFile, "<h1>Nombre del archivo: %s</h1>", buffer); // escribe el nombre del archivo en el doc HTML
            if (!yyin) {
                perror ("no se puede abrir el archivo");
                remove("index.html"); // elimina el doc HTML generado
                exit (EXIT_FAILURE);
            }
            break;

        default:
            printf ("opcion no valida \n");
            remove("index.html");
            exit (EXIT_FAILURE);
     }
    if (yyparse() == 0 && parse_correcto) {
        printf("json correcto. \n");

        //Finalización del archivo html
        fprintf(htmlFile, "</body>\n");
        fprintf(htmlFile, "</html>\n");

        // Cerrar archivo
        fclose(htmlFile);

    } else {
        printf("json incorrecto. \n");
        remove("index.html");
    }
    return 0;
}
    

void yyerror(const char *s) {
    fprintf(stderr, "error en la línea %d: %s\n", Nlinea, s);
    remove("index.html");
    return 0;
}

