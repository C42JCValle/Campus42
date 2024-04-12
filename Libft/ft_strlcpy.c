#include <stdio.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size) 
{
    size_t i = 0;
    size_t src_len = 0;


    while (i < size - 1 && src[i] != '\0') 
    {
        dest[i] = src[i];
        i++;
    }
 
    dest[i] = '\0';
  
        while (src[src_len] != '\0') 
    {
        src_len++;
    }
    
    return (src_len);
}

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
