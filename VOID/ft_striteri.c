/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:35:29 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/02 19:18:14 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void modify_character(unsigned int index, char *c)
{
    index = 0;
    c[index] -= 32; // Modifica el carácter sumando su índice
}
void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    while(s[i] != '\0')
   {
        f(i, &s[i]);
        i++;
   }
}

int main() {
    char str[] = "ehllo";
    printf("Cadena original: %s\n", str);

    // Aplicar la función modify_character a cada carácter de la cadena
    ft_striteri(str, &modify_character);

    printf("Cadena modificada: %s\n", str);

    return 0;
}