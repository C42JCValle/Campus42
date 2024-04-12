#include <stdio.h>

size_t my_strlcat(char *dest, const char *src, size_t size) {
    size_t dest_len = 0;
    size_t src_len = 0;

    // Calcular la longitud de dest
    while (dest_len < size && dest[dest_len] != '\0') {
        dest_len++;
    }

    // Calcular la longitud de src
    while (src[src_len] != '\0') {
        src_len++;
    }

    // Calcular el espacio disponible en dest (incluyendo el carácter nulo)
    size_t space_left = size - dest_len - 1;

    // Si no hay espacio disponible, devolver la longitud de dest + la longitud de src
    if (space_left == 0) {
        return dest_len + src_len;
    }

    // Copiar la cadena src a dest, teniendo en cuenta el espacio disponible
    size_t i = 0;
    while (i < space_left && src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }

    // Añadir el carácter nulo al final de dest
    dest[dest_len + i] = '\0';

    // Devolver la longitud total de la cadena concatenada
    return dest_len + src_len;
}

int main() {
    char dest[20] = "Hello, ";
    const char *src = "WorldWorldworld!";

    // Concatenar la cadena src a dest usando my_strlcat
    size_t concatenated = my_strlcat(dest, src, sizeof(dest));

    // Imprimir el resultado
    printf("dest: %s\n", dest);
    printf("Tamaño de la cadena concatenada: %zu\n", concatenated);

    return 0;
}
