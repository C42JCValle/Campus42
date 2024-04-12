/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacel <gacel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:04:30 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/12 12:08:24 by gacel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<stdlib.h>


void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *str = b;
    size_t i;
    

    i = 0;
    while(i < len && str[i] != '\0')
    {
        str[i] = (unsigned char)c;
        i++;
    }
    return (str);

}    
