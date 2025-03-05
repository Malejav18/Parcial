#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LONGITUD_LINEA 1024

int contar_ocurrencias(const char *linea, const char *clave) {
    int conteo = 0;
    const char *ptr = linea;

    while ((ptr = strstr(ptr, clave)) != NULL) {
        conteo++;
        ptr += strlen(clave);
    }

    return conteo;
}

int main(int argc, char *argv[]) {
    const char *nombre_archivo = argv[1];
    const char *palabra_clave = argv[2];
    
    // Archivo para lectura
    FILE *archivo = fopen(nombre_archivo, "r");

    char linea[MAX_LONGITUD_LINEA];
    int conteo_total = 0;

    // Lee el archivo linea a linea
    while (fgets(linea, sizeof(linea), archivo) != NULL) {
        conteo_total += contar_ocurrencias(linea, palabra_clave);
    }

    fclose(archivo);

    printf("La palabra '%s' se repite %d veces en el texto.\n", palabra_clave, conteo_total);

    return 0;
}

