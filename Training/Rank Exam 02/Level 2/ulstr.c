/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:12:59 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/13 20:12:59 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

void    ulstr (char *str)
{
    int c;

    c = 0;
    while (str[c] != '\0')
    {
        if (str[c] >= 'a' && str[c] <= 'z')
        {
            str[c] = str[c] - 32;
        }
        else if (str[c] >= 'A' && str[c] <= 'Z')
        {
            str[c] = str[c] + 32;
        }
        ft_putchar(str[c]);
        c++;        
    }
    ft_putchar ('\n');
}

int main (int argc, char **argv)
{
    if (argc != 2)
        return (-1);

    ulstr(argv[1]);
    return (0);    
}