/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:04:32 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/19 18:04:32 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

char *ft_mezclar (char *s1, char *s2)
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
            return (1);
        }
        i++;
    }
    return (0);
}

int    ft_union (char *s1, char *s2)
{
    int c;
    int found;
    char *new;

    c = 0;
    new = ft_mezclar(s1, s2);

    while (new[c] != '\0')
    {
        found = ft_check(new,c);
        if (found == 0)
        {
            ft_putchar(new[c]);

        }
        c++;
    }
    return (0);
}

int main (int argc, char **argv)
{
    ft_union(argv[1], argv[2]);
    return 0;

}

