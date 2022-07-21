/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:23:14 by agserran          #+#    #+#             */
/*   Updated: 2022/06/22 18:42:47 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	 *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	c;

	c = 0;
	if (n == 0 || dst == src)
		return (dst);
	while (c < n)
	{
		((char *)dst)[c] = ((char *)src)[c];
		c++;
	}
	return (dst);
}
