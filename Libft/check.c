#include <stdio.h>
#include <string.h>
#include "libft.h"

int main (void)
{
    char destino[20] = "1234567890";
    const char origen[] = "ABCDEFG";
    size_t x;

    x = 8;
    char *resultado = ft_memcpy(destino,origen,x);
    
    printf("%s",resultado );
    return (0);
}