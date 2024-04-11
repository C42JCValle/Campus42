#include <string.h>

int main (void)
{
    char destino[] = "1234567";
    const char *origen = "ABCDEFG";
    size_t x;

    x = 8;
    printf("%s", ft_memcpy(destino,origen,x));
    return (0);
}