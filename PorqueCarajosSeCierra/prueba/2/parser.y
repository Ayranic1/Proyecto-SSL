%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern void yyerror(const char *s);
extern FILE *yyin;
int parse_correcto = 1; // 0 = incorrecto, 1 = correcto
extern int Nlinea;
extern int Ncolum;
extern char *yytext; // Declaración externa de yytext

void yy_scan_string(const char *str); // Declaración de yy_scan_string

void limpiarPantalla(); // Declaración de la función para limpiar la pantalla
%}

%token Allave Cllave 

%union { 
    char *string;
    int entero;
    char boolean[6];
}

%%

json:
    Allave Cllave
    ;

%%

int main() {
    int opcion;
    char input[1024];
    char filename[256];
    FILE *file;

    while (1) {
        limpiarPantalla();
        printf("Bienvenido al parser:\n");
        printf("1. Ingresar texto manualmente\n");
        printf("2. Abrir archivo de entrada\n");
        printf("3. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese el texto: ");
                scanf(" %[^\n]", input); // Leer el texto ingresado manualmente
                yy_scan_string(input); // Pasar el texto ingresado a Flex para el análisis
                parse_correcto = 1; // Resetear el estado del parser
                yyparse(); // Iniciar el análisis sintáctico
                if (parse_correcto) {
                    printf("Texto aceptado.\n");
                } else {
                    printf("Texto rechazado.\n");
                }
                break;
            case 2:
                printf("Ingrese el nombre del archivo: ");
                scanf("%s", filename); // Leer el nombre del archivo
                file = fopen(filename, "r");
                if (!file) {
                    fprintf(stderr, "Error: No se puede abrir el archivo ubicado en %s\n", filename);
                    break;
                }
                yyin = file; // Pasar el archivo a Flex para el análisis
                parse_correcto = 1; // Resetear el estado del parser
                yyparse(); // Iniciar el análisis sintáctico
                if (parse_correcto) {
                    printf("Texto aceptado.\n");
                } else {
                    printf("Texto rechazado.\n");
                }
                fclose(file);
                break;
            case 3:
                printf("Saliendo...\n");
                return 0;
            default:
                fprintf(stderr, "Opcion no valida. Intente nuevamente.\n");
        }

        printf("Presione Enter para continuar...");
        while (getchar() != '\n'); // Espera que el usuario presione Enter
        getchar();
    }

    return 0;
}

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s en la linea %d, columna %d\n", s, Nlinea, Ncolum);
    parse_correcto = 0; // Marcar el texto como incorrecto si hay un error
}

void limpiarPantalla() {
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #else
        system("clear");
    #endif
}
