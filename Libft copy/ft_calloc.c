/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacel <gacel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:30:05 by gacel             #+#    #+#             */
/*   Updated: 2024/04/19 12:13:00 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*p;
	char	*ptr;
	size_t	i;

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
