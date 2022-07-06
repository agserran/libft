/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:23:37 by agserran          #+#    #+#             */
/*   Updated: 2022/07/04 20:06:20 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>

void		ft_bzero(void *s, size_t n);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
void		*ft_memset(void *s, int c, size_t n);
size_t		ft_strlen(const char *s);
void		*ft_memmove(void *dst, const void *src, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
int			ft_tolower(int c);
int			ft_toupper(int c);
char        *ft_strchr(const char *s, int c);
char        *ft_strrchr(const char *s, int c);
int         ft_strncmp(const char *s1, const char *s2, size_t n);
void        *ft_memchr(const void *s, int c, size_t n);
int         memcmp(const void *s1, const void *s2, size_t n);
void		*ft_calloc(size_t count, size_t size);
int			ft_atoi(char *str);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strdup(const char *s1);
char		*ft_strjoin(char const *s1, char const *s2);
void 		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void 		ft_putendl_fd(char *s, int fd);

#endif
