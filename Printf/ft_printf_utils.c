/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:51:01 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/27 14:03:34 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_strlen (char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	*ft_calloc(int num, int size)
{
	void	*p;
	char	*ptr;
	int	i;

	p = malloc(num * size);
	if (!p)
	{
		return (NULL);
	}
	ptr = (char *)p;
	i = 0;
	while (i < num * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (p);
}

int		ft_putstr (char *str)
{
	int i;
	if (!str)
		return (ft_putstr("(null)"));

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int 	ft_putchar (char c)
{
	write (1, &c, 1);
	return (1);
}
