#include <string.h>


int main ()
{
    const unsigned char *cadena = "Juan Carlos";
    char buscar = 'a';
    size_t bits = 12;   
    void  *result = ft_memchr(cadena, buscar, bits);
    printf("%p",result);
    return (0);
    
}

    
    
    
    
    
    
