/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:46:43 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/23 18:46:14 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#  include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

char     *ft_checkfinal (char *str)
{
    int c;
    int i;
    
    c = 0;
    i = 1;
    while (str[c] != '\0')
    {
        c++;
    }
    while (str[c - i] == ' ')
    {
        str[c - i] = str[c];
        i++;
    }        
    return (str);    
}


void    ft_expand (char *str)
{
    int i;
    int space;
    
    i = 0;
    str = ft_checkfinal(str);    
    while (str[i] != '\0' && str[i] == ' ') //hasta aqui dom
    {
        i++;
    }
    while (str[i] != '\0')
    {  
        if (str[i] != ' ')
        {
            ft_putchar(str[i]);
            i++;
        }
        else if (str[i] == ' ')
        {
            space = 3;
            while (space--)
            {
                ft_putchar(str[i]);                
            }
            while (str[i] != '\0' && str[i] == ' ')
            {
                i++;
            }                      
        }        
    }
}

int main (int argc, char **argv)
{
    ft_expand (argv[1]);
    return (0); 
    
}
    