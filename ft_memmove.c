/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:22:26 by agserran          #+#    #+#             */
/*   Updated: 2022/06/27 18:05:02 by agserran         ###   ########.fr       */
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
		while (n--)
			d[n] = o[n];
	}
	else if (d < o)
		ft_memcpy(d, o, n);
	return (d);
}
