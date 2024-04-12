#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <stddef.h>

// Funciones de caracteres
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_tolower(int c);
int ft_toupper(int c);

// Funciones de memoria
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);


// Funciones de cadena
char *ft_strchr(const char *s, int c);
size_t ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
