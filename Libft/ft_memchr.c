/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacel <gacel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 22:42:47 by gacel             #+#    #+#             */
/*   Updated: 2024/04/14 23:15:52 by gacel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *str = s;
    unsigned char x = c;
    size_t b;

    b = 0;
    while (b < n)
    {
       
        if (str[b] == x)
        {
            return (void *) (str + b);
        }
         b++;
    }
    
    return (NULL);
    
}

int main ()
{
    const unsigned char *cadena = "Juan Carlos";
    char buscar = 'a';
    size_t bits = 12;   
    void  *result = ft_memchr(cadena, buscar, bits);
    printf("%p",result);
    return (0);
    
}

    
    
    
    
    
    
