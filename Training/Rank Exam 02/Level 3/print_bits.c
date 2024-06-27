/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:34:30 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/27 12:32:19 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_printbits (unsigned char octet)
{
	int i = 8;
	unsigned char bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write (1, &bit, 1);		
	}
}

void	print_reverse_bits (unsigned char octet)						//Imprime
{
	int i = 0;
	unsigned char bit;

	while (i < 8)
	{
		bit = (octet >> i & 1) + '0';
		write (1, &bit, 1);
		i++;		
	}
}

unsigned char	savebits (unsigned char octet) 
{
	int i = 8;
	int res = 0;
	
	unsigned char bit;

	while (i--)
	{
		res = res * 2 + (octet >> i & 1);			
	}
	return (res);
	
} 

unsigned char	savereversebits (unsigned char octet) 
{
	int i = 0;
	int res = 0;
	
	unsigned char bit;

	while (i < 8)
	{
		res = res * 2 + (octet >> i & 1);
		i++;		
	}
	return (res);
	
}

void	printswapbits (unsigned char octet)
{
	int i = 4;
	unsigned char bit;
	
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write (1, &bit, 1);				
	}
	i = 8;
	while (i-- > 4)
	{
		bit = (octet >> i & 1) + '0';
		write (1, &bit, 1);				
	}
}

unsigned char saveswapbits (unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int ft_atoi (char *str)
{
	int result = 0;
	int sign = 1;
	while (*str == ' ' || *str >= 9 && *str <= 13)
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);			
}

int main (int argc, char **argv)
{
	char n = argv[1][0];
	ft_printbits(n);
	write (1, "\n", 1);
	print_reverse_bits(n);
	printf("\n%c",savebits(n));
	printf("\n%c\n",savereversebits(n));
	printswapbits(n);
	printf("\n%c\n", saveswapbits(n));
	printf ("%d", ft_atoi("1121"));
	return 0;
}