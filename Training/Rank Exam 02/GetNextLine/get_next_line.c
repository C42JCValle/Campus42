#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_strjoin(char const *dest, char const *src)
{
	size_t	dest_len = ft_strlen(dest);
	size_t	src_len = ft_strlen(src);
	char	*ss = (char *)malloc(dest_len + src_len + 1);
	size_t	c = 0;

	if (!ss)
		return (NULL);
	while (dest[c] != '\0')
	{
		ss[c] = dest[c];
		c++;
	}
	while (src[c - dest_len] != '\0')
	{
		ss[c] = src[c - dest_len];
		c++;
	}
	ss[c] = '\0';
	return ss;
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/*char	*ft_joinfree(char *buffer, char *aux)
{
	char *temp;

	temp = ft_strjoin(buffer, aux);
	free(buffer);
	return (temp);
}
*/

char	*ft_readbuffer(int fd, char *buffer)
{
	char *aux;
	int bsize;

	bsize = 1;
	while (bsize > 0 && !ft_strchr(buffer, '\n'))
	{
		aux = (char *)malloc(BUFFER_SIZE + 1);
		if (!aux)
			return (NULL);
		bsize = read(fd, aux, BUFFER_SIZE);
		if (bsize < 0)
		{
			free(aux);
			return (NULL);
		}
		aux[bsize] = '\0';
		if (bsize == 0 && ft_strlen(buffer) == 0)
		{
			free(aux);
			return (NULL);
		}
		buffer = ft_strjoin(buffer, aux);
		free(aux);
		aux = NULL;
	}
	return (buffer);
}

char	*ft_readline(char *buffer)
{
	int i;
	char *linea;

	i = 0;
	while (buffer[i] != '\n' && buffer[i] != '\0')
	{
		i++;
	}
	linea = (char *)malloc(i + 1);
	if (!linea)
		return (NULL);
	i = 0;
	while (buffer[i] != '\n' && buffer[i] != '\0')
	{
		linea[i] = buffer[i];
		i++;
	}
	linea[i] = '\0';
	return (linea);
}

char    *get_next_line (int fd)
{
    int i;
    static char    *buffer;
    char *linea;

    if (!buffer)                                            //Si buffer no existe reservamos espacio en memoria para crearlo.
    {
        buffer = (char *)malloc(BUFFER_SIZE + 1);           // Tamaño del buffer + 1 para '\0'    
        if (!buffer)
            return NULL;           
    }
    i = 0;
    buffer = ft_readbuffer (fd, buffer);                    //buffer recoge el resultado de la funcion readbuffer esta recoge la info del fd y la aloja en buffer.    
    linea = ft_readline (buffer);                           // aquí la funcion readline devolverá un puntero cuando encuentre \n en la info de buffer.
    while (buffer[i] != '\n' && buffer[i] != '\0')          //buscamos el siguiente salto de línea o null.
    {
        i++;
    }
    buffer = buffer + i + 1;                                //adelantamos el puntero hasta la siguiente línea o final. ('/n' + 1).    
    return (linea);                                         //devolvemos la línea filtrada para su impresion en la main.
    
}

void	ft_finallinea(char *linea)
{
	free(linea);
}



int main (int argc, char **argv)
{
    int fd;                                 //file descriptor
    char *linea;                            // puntero para almacenar la linea
    
    fd = open ("archivo.txt", O_RDONLY);     //fd es un int resultante de la funcion open, flag O_RDONLY para abrir con permisos de lectura    
    linea = get_next_line(fd);              // llamamos a get_next_line que nos devolverá la línea    


    printf("Línea 1:%s\n",linea);
    linea = get_next_line (fd);
	
    printf("Línea 2:%s\n",linea);
    linea = get_next_line (fd);

	printf("Línea 3:%s\n",linea);
    linea = get_next_line (fd);


    printf("Línea 4:%s\n",linea);
    linea = get_next_line (fd);
	
    printf("Línea 5:%s\n",linea);
    linea = get_next_line (fd);

    close(fd);
    return (0);
}