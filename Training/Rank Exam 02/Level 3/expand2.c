/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 21:13:24 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/26 22:23:48 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

char    *ft_cleanfinal (char *str)
{
    int i;
    int c;

    i = 0;
    c = 1;
    while (str[i] != '\0')
    {
        i++;
    }
    while (str[i - c] == ' ')
    {
        str[i - c] = str[i];
        c++;         
    }
    return (str);
    
}

void    ft_expand (char *str)
{
    char *new;
    int c;
    int space;
    
    space = 3;
    new = ft_cleanfinal(str);
    while (new[c]!= '\0')
    {
        
        if (new[c] != ' ')
        {
            ft_putchar(new[c]);
            c++;
            
        }
        else if (new[c] == ' ')
        {
            space = 3;
            while (space--)
            {
                ft_putchar(' ');
            }
            while (new[c] != '\0' && new[c] == ' ')
            {
                c++;
            }
            
        }
       
    }
}




#include <stdio.h>
int main (int argc, char **argv)
{
    ft_expand(argv[1]);
    return 0;    
}