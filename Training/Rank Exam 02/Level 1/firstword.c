/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:50:06 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/28 17:59:28 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

void    ft_firstword (char *str)
{
    int c;

    c = 0;
    while (str[c] == ' ')
    {
        c++;
        if (str[c] == '\0')
        {
            ft_putchar('\n');
            return;
        }
    }
    while (str[c] != ' ')
    {
        ft_putchar (str[c]);
        c++;        
    }
    ft_putchar ('\n');
}

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putchar ('\n');
        return 1;
    }    
    ft_firstword(argv[1]);
    return 0;    
}