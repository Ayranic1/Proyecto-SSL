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

FILE *htmlFile; // genera el HTML

void yy_scan_string(const char *str); // Declaración de yy_scan_string

void limpiarPantalla(); // Declaración de la función para limpiar la pantalla

void resetCounters(); // Declaración de la función para resetear los contadores
%}

%token llave1 llave2 comdo empresas dosp cor1 cor2 coma version firma_digital fundacion direccion nombreEmpresa year real link2
%token calle ciudad pais ingresosanuales pyme link departamentos Estring boolean nombre jefe subdep empleados edad cargo salario activo feccon proyectos estado fecini fecfin cargo2 status day mes null null2



%%


json:
    llave1 empres llave2 {fprintf(htmlFile, "</body>\n</html>\n");}
;
empres:
    empresas1
    | empresas2 version2 comdo firma_digital comdo dosp comdo string comdo
    | empresas2 comdo firma_digital comdo dosp comdo string comdo
    | empresas2 version1

    | empresas2 version2 comdo firma_digital comdo dosp nulo
    | empresas2 comdo firma_digital comdo dosp nulo
    | empresas2 version1

    | empresas2 version2 comdo firma_digital comdo dosp nulo
    | empresas2 version2 comdo firma_digital comdo dosp comdo string comdo
    //este hay que ordenar
;
Cempresa:
    llave1 Datos llave2 coma Cempresa
    | llave1 Datos llave2 
;
Datos:
    comdo nombreEmpresa comdo dosp comdo string {fprintf(htmlFile, "    <div class=\"empresa\">\n\n        <div class=\"flex-container\">\n            <div>\n                <h1>%s</h1>\n            </div>\n",$6);} comdo coma comdo fundacion comdo dosp year coma comdo direccion comdo dosp llave1 Dire llave2 coma comdo ingresosanuales comdo dosp real coma comdo pyme comdo dosp boolean coma comdo link comdo dosp comdo link2 {fprintf(htmlFile, "            <div class=\"botonSite\"><button class=\"button\" onclick=\"window.location.href='%s';\"><div class=\"bgContainer\"><span>Sitio Web</span><span>Sitio Web</span></div><div class=\"arrowContainer\"><svg width=\"25\" height=\"25\" viewBox=\"0 0 45 38\" fill=\"none\" xmlns=\"http://www.w3.org/2000/svg\"><path d=\"M43.7678 20.7678C44.7441 19.7915 44.7441 18.2085 43.7678 17.2322L27.8579 1.32233C26.8816 0.34602 25.2986 0.34602 24.3223 1.32233C23.346 2.29864 23.346 3.88155 24.3223 4.85786L38.4645 19L24.3223 33.1421C23.346 34.1184 23.346 35.7014 24.3223 36.6777C25.2986 37.654 26.8816 37.654 27.8579 36.6777L43.7678 20.7678ZM0 21.5L42 21.5V16.5L0 16.5L0 21.5Z\" fill=\"black\"></path></svg></div></button></div>\n</div>\n", $42);} comdo coma comdo departamentos comdo dosp cor1 dep cor2 

    | comdo nombreEmpresa comdo dosp comdo string {fprintf(htmlFile, "    <div class=\"empresa\">\n\n        <div class=\"flex-container\">\n            <div>\n                <h1>%s</h1>\n            </div>\n          </div>\n",$6);} comdo coma comdo fundacion comdo dosp year coma comdo direccion comdo dosp llave1 Dire llave2 coma comdo ingresosanuales comdo dosp real coma comdo pyme comdo dosp boolean coma comdo link comdo dosp nulo coma comdo departamentos comdo dosp cor1 dep cor2 
    | comdo nombreEmpresa comdo dosp comdo string {fprintf(htmlFile, "    <div class=\"empresa\">\n\n        <div class=\"flex-container\">\n            <div>\n                <h1>%s</h1>\n            </div>\n          </div>\n",$6);}  comdo coma comdo fundacion comdo dosp year coma comdo direccion comdo dosp nulo coma comdo ingresosanuales comdo dosp real coma comdo pyme comdo dosp boolean coma comdo link comdo dosp nulo coma comdo departamentos comdo dosp cor1 dep cor2 
    | comdo nombreEmpresa comdo dosp comdo string {fprintf(htmlFile, "    <div class=\"empresa\">\n\n        <div class=\"flex-container\">\n            <div>\n                <h1>%s</h1>\n            </div>\n",$6);} comdo coma comdo fundacion comdo dosp year coma comdo direccion comdo dosp nulo coma comdo ingresosanuales comdo dosp real coma comdo pyme comdo dosp boolean coma comdo link comdo dosp comdo link2 {fprintf(htmlFile, "            <div class=\"botonSite\"><button class=\"button\" onclick=\"window.location.href='%s';\"><div class=\"bgContainer\"><span>Sitio Web</span><span>Sitio Web</span></div><div class=\"arrowContainer\"><svg width=\"25\" height=\"25\" viewBox=\"0 0 45 38\" fill=\"none\" xmlns=\"http://www.w3.org/2000/svg\"><path d=\"M43.7678 20.7678C44.7441 19.7915 44.7441 18.2085 43.7678 17.2322L27.8579 1.32233C26.8816 0.34602 25.2986 0.34602 24.3223 1.32233C23.346 2.29864 23.346 3.88155 24.3223 4.85786L38.4645 19L24.3223 33.1421C23.346 34.1184 23.346 35.7014 24.3223 36.6777C25.2986 37.654 26.8816 37.654 27.8579 36.6777L43.7678 20.7678ZM0 21.5L42 21.5V16.5L0 16.5L0 21.5Z\" fill=\"black\"></path></svg></div></button></div>\n</div>\n", $38);} comdo coma comdo departamentos comdo dosp cor1 dep cor2 
    //este ordenado
