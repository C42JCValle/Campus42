#include <stddef.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = dest;
    const unsigned char *s = src;

    if (dest == src || n == 0)
        return dest;

    // Verificar si las regiones de memoria se solapan
    if (d < s && d + n > s)
    {
        // Copiar de src a dest de principio a fin
        while (n--)
            *d++ = *s++;
    }
    else if (s < d && s + n > d)
    {
        // Copiar de src a dest de fin a principio
        d += n;
        s += n;
        while (n--)
            *--d = *--s;
    }
    else
    {
        // No hay solapamiento, copiar directamente
        while (n--)
            *d++ = *s++;
    }

    return dest;
}
/*#include <stdio.h>
#include <string.h>



int main() {
    char buffer[] = "Hello, world!";
    ft_memmove(buffer + 5, buffer, 7);
    printf("%s\n", buffer);
    return 0;
}
*/