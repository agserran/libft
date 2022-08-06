/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 23:06:58 by agserran          #+#    #+#             */
/*   Updated: 2022/08/06 17:15:50 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	if (n == 0)
		return ((int)NULL);
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
			i++;
		else
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
	}
	if (i != n)
		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	return (0);
}
