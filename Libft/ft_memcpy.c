/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:08:04 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/11 14:25:09 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char * d = dest;                             //void src src= (char *)src
    const unsigned char *o = src;
    size_t i;
    
   
    i = 0;

    if (dest == NULL || src == NULL)
    { 
        return NULL;
    }
    
    while(i < n)
    {
        d[i] = o[i];
        i++;
    }
 
    return (dest);
}
int main (void)
{
    char destino[] = "1234567";
    const char *origen = "ABCDEFG";
    size_t x;

    x = 8;
    printf("%s", ft_memcpy(destino,origen,x));
    return (0);
}