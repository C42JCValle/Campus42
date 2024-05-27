/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:36:14 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/27 20:25:25 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>


void    ft_putchar (char c)
{
    write (1, &c, 1);
}

char    *ft_minus (char *str)
{
    int c;

    c = 0;
    while (str[c] != '\0')
    {
        if (str[c] >= 'A' && str[c] <= 'Z')
        {
            str[c] += 32;
        }
        c++;
    }
    return (str);
}

void    ft_strcap (char *str)
{
    char *new;
    int c;

    new = ft_minus(str);
    c = 0;   
    while (str[c] != '\0')
    {
        if ((str[0] >= 'a' && str[0] <= 'z'))
        {
            str[0] -= 32;            
        }                   
        while (str[c] == ' ')
        {                 
            c++;
            if (str[c] >= 'a' && str[c] <= 'z')
            {
                str[c] -= 32;   
            }
        }
        c++;
    }
    c = 0;
    while (str[c] != '\0')
    {
        ft_putchar(str[c]);
        c++;
    }
    
}



int main (int argc, char **argv)
{
    int x;

    x = 1; 
    while (argv[x])
    {
        ft_strcap(argv[x]);
        x = x + 1;
        ft_putchar('\n');
    }
    
        
    return 0;
}