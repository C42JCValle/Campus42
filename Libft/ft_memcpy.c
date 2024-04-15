/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacel <gacel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:08:04 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/15 17:52:51 by gacel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    if (dest == NULL || src == NULL)
    { 
        return NULL;
    }
    unsigned char * d = dest;                             //void src src= (char *)src
    const unsigned char *o = src;
    size_t i;
    
    i = 0;
    while(i < n)
    {
        d[i] = o[i];
        i++;
    }
    if (n < i)
    {
        d[i] = '\0';
    }
    return (dest);
}
/*
#include <stdio.h>
#include <string.h>



int main() {
    char buffer[] = "Hello, world!";
    ft_memcpy(buffer + 5, buffer, 7);
    printf("%s\n", buffer);
    return 0;
}
*/