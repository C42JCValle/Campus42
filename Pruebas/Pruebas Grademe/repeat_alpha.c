/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacel <gacel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:52:58 by gacel             #+#    #+#             */
/*   Updated: 2024/05/05 16:51:10 by gacel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    *repeat_alpha(char *str)
{
    int i;
    int repeat;

    i = 0;
    repeat = 0;
    
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            repeat = str[i] - 'a';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            repeat = str[i] - 'A';
        }
        else
        {
            repeat = 0;
        }
        while (repeat >= 0)
        {
            ft_putchar(str[i]);
            repeat--;
        }
        
        i++;
    }        

}


int main (int argc, char **argv)
{
    if (argc != 2)
        return(-1);
    repeat_alpha(argv[1]);
    return (0);
        
    
}