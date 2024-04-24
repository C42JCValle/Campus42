/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacel <gacel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:51:48 by jvalle-d          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/04/24 17:28:07 by jvalle-d         ###   ########.fr       */
=======
/*   Updated: 2024/04/23 21:42:10 by gacel            ###   ########.fr       */
>>>>>>> 370a3c721696279ebdb3f0f576917f9eaeca27a0
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

int main()
{
    char const *src = "HolaMundoMun";
    char const *dest = "Mundo";
    printf("dest: %s\n", ft_strjoin(src,dest));
    return (0);
}
<<<<<<< HEAD
*/
=======
>>>>>>> 370a3c721696279ebdb3f0f576917f9eaeca27a0
