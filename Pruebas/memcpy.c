#include <stdio.h>
#include <string.h>

int main() {
    char origen[] = "Holaaaaaaaaaaaaaaaaaaaaaaaa";
    char destino[10];

    // Copiamos los datos del origen al destino
    memcpy(destino, origen, 5);

    printf("Destino: %s\n", destino);

    return 0;
}
