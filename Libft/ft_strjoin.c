/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:51:48 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/24 17:28:07 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *dest, char const *src)
{
	size_t	dest_len;
	size_t	src_len;
	char	*ss;
	size_t	c;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	ss = (char *)malloc(dest_len + src_len + 1);
	c = 0;
	if (!ss)
		return (NULL);
	while (dest[c] != '\0')
	{
		ss[c] = dest[c];
		c++;
	}
	while (src[c - dest_len] != '\0')
	{
		ss[c] = src[c - dest_len];
		c++;
	}
	ss[c] = '\0';
	return ((char *)ss);
}
/*
int main()
{
    char const *src = "Hola";
    char const *dest = "Mundo";
    printf("dest: %s\n", ft_strjoin(src,dest));
    return (0);
}
*/
