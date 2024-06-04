/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchandreplace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:43:46 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/28 19:47:19 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

void    ft_search (char *str, char n, char i)
{
    int c;

    c = 0;
    while (str[c] != '\0')
    {
        if (str[c] == n)
        {
            str[c] = i;
        }
        ft_putchar (str[c]);
        c++;
    }
}

int main (int argc, char **argv)
{
    ft_search (argv[1],argv[2][0],argv[3][0]);
    return 0;
}