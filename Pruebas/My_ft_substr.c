/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:57:25 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/22 13:16:30 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	c;
	size_t	j;
	size_t	z;
	char	*ss;
	char x;

	c = 0;
	j = 0;
	z = 0;
	ss = (char *)malloc(len + 1);
	x = (char)start;
	while (s[c] != '\0')
	{
		if (s[c] == x)
		{
			while (z < len)
			{
				ss[j] = s[c];
				j++;
				c++;
				z++;
			}
			ss[j] = '\0';
			return (ss);
		}
		c++;
	}
	return (NULL);
}

int main ()
{
    const char *s = "holograma";
    int start = (char) 'g';
    size_t len = 5;
    char *resultado = ft_substr(s,start,len);
    printf("%s",resultado);
    
}

