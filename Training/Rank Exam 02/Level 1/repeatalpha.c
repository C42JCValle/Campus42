/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeatalpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:03:23 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/28 19:11:38 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

void    ft_repeat (char *str)
{
    int c;
    int times;
    
    c = 0;
    while (str[c] != '\0')
    {
        times = (str[c] + 1) - 'a';
        while (times >= 1)
        {
            ft_putchar (str[c]);
            times--;
        }
        c++;           
    }
}

int main (int argc, char **argv)
{
    ft_repeat (argv[1]);
    return 0;
}