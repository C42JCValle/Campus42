#include <string.h>
int main (void)
{
    char datos[4] = "AAAA";
    int c = 'Z';
    size_t len = 17;
    printf("%s", ft_memset(datos, c, len));
    return (0);
    
}