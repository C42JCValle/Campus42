/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:25:45 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/23 13:11:50 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

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

void    ft_epur (char *str)
{
    int i;
    int last;

    i = 0;

    str = ft_checkfinal(str);
    if (str[0] == ' ')
    {
        i++;
    }
       
    while (str[i] != '\0')
    {
        int spaces = 0;
               
        if (str[i] == ' ' && str[i - 1] == ' ')
        {
            spaces++;          
        }
        if (spaces < 1)
        {
            ft_putchar(str[i]);
        }
        i++;      
    }
}    

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putchar('\n');
        return (1);
    }

    ft_epur(argv[1]);
    ft_putchar ('\n');
    return (0);
}
