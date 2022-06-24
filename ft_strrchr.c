/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:07:15 by agserran          #+#    #+#             */
/*   Updated: 2022/06/23 00:07:15 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;
    int len;

    i = 0;
    while(s[i])
    {
        i++;
    }
    len = i;
    while (len != 0 && s[len] != c)
        len--;
    if (s[len] == (char)c)
        return((char *)&s[len]);
    return (NULL);
}