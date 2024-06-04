/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:38:10 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/28 19:41:54 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

void    ft_ulstr (char *str)
{
    int c;

    c = 0;
    while (str[c] != '\0')
    {
        if (str[c] >= 'a' && str[c] <= 'z')
        {
            str[c] -= 32;
        }
        else if (str[c] >= 'A' && str[c] <= 'Z')
        {
                str[c] += 32; 
        }
        ft_putchar (str[c]);
        c++;
    }
}

int main (int argc, char **argv)
{
    ft_ulstr(argv[1]);
    return 0;
}
    