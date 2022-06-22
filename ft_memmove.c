/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:22:26 by agserran          #+#    #+#             */
/*   Updated: 2022/06/22 18:31:34 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*o;

	d = (unsigned char *)src;
	o = (unsigned char *)dst;
	if (d > o)
	{
		while (len--)
			d[len] = o[len];
	}
	else if (d < o)
		ft_memcpy(d, s, len);
	return (d);
}
