/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:07:30 by jvalle-d             #+#    #+#             */
/*   Updated: 2024/04/15 11:03:43 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    char *str = s;
    size_t c;

    c = 0;
    while (c < n)
    {
        str[c] = '\0';
        c++;
    }
}


/*int main ()
{
    char string[] = "Juan Carlos"; // Usar un array en lugar de una cadena literal
    size_t numero = 3;
    size_t length = sizeof(string) / sizeof(string[0]); // Calcular la longitud de la cadena
    
    printf("Antes: %s\n", string); // Imprimir la cadena antes de poner a cero los primeros dígitos
    ft_bzero(string, numero);
    
    printf("Después: ");
    for (size_t i = 0; i < length; i++) {
        printf("%c", string[i]); // Imprimir cada carácter uno por uno
    }
    printf("\n"); // Imprimir un salto de línea al final
    
    return 0;
}
*/