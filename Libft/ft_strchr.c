/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:40:16 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/09 19:47:17 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strchr(char n, char *str)
{
    int c;

    c = 0;
    while(str[c] != '\0')
    {
        if(str[c] == n)
        {
            return (c);
        }
        c++;    
    }
    return (0);
}

#include <stdio.h>
int main (void)
{
    
printf("%d",ft_strchr('C',"Juan Carlos"));
return (0);
}
