/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cameltosnake.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:41:48 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/16 12:37:55 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (char c)//
{
    write (1, &c, 1);    
}

void    lword (char *str)
{
    int c;
    int content;

    c = 0;
    content = 0;
    while (str[c] != '\0')
    {
          if (str[c] >= 33 && str[c] <= 126)
        {
            
            content++;
        }
        c++;
    }
    
    if (content == 0)
    {
        ft_putchar('\n');
        return;        
    }
    content  = 0;
    while (str[c] != ' ' || content < 1)
    {
        if (str[c] >= 33 && str[c] <= 126)
        {
            
            content++;
        }
        c--;
    }
  
     while (str[c] != '\0')
    {
        while (str[c] == ' ')
        {
            c++;
            if (str[c] == '\0')
            return;
        }
        ft_putchar(str[c]);
        c++;
    }
   
        
}

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putchar('\n');
        return (-1);        
    }
    lword (argv[1]);
    ft_putchar ('\n');
    return (0);
}