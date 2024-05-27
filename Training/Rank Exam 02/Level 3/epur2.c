/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:45:27 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/27 12:02:19 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

char *ft_checkfinal (char *str)
{
    int c;
    int i;

    c = 0;
    i = 1;
    while (str[c] != '\0')
    {
        c++;
    }

    while (str[c - i] == ' ')
    {
        str [c - i] = str [c];
        i++;
    }
    return (str);
    
}

void    ft_epur (char *str)
{
    int c;
    char *new;

    c = 0;
    new = ft_checkfinal(str);
    while (str[c] != '\0')
    {
        if (str[c] == ' ' && str[c - 1] == ' ')
        {
            c++;          
        }
        else 
        {
            ft_putchar(str[c]);
            c++;
        }
    }
}
int main (int argc, char **argv)
{
    //printf ("%s\n", argv[1]);
    //printf ("%s\n",ft_checkfinal(argv[1]));
    ft_epur(argv[1]);
    
    return 0;
}