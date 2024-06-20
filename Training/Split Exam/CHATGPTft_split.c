#include <stdlib.h>
#include <stdio.h>

// Función para calcular la cantidad de palabras en la cadena
static int count_words(char *str) 
{
    int count = 0;
    int in_word = 0;

    while (*str) 
    {
        if (*str == ' ' || *str == '\t' || *str == '\n')
        {
            in_word = 0;
        }
        else if (in_word == 0) 
        {
            in_word = 1;
            count++;
        }
        str++;
    }

    return count;
}

// Función para copiar una palabra a un nuevo string
static char *word_dup(char *start, int len) 
{
    char *word = malloc((len + 1) * 1);
    if (!word) return NULL;

    int i = 0;
    while (i < len)
    {
        word[i] = start[i];
        i++;
    }
    word[len] = '\0';

    return word;
}

// Función principal que realiza la división de la cadena en palabras
char **ft_split(char *str) 
{ 
    int words = count_words(str);
    int index = 0;
    
    char **result = malloc((words + 1) * sizeof(char *));
    if (!result) 
        return NULL;

    while (*str) 
    {
        // Saltar espacios/tabulaciones/nuevas líneas
        while (*str == ' ' || *str == '\t' || *str == '\n') 
        {
            str++;
        }

        if (*str) 
        {
            char *start = str;
            int len = 0;

            // Encontrar la longitud de la palabra
            while (*str && *str != ' ' && *str != '\t' && *str != '\n') 
            {
                str++;
                len++;
            }

            // Copiar la palabra al array de resultados
            result[index] = word_dup(start, len);
            if (!result[index])
                return NULL;
            index++;
        }
    }
    result[index] = NULL;
    return result;
}


int main (int argc, char **argv)
{

    int i = 0;
    char **split = ft_split(argv[1]);

    while (split[i] != NULL)
    {
        printf("%s\n",split[i]);
        i++;
    }

}
