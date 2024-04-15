#include <stdio.h>
#include <string.h>

int main() {
    char origen[] = "ABCDEFGHIJ";
    char destino[] = "BBBBBBBBBB";

    // Copiamos los datos del origen al destino
     char *result = memcpy(destino, origen, 7);

    printf("Destino: %s\n", result);

    return 0;
}
