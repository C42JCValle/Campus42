/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 22:39:20 by jvalle-d             #+#    #+#             */
/*   Updated: 2024/04/15 11:02:08 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

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

int main(void)
{
    char *datos = ft_strchr("Juan", '3');
    
    printf("%p\n", datos);
    return 0;
}
