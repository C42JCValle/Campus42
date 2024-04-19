/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   troll.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:24:07 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/19 14:21:53 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write (1,&c,1);
}

int    ft_print_vocal(char *str, char vocal)
{
    int i;

    i = 0;

    if (vocal != 'a' && vocal != 'e' && vocal != 'i' && vocal != 'o' && vocal != 'u' && vocal != 'A' && vocal != 'E' && vocal != 'I' && vocal != 'O' && vocal != 'U') // Si la "vocal" no es una vocal salimos.
    {
        return (1);        
    }
      
    if (vocal == 'A' || vocal == 'E' || vocal == 'I' || vocal == 'O' || vocal == 'U') // Transformamos todas las vocales mayusculas en minusculas.
    {
        vocal = vocal + 32;        
    }
                  
    while (str[i] != '\0')
    {
           if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') //Por si encontramos vocales mayusculas en el string las pasamos a minusculas.
           {
                str[i] = str[i] + 32;
           }
           if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') //Convierte las vocales minusculas en la vocal elegida por el usuario (serían todas porque ya previamente pasamos todas a minus.)
           {
                str[i] = vocal;
           }
           if (str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u') //Transforma el primer caracter del string en Mayusculas si esta es una vocal.
           {
                str[i] = str[i] - 32;
           }
            ft_putchar(str[i]);
            i++;                                             
    }                  
         return 0;         
}

int main (int argc, char **argv)
{
  
    if (argc != 3)
    {
        return (-1);
    }
  
    ft_print_vocal(argv[1], argv[2][0]);
    return (0);
}
