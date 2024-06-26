/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:07:30 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/08 11:35:56 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	c;

	str = s;
	c = 0;
	while (c < n)
	{
		str[c] = '\0';
		c++;
	}
}
