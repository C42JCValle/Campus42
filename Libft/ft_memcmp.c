/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:18:36 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/15 11:45:50 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *c1 = s1;
    const unsigned char *c2 = s2;
    size_t c;
    size_t d;

    c = 0;
    d = 0;
    while(c1[c] == c2[d] && c < n)
    {
        c++;
        d++;
    }
    if (c1[c] != c2[d])
    {
        return (c1[c] - c2[d]);
    }   
    return (0);
}
