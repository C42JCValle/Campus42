/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   powerof2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:02:47 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/27 11:40:44 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>


int	ft_power(unsigned int c)
{
    if ((c & 1) == 0)               
        return 1;
    else
        return 0;
}     

int main (int argc, char **argv)
{
    unsigned int test;
    
    test = atoi (argv[1]);    
    printf("%d\n", ft_power(test));
    return 0;
}