;
dep:
    llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "        <h2>%s</h2>\n",$7);} comdo coma comdo jefe comdo dosp comdo string comdo coma comdo subdep comdo dosp cor1 subdepartamentos cor2 llave2
    | llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "        <h2>%s</h2>\n",$7);} comdo coma comdo jefe comdo dosp nulo coma comdo subdep comdo dosp cor1 subdepartamentos cor2 llave2 
    | llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "        <h2>%s</h2>\n",$7);} comdo coma comdo jefe comdo dosp comdo string comdo coma comdo subdep comdo dosp cor1 subdepartamentos cor2 llave2 coma dep
    | llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "        <h2>%s</h2>\n",$7);} comdo coma comdo jefe comdo dosp nulo coma comdo subdep comdo dosp cor1 subdepartamentos cor2 llave2 coma dep
    //este hay que ordenar
;
subdepartamentos:
    llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "        <h3>%s</h3>\n",$7);} comdo coma comdo jefe comdo dosp comdo string comdo coma comdo empleados comdo dosp cor1 {fprintf(htmlFile, "        <lu>\n");} emple {fprintf(htmlFile, "        </lu>\n");} cor2 llave2
    | llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "        <h3>%s</h3>\n",$7);} comdo coma comdo jefe comdo dosp comdo string comdo coma comdo empleados comdo dosp cor1 nulo {fprintf(htmlFile, "<p class=\"SDP\">Sin datos de empleados</p> \n");} cor2 llave2
    | llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "        <h3>%s</h3>\n",$7);} comdo coma comdo jefe comdo dosp nulo coma comdo empleados comdo dosp cor1 {fprintf(htmlFile, "        <lu>\n");} emple {fprintf(htmlFile, "        </lu>\n");} cor2 llave2
    | llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "        <h3>%s</h3>\n",$7);} comdo coma comdo jefe comdo dosp nulo coma comdo empleados comdo dosp cor1 nulo {fprintf(htmlFile, "<p class=\"SDP\">Sin datos de empleados</p> \n");} cor2 llave2

    | llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "        <h3>%s</h3>\n",$7);} comdo coma comdo jefe comdo dosp comdo string comdo coma comdo empleados comdo dosp cor1 {fprintf(htmlFile, "        <lu>\n");} emple {fprintf(htmlFile, "        </lu>\n");} cor2 llave2 subdepartamentos
    | llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "        <h3>%s</h3>\n",$7);} comdo coma comdo jefe comdo dosp comdo string comdo coma comdo empleados comdo dosp cor1 nulo {fprintf(htmlFile, "<p class=\"SDP\">Sin datos de empleados</p> \n");} cor2 llave2 subdepartamentos
   | llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "        <h3>%s</h3>\n",$7);} comdo coma comdo jefe comdo dosp nulo coma comdo empleados comdo dosp cor1 {fprintf(htmlFile, "        <lu>\n");} emple {fprintf(htmlFile, "        </lu>\n");} cor2 llave2 subdepartamentos
    | llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "        <h3>%s</h3>\n",$7);} comdo coma comdo jefe comdo dosp nulo coma comdo empleados comdo dosp cor1 nulo {fprintf(htmlFile, "<p class=\"SDP\">Sin datos de empleados</p> \n");} cor2 llave2 subdepartamentos
    //este hay que ordenar
