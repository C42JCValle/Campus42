/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:40:16 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/17 12:51:55 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	while (*s != '\0')
	{
		s++;
	}
	str = s;
	while (*str >= 0)
	{
		if (*str == c)
		{
			return ((char *)str);
		}
		str--;
	}
	return (NULL);
}
/*int main(void)
{
    char *datos = ft_strrchr("Juan", 'r');
    
    printf("%p\n", datos);
    return 0;
}
*/
