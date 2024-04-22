/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:51:48 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/22 14:25:18 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_totallen(char const *s1, char const *s2)
{
    size_t len1;
    size_t len2;

    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    return (len1 + len2);
}

size_t ft_len2(char const *s2)
{
    size_t len2a;

    len2a = ft_strlen(s2);
    return (len2a);
    
}

