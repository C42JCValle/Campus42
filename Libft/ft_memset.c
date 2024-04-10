/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:04:30 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/10 18:13:44 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *str = b;
    size_t i;
    

    i = 0;
    while(i < len && str[i] != '\0')
    {
        str[i] = (unsigned char)c;
        i++;
    }
    return (str);
   
}    

int main (void)
{
    char datos[] = "AAAA";
    int c = 'Z';
    size_t len = 17;
    printf("%s", ft_memset(datos, c, len));
    return (0);
    
}