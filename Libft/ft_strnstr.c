/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:52:02 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/17 13:14:48 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *string, const char *substring, size_t len)
{
	const char	*s;
	const char	*sub;
	size_t		temp_len;

	s = string;
	sub = substring;
	temp_len = len;
	if (*sub == '\0')
		return ((char *)s);
	while (*s != '\0' && len > 0)
	{
		while (*s != '\0' && *sub != '\0' && *s == *sub && len > 0)
		{
			s++;
			sub++;
			temp_len--;
		}
		if (*sub == '\0')
		{
			return ((char *)string);
		}
		s++;
		len--;
	}
	return (NULL);
}
/*#include <stdio.h>
int main() 
{
    const char *string = "Hello, world! This is a test string.";
    const char *substring = "H";
    size_t len = 30;

    char *result = ft_strnstr(string, substring, len);
    if (result != NULL) {
        printf("La subcadena '%s' se encontró en '%s'\n", substring, result);
    } else {
        printf("La subcadena '%s' no se encontró en '%s'\n", substring, string);
    }

    return 0;
}
*/
