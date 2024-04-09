#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int c;
    int d;

    c = 0;
    d = 0;
    while((s1[c] != '\0') && n >= s1[c])
    {
        if(s1[c] == s2[d])
        {
            c++;
            d++;
        }
        return (s1[c] - s2[d]);
    }
    return (s1[c] - s2[d]);
}

int main (int argc, char **argv)
{
    if (argc != '3')
    {
        return (1);
    }
    size_t n;

    n = argv[3][0];
    printf("%d\n", ft_strncmp(argv[1], argv[2], n));
    return(0);    

}


