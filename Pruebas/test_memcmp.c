#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const char *str;
    const char *ptr;
    
    str = s1;
    ptr = s2;
    size_t c;
    size_t j;

    c = 0;
    j = 0;
    while(c < n)
    {
        if (str[c] != ptr[j])
        {
            return (str[c] - ptr[j]);
        }
        c++;
        j++;  
    }
        return (str[c] - ptr[j]);
}


int main(void)
{
    const char *s1 = "hola";
    const char *s2 = "holoeae";
    size_t n = 3;
    int result;    

    result = ft_memcmp(s1, s2, n);
    printf("Resultado:%d\n",result);
    return (0);
}