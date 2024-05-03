/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 11:37:01 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/03 18:41:02 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{   
    char *numero;
    int i;
    int int_min;
    
    numero = ft_itoa(n);
    i = 0;
    int_min = -2147483648;
    if (n == int_min)
     {
        ft_putstr_fd("-2147483648", fd); // Imprimir directamente el valor mínimo
        free(numero);
        return;
    }
    while ( numero[i] != '\0') 
    {
        ft_putchar_fd(numero[i],fd);
        i++;
    }
    free(numero);
}