;
emple:
    llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "<li class=\"empl\"><p class=\"nomEmpl\">%s</p><p class=\"Proyectos\">Proyectos</p></li></ul>\n",$7);} comdo coma comdo edad comdo dosp reales coma comdo cargo comdo dosp comdo cargo2 comdo coma comdo salario comdo dosp real coma comdo activo comdo dosp boolean coma comdo feccon comdo dosp comdo fecha comdo coma comdo proyectos comdo dosp cor1 {fprintf(htmlFile, "            <table>\n<tr class=\"clv-proy\">\n<td>Nombre</td>\n<td>Estado</td>\n<td>Fecha Inicio</td>\n<td>Fecha Fin</td>\n");} proyect {fprintf(htmlFile, "                </table>\n            </li>\n");} cor2 llave2
    | llave1 comdo nombre comdo dosp comdo string  comdo coma comdo edad comdo dosp nulo coma comdo cargo comdo dosp comdo cargo2 comdo coma comdo salario comdo dosp real coma comdo activo comdo dosp boolean coma comdo feccon comdo dosp comdo fecha comdo coma comdo proyectos comdo dosp cor1 {fprintf(htmlFile, "            <table>\n<tr class=\"clv-proy\">\n<td>Nombre</td>\n<td>Estado</td>\n<td>Fecha Inicio</td>\n<td>Fecha Fin</td>\n");} proyect {fprintf(htmlFile, "                </table>\n            </li>\n");} cor2 llave2
    | llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "<li class=\"empl\"><p class=\"nomEmpl\">%s</p><p class=\"Proyectos\">Proyectos</p></li></ul>\n",$7);} comdo coma comdo edad comdo dosp nulo coma comdo cargo comdo dosp comdo cargo2 comdo coma comdo salario comdo dosp real coma comdo activo comdo dosp boolean coma comdo feccon comdo dosp comdo fecha comdo coma comdo proyectos comdo dosp nulo {fprintf(htmlFile, "<p class=\"SDP\">Sin datos de proyectos</p> \n");} llave2
    | llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "<li class=\"empl\"><p class=\"nomEmpl\">%s</p><p class=\"Proyectos\">Proyectos</p></li></ul>\n",$7);} comdo coma comdo edad comdo dosp reales coma comdo cargo comdo dosp comdo cargo2 comdo coma comdo salario comdo dosp real coma comdo activo comdo dosp boolean coma comdo feccon comdo dosp comdo fecha comdo coma comdo proyectos comdo dosp nulo {fprintf(htmlFile, "<p class=\"SDP\">Sin datos de proyectos</p> \n");} llave2

    | llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "<li class=\"empl\"><p class=\"nomEmpl\">%s</p><p class=\"Proyectos\">Proyectos</p></li></ul>\n",$7);} comdo coma comdo edad comdo dosp reales coma comdo cargo comdo dosp comdo cargo2 comdo coma comdo salario comdo dosp real coma comdo activo comdo dosp boolean coma comdo feccon comdo dosp comdo fecha comdo coma comdo proyectos comdo dosp cor1 {fprintf(htmlFile, "            <table>\n<tr class=\"clv-proy\">\n<td>Nombre</td>\n<td>Estado</td>\n<td>Fecha Inicio</td>\n<td>Fecha Fin</td>\n");} proyect {fprintf(htmlFile, "                </table>\n            </li>\n");} cor2 llave2 emple
    | llave1 comdo nombre comdo dosp comdo string  comdo coma comdo edad comdo dosp nulo coma comdo cargo comdo dosp comdo cargo2 comdo coma comdo salario comdo dosp real coma comdo activo comdo dosp boolean coma comdo feccon comdo dosp comdo fecha comdo coma comdo proyectos comdo dosp cor1 {fprintf(htmlFile, "            <table>\n<tr class=\"clv-proy\">\n<td>Nombre</td>\n<td>Estado</td>\n<td>Fecha Inicio</td>\n<td>Fecha Fin</td>\n");} proyect {fprintf(htmlFile, "                </table>\n            </li>\n");} cor2 llave2 emple
    | llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "<li class=\"empl\"><p class=\"nomEmpl\">%s</p><p class=\"Proyectos\">Proyectos</p></li></ul>\n",$7);} comdo coma comdo edad comdo dosp nulo coma comdo cargo comdo dosp comdo cargo2 comdo coma comdo salario comdo dosp real coma comdo activo comdo dosp boolean coma comdo feccon comdo dosp comdo fecha comdo coma comdo proyectos comdo dosp nulo {fprintf(htmlFile, "<p class=\"SDP\">Sin datos de proyectos</p> \n");} llave2 emple
    | llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "<li class=\"empl\"><p class=\"nomEmpl\">%s</p><p class=\"Proyectos\">Proyectos</p></li></ul>\n",$7);} comdo coma comdo edad comdo dosp reales coma comdo cargo comdo dosp comdo cargo2 comdo coma comdo salario comdo dosp real coma comdo activo comdo dosp boolean coma comdo feccon comdo dosp comdo fecha comdo coma comdo proyectos comdo dosp nulo {fprintf(htmlFile, "<p class=\"SDP\">Sin datos de proyectos</p> \n");} llave2 emple
    //este ordenado
