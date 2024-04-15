#include <string.h>
#include <stdio.h>
#include <stddef.h>

int main() 
{
    const char *string = "Hello, world! This is a test string.";
    const char *substring = NULL;
    size_t len = 30;

    char *result = strnstr(string, substring, len);
    if (result != NULL) {
        printf("La subcadena '%s' se encontró en '%s'\n", substring, result);
    } else {
        printf("La subcadena '%s' no se encontró en '%s'\n", substring, string);
    }

    return 0;
}
    