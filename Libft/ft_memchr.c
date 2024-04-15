/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 22:42:47 by jvalle-d              #+#    #+#         */
/*   Updated: 2024/04/15 11:01:11 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				b;
	unsigned char		x;

	str = s;
	b = 0;
	x = c;
	while (b < n)
	{
		if (str[b] == x)
		{
			return ((void *)(str + b));
		}
		b++;
	}
	return (NULL);
}
