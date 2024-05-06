/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   troll.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacel <gacel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:01:31 by gacel             #+#    #+#             */
/*   Updated: 2024/05/05 19:05:37 by gacel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    *troll(char *str, char c)
{
    int x;

    x = 0;
    while (str[x] != '\0')
    {
        if (str[x] == 'a' || str[x] == 'e' || str[x] == 'i' || str[x] == 'o' || str[x] == 'u')
        {
            str[x] = c; 
        }
        if (str[x] == 'A' || str[x] == 'E' || str[x] == 'I' || str[x] == 'O' || str[x] == 'U')
        {
            str[x] = c; 
        }
        x++;
    }
    return (str);
}

int main (int argc, char **argv)
{
    if (argc != 3)
        return (-1);

    printf("%s",troll(argv[1], argv[2][0]));
    return (0);
}