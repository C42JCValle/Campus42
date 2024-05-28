/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:12:33 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/28 19:25:30 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

void    ft_revprint (char *str)
{
    int c;
    
    c = 0;
    while (str[c] != '\0')
    {
        c++;
    }
    while (c--)
    {
        ft_putchar (str[c]); 
    }
}

int main (int argc, char **argv)
{
    ft_revprint(argv[1]);
    return 0; 
}
