/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:22:38 by agserran          #+#    #+#             */
/*   Updated: 2022/08/06 16:59:50 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  i;

    i = 0;
    if (!dstsize)
        return (ft_strlen(src));
    while (src[i] != '\0' && i < (dstsize - 1))
    {
        dst[i] = *((char *)src + i);
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}
