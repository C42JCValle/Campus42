#include <stdio.h>
#include <string.h>

int main() 
{
    char origen[] = "H@l@ Mund@";
    char destino[] = "Hola Mundo Cruel";
    size_t n = 7;
    printf("%s", (char *)memcpy(destino, origen, n));


    return 0;
}
