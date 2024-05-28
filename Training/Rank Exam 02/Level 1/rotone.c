/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:34:41 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/28 19:36:28 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

void    ft_rotone (char *str)
{
    int c;

    c = 0;
    while (str[c] != '\0')
    {
        if (str[c] >= 'a' && str[c] <= 'y' || str[c] >= 'A' && str[c] <= 'Y')
        {
            str[c] += 1;
        }
        else if (str[c] >= 'Z' || str[c] <= 'z')
        {
            str[c] -= 25;
        }
        ft_putchar (str[c]);
        c++;        
    }
    
}

int main (int argc, char **argv)
{
    ft_rotone(argv[1]);
    return 0;
    
}