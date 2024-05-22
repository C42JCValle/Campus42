/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:15:33 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/22 18:59:02 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

int ft_atoi (char *str)
{
    int result;
    int sign;

    result = 0;
    sign = 1;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
    {
        str++;
    }
    if (*str == '-')
    {
        sign = -1;
    }
    if (*str == '+' || *str == '-')
    {
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - '0';
        str++;
    }
    return (sign * result);
}

int ft_checkprime (int c)
{
    int prime_cont = 0;
    int i  = 1;
    
    while (i <= c)
    {
        if (c % i == 0)
            prime_cont++;
        i++;    
    }
    if (prime_cont == 2)
    {
        return (1);
    }
    return (0);
}

int    ft_addprime(int c)
{
    int i;

    i = 0;
    while (c >= 0)
    {
        if (ft_checkprime(c) == 1)
        {
            i++;
        }
        c--;
    }
    return (i);
}

int main (int argc, char **argv)
{
    int n;
    int result;
    n = ft_atoi(argv[1]);

    result = ft_addprime(n);
    
    printf("%d\n", result);
    return (0);
}
