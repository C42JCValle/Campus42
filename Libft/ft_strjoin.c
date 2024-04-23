/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacel <gacel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:51:48 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/23 15:11:24 by gacel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *dest,char const *src)
{
	size_t	dest_len;
	size_t	src_len;
	char *ss;
    size_t c;
   
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	ss = (char *)malloc((dest_len + src_len)+ 1);
    c = 0;

    while (dest[c] < dest_len)
    {
        ss[c] = dest[c];
        c++;
    }
    ss[c] = '\0';
    return (char *)ss;
}

int main()
{
    char const *src = "Hola";
    char const *dest = "Mundo";
    printf("dest: %s\n", ft_strjoin(src,dest));
    return (0);
}

