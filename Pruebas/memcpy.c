#include <stdio.h>
#include <string.h>

int main() {
    char origen[] = "ABCDEFG";
    char destino[20] = "1234567890";

    // Copiamos los datos del origen al destino
    memcpy(destino, origen, 8);

    printf("Destino: %s\n", destino);

    return 0;
}
