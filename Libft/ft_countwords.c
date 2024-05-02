/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:16:46 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/02 12:42:18 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_countwords(char const *s, char c)
{
    size_t words;
    size_t n;
    
    words = 0;
    n = 0;
    while (s[n] != '\0')
    {
        if (s[n] == c)
        {
            words++;
            n++;
        }        
        n++;
    }
       return (words);
     
}
char    **ft_split(char const *s, char c)
{
    size_t nwords;
    size_t j;
    size_t i;
    size_t k;
    char **result;

    nwords = ft_countwords(*s, c);
    result = (char *)malloc(nwords + 1);
    j = 0;
    i = 0;
    k = 0;
    while (nwords > 0 && s[k] != c)
    {
        result[j][i] = s[k];
        i++;
        k++;
    }
    i = 0;
    if (s[k] == c)
    {
        j++;
        k++;
    }
    
    return (result);
        
}


int main ()
{
    char const *s = "Hola me llamo Juan Carlos.";
    char c = ' ';
    printf("%s",ft_split(s,c));
    return (0);    
}
