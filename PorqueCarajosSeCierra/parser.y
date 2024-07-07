%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int yylex();
extern void yyerror(const char *s);
extern FILE *yyin; 
int parse_correcto = 1; //0 = incorrecto, 1 = correcto
FILE *outfile;
extern int Nlinea;

%}//fecha
%token espacio GuionBajo oacento Allave Cllave Acorchete Ccorchete coma real entero boolean 
%token inprogress todo canceled done onhold date url dospuntos comillas empresas nombreEmpresa  
%token fundacion barrainvertida barra guinmedio nulo
%token direccion calle ciudad pais ingresosAnio pyme link deptos nombre activo jefe subdeptos empleados edad 
%token cargo PA PM UXD MK DEV devops DBA salario fechacontrato proyectos estado fechaI fechaF version firma_digital string error

%union { 
    char string[30];
    int entero;
    float real;
    char boolean[6];
    char *reservada;
    char *date;
    char *url;
}

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
    | Allave comillas nombreEmpresa comillas dospuntos comillas string comillas coma comillas fundacion comillas dospuntos entero coma comillas direccion comillas dospuntos Allave LOCACION Cllave coma comillas ingresosAnio comillas dospuntos real coma comillas pyme comillas dospuntos boolean coma comillas link comillas dospuntos comillas URL comillas coma comillas deptos comillas dospuntos Acorchete DEPTOS Ccorchete coma LISTA 
    | Allave comillas nombreEmpresa comillas dospuntos comillas string comillas coma comillas fundacion comillas dospuntos entero coma comillas direccion comillas dospuntos Allave Cllave coma comillas ingresosAnio comillas dospuntos real coma comillas pyme comillas dospuntos boolean coma comillas link comillas dospuntos comillas URL comillas coma comillas deptos comillas dospuntos Acorchete DEPTOS Ccorchete coma LISTA 
    | Allave comillas nombreEmpresa comillas dospuntos comillas string comillas coma comillas fundacion comillas dospuntos entero coma comillas direccion comillas dospuntos Allave nulo Cllave coma comillas ingresosAnio comillas dospuntos real coma comillas pyme comillas dospuntos boolean coma comillas link comillas dospuntos comillas URL comillas coma comillas deptos comillas dospuntos Acorchete DEPTOS Ccorchete coma LISTA  
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
    char opcion[3];
    char buffer[256];
    char salir[10];
    
    
    printf ("Bienvenido al analizador lexico json \n");
    printf ("(1) ingresar texto manualmente\n(2) ingresar ruta de un .txt \n ctrl+c para cerrar \n");
    printf ("opcion: ");
    fgets(opcion, sizeof(opcion), stdin);  // Leer la opción usando fgets
    switch (opcion[0]) {
        case '1': 
            printf("opcion: %d", opcion[0]);
            printf("\n");
            printf("ingrese el texto a analizar (ctrl+C para terminar): \n");
            yyin = stdin;
            getchar();
            break;
    
        case '2': 
            printf("ingrese la ruta al archivo de texto: ");
            fgets(buffer, sizeof(buffer), stdin);  // Leer la ruta usando fgets
            buffer[strcspn(buffer, "\n")] = 0;  // Eliminar el carácter de nueva línea al final
            yyin = fopen(buffer, "r");
            if (!yyin) {
                perror("no se puede abrir el archivo");
                exit(EXIT_FAILURE);
            }
            else {
                // Leer y mostrar el contenido del archivo
                char ch;
                while ((ch = fgetc(yyin)) != EOF) {
                    putchar(ch);
                }
                rewind(yyin);
            }
            getchar();
            break;

        default:
            printf ("Opcion no valida, apriete cualquier letra para cerrar. \n");
            exit (EXIT_FAILURE);
            getchar();
     }
    if (yyparse() == 0 && parse_correcto) {
        printf("json correcto. \n");
        getchar();
    } else {
        printf("json incorrecto. \n");
        getchar();
    }
    getchar();

    if (yyin != stdin) {
        fclose(yyin);
        getchar();
    }
    getchar();
    return 0;
    getchar();
}
    

void yyerror(const char *s) {
    fprintf(stderr, "error en la linea %d: %s\n", Nlinea, s);
    getchar();

}



