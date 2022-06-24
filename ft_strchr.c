/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 23:49:07 by agserran          #+#    #+#             */
/*   Updated: 2022/06/22 23:49:07 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    char *tmp;

    tmp = (char *)s;
    while (*tmp != c)
    {
        if (*tmp == '\0')
            return (NULL);
        tmp++;
    }
    return (tmp);
}