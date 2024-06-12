/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:56:42 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/17 18:12:54 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

int ft_strlen(char *str)
{
    int c;
    int d;

    c = 0;
    while(str[c] != '\0')
        c++;
    return (c);    
}

char    *ft_strrev(char *str)
{
    int c;
    int d;
    char swap;
    
    c = 0;
    d = ft_strlen(str) - 1;
    while (c < d)
    {
        swap = str[c];
        str[c] = str[d];
        str[d] = swap;
        c++;
        d--;   
        
    }
    return (str);
}

int main (int argc, char **argv)
{
    printf("%s\n", ft_strrev(argv[1]));  
    return (0);  
       
}