;
proyect:
    llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "<tr>\n <td>%s</td> \n",$7);} comdo coma comdo estado comdo dosp comdo status {fprintf(htmlFile, "<td>%s</td> \n",$15);} comdo coma comdo fecini comdo dosp comdo fecha {fprintf(htmlFile, "<td>%s</td> \n",$23);} comdo coma comdo fecfin comdo dosp comdo fecha {fprintf(htmlFile, "<td>%s</td> \n",$31);} comdo llave2 {fprintf(htmlFile, " \n</tr>\n");}
    | llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "<tr>\n <td>%s</td> \n",$7);} comdo coma comdo estado comdo dosp nulo {fprintf(htmlFile, "<td>-</td> \n");} coma comdo fecini comdo dosp comdo fecha {fprintf(htmlFile, "<td>%s</td> \n",$23);} comdo coma comdo fecfin comdo dosp comdo fecha {fprintf(htmlFile, "<td>%s</td> \n",$31);} comdo llave2 {fprintf(htmlFile, " \n</tr>\n");}
    | llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "<tr>\n <td>%s</td> \n",$7);} comdo coma comdo estado comdo dosp comdo status {fprintf(htmlFile, "<td>%s</td> \n",$15);} comdo coma comdo fecini comdo dosp comdo fecha {fprintf(htmlFile, "<td>%s</td> \n",$23);} comdo coma comdo fecfin comdo dosp nulo {fprintf(htmlFile, "<td>-</td> \n");} llave2 {fprintf(htmlFile, " \n</tr>\n");}
    | llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "<tr>\n <td>%s</td> \n",$7);} comdo coma comdo estado comdo dosp nulo {fprintf(htmlFile, "<td>-</td> \n");} coma comdo fecini comdo dosp comdo fecha {fprintf(htmlFile, "<td>%s</td> \n",$23);} comdo coma comdo fecfin comdo dosp nulo {fprintf(htmlFile, "<td>-</td> \n");} llave2 {fprintf(htmlFile, " \n</tr>\n");}

    | llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "<tr>\n <td>%s</td> \n",$7);} comdo coma comdo estado comdo dosp comdo status {fprintf(htmlFile, "<td>%s</td> \n",$15);} comdo coma comdo fecini comdo dosp comdo fecha {fprintf(htmlFile, "<td>%s</td> \n",$23);} comdo coma comdo fecfin comdo dosp comdo fecha {fprintf(htmlFile, "<td>%s</td> \n",$31);} comdo llave2 {fprintf(htmlFile, " \n</tr>\n");} proyect
    | llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "<tr>\n <td>%s</td> \n",$7);} comdo coma comdo estado comdo dosp nulo {fprintf(htmlFile, "<td>-</td> \n");} coma comdo fecini comdo dosp comdo fecha {fprintf(htmlFile, "<td>%s</td> \n",$23);} comdo coma comdo fecfin comdo dosp comdo fecha {fprintf(htmlFile, "<td>%s</td> \n",$31);} comdo llave2 {fprintf(htmlFile, " \n</tr>\n");} proyect
    | llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "<tr>\n <td>%s</td> \n",$7);} comdo coma comdo estado comdo dosp comdo status {fprintf(htmlFile, "<td>%s</td> \n",$15);} comdo coma comdo fecini comdo dosp comdo fecha {fprintf(htmlFile, "<td>%s</td> \n",$23);} comdo coma comdo fecfin comdo dosp nulo {fprintf(htmlFile, "<td>-</td> \n");} llave2 {fprintf(htmlFile, " \n</tr>\n");} proyect
    | llave1 comdo nombre comdo dosp comdo string {fprintf(htmlFile, "<tr>\n <td>%s</td> \n",$7);} comdo coma comdo estado comdo dosp nulo {fprintf(htmlFile, "<td>-</td> \n");} coma comdo fecini comdo dosp comdo fecha {fprintf(htmlFile, "<td>%s</td> \n",$23);} comdo coma comdo fecfin comdo dosp nulo {fprintf(htmlFile, "<td>-</td> \n");} llave2 {fprintf(htmlFile, " \n</tr>\n");} proyect
    //este ordenado
