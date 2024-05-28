/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:01:04 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/28 19:01:50 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

void number_prints(int number)
{
    char digits[10] = "0123456789";

    if (number > 9)
    {
        number_prints(number / 10);
    }
            write(1, &digits[number % 10], 1);
       
}

void    ft_fizzbuzz (int c)
{
    int i;

    i = 1;
    while (i <= c)
    {
        if (i % 5 == 0 && i % 3 == 0)
        {
            write (1,"FizzBuzz", 9);
        }
        else if (i % 5 == 0)
        {
            write (1,"Fizz", 5);            
        }
        else if (i % 3 == 0)
        {
            write (1,"Buzz", 5);
        }
        else
        {
            number_prints(i);
        }
        ft_putchar('\n');
        i++;          
    }  
}


int main (int argc, char **argv)
{
    int c = 15;
    
    ft_fizzbuzz(c);
    return 0;
}