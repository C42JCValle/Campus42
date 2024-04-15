/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacel <gacel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:40:16 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/15 19:39:39 by gacel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *str, int c)
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
            return("NULL");
        }

    }
    return (char *)c;
 }

 #include <stdio.h>
int main (void)
{
    
printf("%s",ft_strrchr('Z',"ZJuan Carlos"));
return (0);
}
