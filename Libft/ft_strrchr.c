/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:40:16 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/11 11:08:22 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strchr(char n, char *str)
{
    int c;

    c = 0;
    while(str[c] != '\0')
    {
        c++;
    }
    while(str[c] != n)
    {
        c--;
        if (c < 0)
        {
            return(0);
        }

    }
    return (c);
   

}

#include <stdio.h>
int main (void)
{
    
printf("%d",ft_strchr('Z',"ZJuan Carlos"));
return (0);
}
