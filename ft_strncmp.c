/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 22:39:33 by agserran          #+#    #+#             */
/*   Updated: 2022/06/24 22:39:33 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  c;

    c = 0;

    while (s1[c] != '\0' && s2[c] != '\0' && (s1[c] == s2[c]))
    {
        c++;
    }
    if ((s1[c] != s2[c]) && (c < n))
        return ((unsigned char)s1[c] - (unsigned char)s2[c]);
    return (0);
}