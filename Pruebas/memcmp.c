#include <stdio.h>
#include <string.h>

int main ()
{
    char c1[] = "Hola";
    char c2[] = "Holo";
    size_t n = 6;
    int result = memcmp(c1,c2,n);
    printf("%d",result);
    return (0);

}