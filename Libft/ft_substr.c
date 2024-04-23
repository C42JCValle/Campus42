/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacel <gacel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:57:25 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/23 14:08:54 by gacel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	c;
	char	*ss;
	
	c = 0;
	ss = (char *)malloc(len + 1);
    
    if (start > ft_strlen(s))               //Si la posición que buscamos es mayor que la cadena, la longuitud que vamos a extraer será 0 esto también provoca que el espacio de memoria reservado sea 1 solo para el nulo.
        len = 0;
    if (len > ft_strlen(s) - start)         //Si la longuitud de la extración es mayor a la longuitud del puntero menos la posición de la coincidencia longuitud será el máximo posible string - coincidencia.
        len = ft_strlen(s) - start;
    ss = (char *)malloc (len + 1);          //Se reserva el espacio necesario para len + 1 para el '\0'
    if(!s || !ss)                           //Si el string es Nulo de inicio, o el resultado también lo es retornará nulo.
        return (NULL);  
    while (s[c] != '\0' && c < len - 1)
    {                                       //He modificado para dar espacio al nulo.(Comentar)
        ss[c] = s[start];
        start++;
        c++;
    }
    ss[c] = '\0';
    return (ss);       
}

int main ()
{
    const char *s = "hola";
    int start = 12;
    size_t len = 9;
    char *resultado = ft_substr(s,start,len);
    printf("\n%s\n\n",resultado);
    
}