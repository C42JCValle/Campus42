#include <string.h>
#include <stddef.h>
#include "libft.h"

int main() 
{
    const char src[] = "Hola";
    char dest[20] = "Mundo";
    size_t n = 10;

    size_t copied = ft_strlcat(dest, src, n);
    printf("dest: %s\n", dest);
    return (0);
}