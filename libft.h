#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>

void                ft_bzero(void *s, size_t n)
int                 ft_isalnum(int c)
int                 ft_isalpha(int c)
i nt                 ft_isascii(int c)
int                 ft_isdigit(int c)
int                 ft_isprint(int c)
void                *ft_memset(void *s, int c, size_t n)
size_t              ft_strlen(const char *s)
void                *ft_memmove(void *dst, const void *src, size_t n)
void                *ft_memcpy(void *dst, const void *src, size_t n)
int                 ft_tolower(int c)
int                 ft_toupper(int c)



#endif