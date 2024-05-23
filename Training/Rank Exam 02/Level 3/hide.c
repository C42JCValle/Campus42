
#include <stdio.h>

int    ft_hide (char *s1, char *s2)
{
    int c;
    int i;
    int x;

    c = 0;
    i = 0;
    x = 0;
    while (s2[c] != '\0')
    {       
        while (s1[c] != s2[i])
        {
            i++;
            if (s1[c] == s2)                        
        }                   
       
  
    }
 
    
}

int main (int argc, char **argv)
{
   
    printf("%d\n",ft_hide (argv[1], argv[2]));
    return 0;
}