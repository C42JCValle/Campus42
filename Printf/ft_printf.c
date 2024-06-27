/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:59:12 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/27 18:05:48 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf (const char *str, ...)
{
	va_list arg;								// Ni la mas pajolera.
	int i;										// Contador de la impresion
	int count;

	i = 0;
	count = 0;
	va_start(arg, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%' &&  )
	}
	
}