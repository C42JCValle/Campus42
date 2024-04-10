#include<string.h>
#include<stdio.h>


char *ft_strchr(const char *s, int c) 
{
    // Iterar sobre la cadena hasta encontrar el carácter o llegar al final de la cadena
    while (*s != '\0') 
    {
        // Si el carácter actual coincide con el carácter buscado, devolver un puntero a este carácter
        if (*s == (char)c) 
        {
            return (char *)s;
        }
        // Avanzar al siguiente carácter en la cadena
        s++;
    }
    // Si el carácter no se encuentra, devolver NULL
    return NULL;
}

int main()
 {
    const char *cadena = "Juan Carlos";
    int caracter = 'C';
    char *ptr;

    ptr = ft_strchr(cadena, caracter);

    if (ptr != NULL) {
        printf("El caracter '%c' se encuentra en la posición %ld de la cadena.\n", caracter, ptr - cadena);
    } else {
        printf("El caracter '%c' no se encuentra en la cadena.\n", caracter);
    }

    return 0;
}
