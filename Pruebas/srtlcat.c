#include <string.h>
#include <stdio.h>

int main()
 {
    char dest[20] = "Hello, ";
    const char *src = "1234567890";
    size_t n;

    n = 7;
    // Concatenar la cadena src a dest usando my_strlcat
    strncat(dest, src, n);

    // Imprimir el resultado
    printf("dest: %s\n", dest);
    printf("Tamaño de la cadena concatenada: %zu\n", n);

    return 0;
}
