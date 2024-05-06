/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacel <gacel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:00:06 by gacel             #+#    #+#             */
/*   Updated: 2024/05/05 17:30:32 by gacel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
    write (1, &c, 1);
}

void    rev_print (char *str)
{
     int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    i--;
    while (i >= 0)
    {
        ft_putchar(str[i]);
        i--;
    }
    ft_putchar('\n');
}

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putchar('\n');
        return (0);
    }
    rev_print(argv[1]);
    return (0);  
    
}