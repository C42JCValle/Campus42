#include <stdio.h>
#include <string.h>

int main() {
    char cadena[] = "Hola Mundo!";
    
    // Movemos la parte "Mundo!" de la cadena a la izquierda en 6 posiciones
    memmove(cadena + 2, cadena + 6, strlen(cadena + 8) + 1);

    printf("Resultado: %s\n", cadena);

    return 0;
}
