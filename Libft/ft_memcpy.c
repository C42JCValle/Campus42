/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:08:04 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/15 11:01:41 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char * d = dest;                             //void src src= (char *)src
    const unsigned char *o = src;
    size_t i;
    size_t j;
    
   
    i = 0;
    j = 0;
    if (dest == NULL || src == NULL)
    { 
        return NULL;
    }
    
    while(i < n)
    {
        d[i] = o[i];
        i++;
    }
    j = i;
    if (n < j)
    {
        d[i] = '\0';
    }
    return (dest);
}
