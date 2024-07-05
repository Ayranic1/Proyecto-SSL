#include <stdio.h>

int main() {
    
    FILE *fptr;

    // Create a file
    fptr = fopen("json.html", "w");

    if (fptr == NULL) {
        printf("Error al crear el archivo!\n");
        return 1;
    }

    printf("Se creo documento HTML\n");
    //fprintf(fptr, "\n");
    fprintf(fptr, "<!DOCTYPE html>\n");
    fprintf(fptr, "<html>\n");
    fprintf(fptr, "<head>\n");
    fprintf(fptr, "    <meta charset=\"UTF-8\">\n");
    fprintf(fptr, "    <title>синтаксис диких кодеров</title>\n");
    fprintf(fptr, "<link rel=\"icon\" type=\"image/x-icon\" href=\"/images/favicon.ico\">\n");
    fprintf(fptr, "</head>\n");
    fprintf(fptr, "<body>\n");
    fprintf(fptr, "    <h1>Grupo: xd</h1>\n");
    fprintf(fptr, "    <p>Este es un parrafo de ejemplo.</p>\n");
    fprintf(fptr, "    <a href=\"https://www.ejemplo.com\">Este es un enlace</a>\n");
    fprintf(fptr, "    <img src=\"https://th.bing.com/th/id/OIP.0pornW8uMAKiF6RiTgOS6AHaD3?rs=1&pid=ImgDetMain\" alt=\"Descripción de la imagen\">\n");
    fprintf(fptr, "</body>\n");
    fprintf(fptr, "</html>\n");

    // Close the file
    fclose(fptr);

    getchar();
    return 0;
}
