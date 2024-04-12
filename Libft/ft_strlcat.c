#include <stdio.h>

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t c = 0;
    size_t d = 0;
    size_t total_dest = 0;
    size_t total_src = 0;

    // Calcular la longitud actual de dest
    while (dest[c] != '\0' && c < size)
    { 
        c++;
    }
    total_dest = c;    

    // Copiar src a dest, teniendo en cuenta el tamaño del búfer y terminar con '\0'
    while (src[d] != '\0' && c < size - 1)
    {
        dest[c] = src[d];
        c++;
        d++;
    }
    total_src = d;

    dest[c] = '\0';

    size_t total_len = total_dest + total_src;

    return (total_len);
}

int main(void) 
{
    char src[] = "Hello, world!111111111111111111111111111111111111111111111111";
    char dest[] = "Esto es una prueba de copia strlcpy";
    size_t n = 143;

    size_t copied = ft_strlcat(dest, src, n);
    printf("dest: %s\n", dest);
    return 0;
}
