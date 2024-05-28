/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:25:52 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/28 19:34:28 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

void    ft_rot13 (char *str)
{
    int c;

    c = 0;
    while (str[c] != '\0')
    {
        if (str[c] >= 'a' && str[c] <= 'm' || str[c] >= 'A' && str[c] <= 'M')
        {
            str[c] += 13;
        }
        else if (str[c] >= 'n' && str[c] <= 'z' || str[c] >= 'N' && str[c] <= 'Z')
        {
            str[c] -= 13;
        }
        ft_putchar (str[c]);
        c++;        
    }
    
}

int main (int argc, char **argv)
{
    ft_rot13(argv[1]);
    return 0;a
    
}