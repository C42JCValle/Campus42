/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:52:13 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/11 12:02:11 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int main (void)
{
    char datos[10];
    
    memset(datos, 'X', 9);
    printf("%s\n",datos);
    memset(datos,'Y' , 11);
    printf("%s\n",datos);
    memset(datos, 'Z', 5);
    printf(datos,"%s\n",datos);
    return (0);
}