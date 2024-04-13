#include <stdio.h>

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t c = 0;
    size_t d = 0;
    size_t total_dest = 0;
    size_t total_src = 0;

  
    while (dest[c] != '\0' && c < size -1)
    { 
        c++;
    }
    total_dest = c;    

    while (c < size -1)
    {
        
        dest[c] = src[d];
        

        if(dest[c] == '\0')
        {
            return (d);
        }
        c++;
        d++;
    }
    total_src = d;

    dest[c] = '\0';

    return (d);
}