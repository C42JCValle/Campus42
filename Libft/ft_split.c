/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:13:49 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/25 19:37:23 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_split(char const *s, char c)
{
    size_t i;
    size_t j;
    size_t n;
    char *result;

    i = 0;
    j = 0;
    n = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            i++;
            n++;
        }
        i++;
    }
    result = (char *)malloc(i - n);
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            i++;
        }
        else
        {
            result[j] = s[i];
            j++;
            i++;
        }  
    
    }
    result [j+1] = '\0';   
    return (result);
}

int main ()
{
    char const str[] = "1010000";
    char c = '0';
    printf("%s\n", ft_split(str, c));
    return (0);
}