;
Dire:
   comdo calle comdo dosp comdo string comdo coma comdo ciudad comdo dosp comdo string comdo coma comdo pais comdo dosp comdo string comdo
   | comdo calle comdo dosp comdo string comdo coma comdo pais comdo dosp comdo string comdo coma comdo ciudad comdo dosp comdo string comdo
   | comdo ciudad comdo dosp comdo string comdo coma comdo pais comdo dosp comdo string comdo coma comdo calle comdo dosp comdo string comdo 
   | comdo ciudad comdo dosp comdo string comdo coma comdo calle comdo dosp comdo string comdo coma comdo pais comdo dosp comdo string comdo
   | comdo pais comdo dosp comdo string comdo coma comdo ciudad comdo dosp comdo string comdo coma comdo calle comdo dosp comdo string comdo
   | comdo pais comdo dosp comdo string comdo coma comdo calle comdo dosp comdo string comdo coma comdo ciudad comdo dosp comdo string comdo
   //este ya está en cualquier orden
;
fecha:
    year mes day
    //este no tocar ? (orden)
;
reales:
    real
    | day
;
string:
    Estring
    | Estring real
    | coma string 
    | Estring string
    | real string

;
nulo:
    null
    | llave1 null2 llave2
    | llave1 llave2
    | cor1 cor2
;
// para ordenar más fáciL:
empresas1:
    comdo empresas comdo dosp cor1 Cempresa cor2
;
empresas2:
    comdo empresas comdo dosp cor1 Cempresa cor2 coma
;
version1:
    comdo version comdo dosp comdo real comdo
    | comdo version comdo dosp comdo nulo comdo
;
version2:
    comdo version comdo dosp comdo real comdo coma
    | comdo version comdo dosp comdo nulo comdo coma
;





%%

