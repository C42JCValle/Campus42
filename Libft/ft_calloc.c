/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacel <gacel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:30:05 by gacel             #+#    #+#             */
/*   Updated: 2024/04/17 16:15:00 by gacel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t num, size_t size)
{
    void *p;
    p = malloc(num * size);
    
    if (!p)
        return NULL;

    char *ptr = (char *)p;
    size_t i = 0;
    while (i < num * size)
    {
        ptr[i] = 0;
        i++;
    }
    return (p);
}
