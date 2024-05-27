/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 22:26:40 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/27 11:02:00 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

char    *ft_mix (char *s1, char *s2)
{
    int c;
    int i;

    c = 0;
    i = 0;
    while (s1[c] != '\0')
    {
        c++;
    }
    while (s2[i] != '\0')
    {
        s1[c] = s2[i];
        c++;
        i++;
    }
    s1[c] = '\0';
    return (s1);
}

int ft_check (char *str, int c)
{
    int i;

    i = 0;
    while (i < c)
    {
        if (str[i] == str[c])
        {
            return (0);
        }
        i++;
    }
    return (1);
}

void    ft_union (char *s1, char *s2)
{
    char *new;
    int i;

    new = ft_mix(s1, s2);
    i = 0;
    while (new[i] != '\0')
    {
        while (ft_check(new,i) == 0)
        {
            i++;
        }
        ft_putchar (new[i]);
        i++;
    }
    
}

int main (int argc, char **argv)
{
    printf("%s\n", argv[1]);
    //printf("%s\n", ft_union(argv[1], argv[2]));
    ft_union (argv[1], argv[2]);
      
    return 0;   
}



