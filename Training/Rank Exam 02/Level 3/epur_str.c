/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:25:45 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/22 20:14:45 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

int    ft_strlen (char *str)
{
    int c;
    
    c = 0;
    while (str[c] != '\0')
    {
        c++;
    }
    return (c);    
}

int ft_final (char *str)
{
    int c = ft_strlen(str);
    int i = 0;
    if (str[c] == ' ')
            return 0;
    return (1);   
}

void    ft_epur (char *str)
{
    int i;
    int last;

    i = 0;
    last = ft_strlen(str);
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
        
        if (spaces > 1)
        {
            i = i - spaces;            
        }
        if (spaces < 1)
        {
            ft_putchar(str[i]);
        }
        if (ft_final(str) == 0)
        {
            i++;
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
