/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:55:19 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/19 12:07:42 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strdup(const char *str)
{
	size_t	i;
	size_t	len;
	char	*cpy;

	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	len = ft_strlen(str) + 1;
	cpy = malloc(len * sizeof(char));
	if (cpy == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	{
		return (cpy);
	}
