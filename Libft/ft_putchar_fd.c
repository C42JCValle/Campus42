/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:51:37 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/04/25 20:02:51 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
}
int main() {
    FILE *archivo = fopen("prueba.txt", "w");
    if (archivo == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }

    int descriptor = fileno(archivo);
    if (descriptor == -1) {
        perror("Error al obtener el descriptor de archivo");
        return 1;
    }

    // Ahora puedes usar el descriptor de archivo con funciones como write
    write(descriptor, "Hola mundo\n", 11);

    fclose(archivo);
    return 0;
}