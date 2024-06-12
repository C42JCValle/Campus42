# include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

int    ft_strlen (char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

void    ft_wdmatch (char *s1, char *s2)
{
    int c;
    int i;  
    int x;

    c = 0;
    i = 0;
    x = 0;

    while (s2[c] != '\0')
    {
        if (s1[i] == s2[c])
        {
            i++;
            if (i == ft_strlen(s1))
            {
                while(s1[x] != '\0')
                {
                    ft_putchar(s1[x]);
                    x++;
                }
            }
        }
        c++;
    }
}

int main (int argc, char **argv)
{
    ft_wdmatch(argv[1], argv[2]);
    return 0;
}
