#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c) 
{
    int x;

    x = 0;
    while(s[x] != '\0')
    {
        if(x == (char)c)
        {
            return ((char *)s);
        }
        x++;
    }
    return (NULL);
}

int main (void)
{
    int x = (char)'n';
    
    printf("%s", ft_strchr("Juan", x));
    return (0);
}
