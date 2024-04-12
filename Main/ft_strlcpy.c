#include <string.h>
#include <stddef.h>

int main(void) 
{
    char src[] = "Hello, world!";
    char dest[] = "Esto es una prueba de copia strlcpy";
    size_t n;

    n = 4;
    ft_strlcpy(dest, src, n);
    printf("dest: %s\n", dest);
    return 0;
}
