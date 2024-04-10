/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:34:04 by gacel             #+#    #+#             */
/*   Updated: 2024/04/09 17:54:21 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        c = c - 32;
    }
    return (c);
}

#include <stdio.h>
int main(void)
{
    char c;

    c = ft_toupper('u');
    printf("%s\n",&c);
    return (0);
}