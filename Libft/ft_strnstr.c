/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:52:02 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/15 12:23:13 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strnstr(const char *string, const char *substring, size_t len)
{
    const char *s = string;
    const char *sub = substring;
    
    if(*sub == '\0')
    {
        return (char *)s;
    }
    while(*s != '\0' && len > 0)
    {
        while(*s != '\0' && *sub != '\0' && *s == *sub && len > 0 )
        {
            s++;
            sub++;
            len--;
        }
        if (*sub)
    }
    
}