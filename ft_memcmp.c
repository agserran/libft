/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 23:06:58 by agserran          #+#    #+#             */
/*   Updated: 2022/06/27 17:40:05 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		while (*(unsigned char *)s1 != '\0' && *(unsigned char *)s2 != '\0')
		{
			if (*(unsigned char *)s1 != *(unsigned char *)s2)
				return (*(unsigned char *)s1 - *(unsigned char *)s2);
			else
			{
				s1++;
				s2++;
				n--;
			}
		}
	}
	return (0);
}
