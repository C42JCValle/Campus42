/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacel <gacel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:08:04 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/12 12:56:35 by gacel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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
