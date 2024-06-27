/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoibase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:32:49 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/27 13:17:29 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoibase (char *str, int base)
{
	int i = 0;
	int result = 0;
	int sign = 1;
	
	if (str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
 		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;	
	}
	i = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (base <= 10)
	{
		while (str[i] != '\0')
		{
			result = result * base + str[i] - '0';
			i++;
		}
	}
	else if (base > 10)
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'f')
				result = result * base + ((str[i] - 'a') + 10);			
			else if (str[i] >= '0' && str[i]<= '9')
				result = result * base + str[i] - '0';
			i++;
		}
	}
	return (result * sign);
}




int main (int argc, char **argv)
{
	int base = ft_atoibase(argv[2],10);
	int resultado = ft_atoibase(argv[1],base);
	printf("%d\n",resultado);
	return 0;	
}