#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c) 
{
    while (*s != '\0') 
    {
        if (*s == c) // Corregir la comparación aquí
        {
            return (char *)s; // Convertir el puntero constante a no constante
        }
        s++;
    }
    return NULL;
}

int main(void)
{
    char *datos = ft_strchr("Juan", 'a');
    
    printf("%s\n", datos);
    return 0;
}
