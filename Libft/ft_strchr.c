/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacel <gacel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 22:39:20 by gacel             #+#    #+#             */
/*   Updated: 2024/04/12 12:57:35 by gacel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strchr(const char *s, int c) 
{
    while (*s != '\0') 
    {
        if (*s == c) // Corregir la comparación aquí
        {
            return (char *)s; // Convertir el puntero constante a no constante
        }
        s++;
    }
    return (NULL);
}
