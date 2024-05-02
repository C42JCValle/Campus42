/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:35:29 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/02 19:08:35 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*int main() {
    char str[] = "hello";
    printf("Cadena original: %s\n", str);

    // Aplicar la función modify_character a cada carácter de la cadena
    ft_striteri(str, &modify_character);

    printf("Cadena modificada: %s\n", str);

    return 0;
}
*/