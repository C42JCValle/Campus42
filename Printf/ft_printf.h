/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:55:01 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/27 14:06:21 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define	FT_PRINTF_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int ft_strlen (char* str);
void	*ft_calloc (int num, int size);
int ft_putstr (char *str);
int ft_putchar (char c);
int ft_printf (const char *str, ...);


#endif