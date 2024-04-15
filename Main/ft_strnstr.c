#include <stdio.h>
int main() 
{
    const char *string = "Hello, world! This is a test string.";
    const char *substring = "E";
    size_t len = 30;

    char *result = ft_strnstr(string, substring, len);
    if (result != NULL) {
        printf("La subcadena '%s' se encontró en '%s'\n", substring, result);
    } else {
        printf("La subcadena '%s' no se encontró en '%s'\n", substring, string);
    }

    return 0;
}