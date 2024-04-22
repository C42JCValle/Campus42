/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:18:33 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/22 14:40:51 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t c = 0, j = 0;
    char *ss;

    if (!s || start >= ft_strlen(s) || len == 0)
    {
        ss = (char *)malloc(1 * sizeof(char));
        if (!ss)
            return (NULL);
        ss[0] = '\0';
        return ss;
    }

    size_t substr_len = ft_strlen(s + start);
    if (substr_len < len)
        len = substr_len;

    ss = (char *)malloc((len + 1) * sizeof(char));
    if (!ss)
        return (NULL);

    while (s[c + start] && j < len)
    {
        ss[j] = s[c + start];
        j++;
        c++;
    }

    ss[j] = '\0';

    return (ss);
}

/*int main ()
{
    const char *s = "holograma";
    unsigned int start = (char) 'h';
    size_t len = 2;
    char *resultado = ft_substr(s,start,len);
    printf("%s",resultado);
    
}
*/