int main() {
    int opcion;
    char input[9024];
    char filename[256];
    FILE *file;
    
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
    fprintf(htmlFile, "    <link rel=\"stylesheet\" href=\"styleTPI.css\">\n");
    fprintf(htmlFile, "\n");
    fprintf(htmlFile, "    <!-- Funtes de la página -->\n");
    fprintf(htmlFile, "    <link rel=\"preconnect\" href=\"https://fonts.googleapis.com\">\n");
    fprintf(htmlFile, "    <link rel=\"preconnect\" href=\"https://fonts.gstatic.com\" crossorigin>\n");
    fprintf(htmlFile, "    <link href=\"https://fonts.googleapis.com/css2?family=Ubuntu:ital,wght@0,300;0,400;0,500;0,700;1,300;1,400;1,500;1,700&display=swap\" rel=\"stylesheet\">\n");
    fprintf(htmlFile, "    <!-- Fuente ruso -->\n");
    fprintf(htmlFile, "    <link rel=\"preconnect\" href=\"https://fonts.googleapis.com\">\n");
    fprintf(htmlFile, "    <link rel=\"preconnect\" href=\"https://fonts.gstatic.com\" crossorigin>\n");
    fprintf(htmlFile, "    <link href=\"https://fonts.googleapis.com/css2?family=Russo+One&display=swap\" rel=\"stylesheet\">\n");
    fprintf(htmlFile, "    <!-- Fuente de los nombres de los empleados -->\n");
    fprintf(htmlFile, "    <link rel=\"preconnect\" href=\"https://fonts.googleapis.com\">\n");
    fprintf(htmlFile, "    <link rel=\"preconnect\" href=\"https://fonts.gstatic.com\" crossorigin>\n");
    fprintf(htmlFile, "    <link href=\"https://fonts.googleapis.com/css2?family=Poppins:ital,wght@0,100;0,200;0,300;0,400;0,500;0,600;0,700;0,800;0,900;1,100;1,200;1,300;1,400;1,500;1,600;1,700;1,800;1,900&family=Russo+One&display=swap\" rel=\"stylesheet\">\n");
    fprintf(htmlFile, "\n");
    fprintf(htmlFile, "</head>\n");
    fprintf(htmlFile, "<body>\n");
    fprintf(htmlFile, "    <header>\n");
    fprintf(htmlFile, "        <div class=\"flex-container empresaCab\">\n");
    fprintf(htmlFile, "            <div><img src=\"icon.png\" alt=\"Logo del grupo\" width=\"75px\" height=\"75px\"></div>\n");
    fprintf(htmlFile, "            <div class=\"txtCab\"><p class=\"nomGrupo\">синтаксис диких кодеров</p></div>\n");
    fprintf(htmlFile, "        </div>\n");
    fprintf(htmlFile, "    </header>\n");


    while (1) {
        memset(filename, 0, sizeof(filename));
        memset(input, 0, sizeof(input));

        limpiarPantalla();
        resetCounters(); // Resetear los contadores de línea y columna
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
                resetCounters(); // Resetear los contadores de línea y columna
                yy_scan_string(input); // Pasar el texto ingresado a Flex para el análisis
                parse_correcto = 1; // Resetear el estado del parser
                yyparse(); // Iniciar el análisis sintáctico
                if (parse_correcto) {
                    printf("Texto aceptado.\n");
                    fclose(htmlFile);
                } else {
                    printf("Texto rechazado.\n");
                    fclose(htmlFile);
                    remove("index.html");
                }
                break;
            case 2:
                printf("Ingrese el nombre del archivo: ");
                scanf("%s", filename); // Leer el nombre del archivo
                file = fopen(filename, "r");
                if (!file) {
                    fprintf(stderr, "Error: No se puede abrir el archivo ubicado en %s\n", filename);
                    fclose(htmlFile);
                    break;
                }
                resetCounters(); // Resetear los contadores de línea y columna
                yyin = file; // Pasar el archivo a Flex para el análisis
                parse_correcto = 1; // Resetear el estado del parser
                yyparse(); // Iniciar el análisis sintáctico
                if (parse_correcto) {
                    printf("Texto aceptado.\n");
                    fclose(htmlFile);
                } else {
                    printf("Texto rechazado.\n");
                    fclose(htmlFile);
                    remove("index.html");
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
    fprintf(stderr, "Error: %s en la linea %d, columna %d, alrededor de '%s'\n", s, Nlinea, Ncolum, yytext);
    parse_correcto = 0; // Marcar el texto como incorrecto si hay un error
    resetCounters();
}

void limpiarPantalla() {
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #else
        system("clear");
    #endif
}

void resetCounters() {
    Nlinea = 1;
    Ncolum = 1;
}