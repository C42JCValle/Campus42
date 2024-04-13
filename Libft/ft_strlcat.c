    /* ************************************************************************** */
    /*                                                                            */
    /*                                                        :::      ::::::::   */
    /*   ft_strlcat.c                                       :+:      :+:    :+:   */
    /*                                                    +:+ +:+         +:+     */
    /*   By: gacel <gacel@student.42.fr>                +#+  +:+       +#+        */
    /*                                                +#+#+#+#+#+   +#+           */
    /*   Created: 2024/04/14 00:07:37 by gacel             #+#    #+#             */
    /*   Updated: 2024/04/14 00:29:55 by gacel            ###   ########.fr       */
    /*                                                                            */
    /* ************************************************************************** */

    #include <stdio.h>
    #include <string.h>

    size_t ft_strlcat(char *dest, const char *src, size_t size) 
    {
        size_t dest_len = 0;
        size_t total_len = 0;
        size_t src_len = 0;
        size_t i = 0;

    // Calcular la longitud actual de dest
    while (dest[dest_len] != '\0') 
    { 
        dest_len++;
    }

    // Calcular la longitud de src
    while (src[src_len] != '\0') 
    {
        src_len++;
    }

    total_len = dest_len + src_len; // Longitud total después de la concatenación

    // Si size es 0, devolver la longitud total sin modificar dest
    if (size == 0) 
    {
        return total_len;
    }

    // Concatenar src en dest hasta que se alcance size - 1 o src llegue a su fin
    while (src[i] != '\0' && dest_len + i < size - 1) 
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0'; // Asegurar que dest esté nul-terminado

    // Si total_len es mayor o igual que size, devolver size - 1
    if (total_len >= size) 
    {
        return size - 1;
    }

    // De lo contrario, devolver total_len
    return total_len;
}




    #include <string.h>
    #include <stddef.h>
    #include "libft.h"

    int main() 
    {
        const char src[] = "Hola";
        char dest[10] = "Mundo";
        size_t n = 3;

        size_t copied = ft_strlcat(dest, src, n);
        printf("dest: %s\n", dest);
        return (0);
    }