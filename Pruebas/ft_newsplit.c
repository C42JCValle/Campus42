/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacel <gacel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:28:23 by gacel             #+#    #+#             */
/*   Updated: 2024/05/05 19:37:15 by gacel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

size_t  ft_nwords(const char *str, char c)
{
    size_t words;

    words = 0;
    while (*str)
    {
        if (*str != c)
        {
            words++;
            while (*str && *str != c)
                str++;
        }
        
        else
            str++;
    }
    return (words);
        
}

int main (int argc, char **argv)
{
    printf("%ld",ft_nwords(argv[1],argv[2][0]));
    return (0);
    
}