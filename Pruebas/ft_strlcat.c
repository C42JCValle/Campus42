#include <stdio.h>
#include <string.h>


int main() {
    char dest[] = "Hola";
    const char *src = "Mundo";
    size_t n = 3;

    // Concatenar la cadena src a dest usando my_strlcat
    size_t concatenated = strlcat(dest, src, sizeof(dest));

    // Imprimir el resultado
    printf("dest: %s\n", dest);
    printf("Tamaño de la cadena concatenada: %zu\n", concatenated);

    return 0;
}
