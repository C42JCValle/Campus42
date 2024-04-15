#include <stdio.h>
#include <string.h>

int main() 
{
    char origen[] = "ABCDEFGHIJ";
    char destino[] = "ABCDEFGHIJ";
    size_t n = 4;
    printf("%s", memmove(origen + 3, origen, n));
            
    return 0;
}
