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
sigma:
    |   calle 
    |   boolean
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



