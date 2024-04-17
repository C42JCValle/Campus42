#include "libft.h"

int main ()
{
    char string[] = "Juan Carlos"; // Usar un array en lugar de una cadena literal
    size_t numero = 3;
    size_t length = sizeof(string) / sizeof(string[0]); // Calcular la longitud de la cadena
    
    printf("Antes: %s\n", string); // Imprimir la cadena antes de poner a cero los primeros dígitos
    ft_bzero(string, numero);
    
    printf("Después: ");
    for (size_t i = 0; i < length; i++) {
        printf("%c", string[i]); // Imprimir cada carácter uno por uno
    }
    printf("\n"); // Imprimir un salto de línea al final
    
    return 0;
}
