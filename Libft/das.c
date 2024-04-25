#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char    **ft_split(char const *s, char c)
{
    size_t i = 0;
    size_t j = 0;
    size_t segmentos = 1; // Suponiendo al menos un segmento
    char **resultado;

    // Contar el número de segmentos
    while (s[i] != '\0')
    {
        if (s[i] == c)
            segmentos++;
        i++;
    }

    // Asignar memoria para el arreglo de resultados
    resultado = (char **)malloc(sizeof(char *) * (segmentos + 1));
    if (!resultado)
        return NULL;

    // Dividir la cadena y almacenar segmentos
    i = 0;
    while (s[i] != '\0')
    {
        size_t longitud_segmento = 0;
        // Calcular la longitud del segmento actual
        while (s[i + longitud_segmento] != c && s[i + longitud_segmento] != '\0')
            longitud_segmento++;

        // Asignar memoria para el segmento actual
        resultado[j] = (char *)malloc(sizeof(char) * (longitud_segmento + 1));
        if (!resultado[j])
            return NULL;

        // Copiar el segmento en el arreglo de resultados
        for (size_t k = 0; k < longitud_segmento; k++)
            resultado[j][k] = s[i + k];
        resultado[j][longitud_segmento] = '\0';

        // Mover al siguiente segmento
        j++;
        i += longitud_segmento;
        if (s[i] == c)
            i++;
    }
    // Terminar el arreglo de resultados con NULL
    resultado[j] = NULL;
       
    return resultado;
}

int main()
{
    char const str[] = "Hello World mundo cruel que me tienes hasta los cojones";
    char c = ' ';
    char **resultado = ft_split(str, c);
    
    // Imprimir cada segmento
    for (int i = 0; resultado[i] != NULL; i++)
        printf("%s\n", resultado[i]);
    
    // Liberar memoria
    for (int i = 0; resultado[i] != NULL; i++)
        free(resultado[i]);
    free(resultado);
    
    return 0;
}
