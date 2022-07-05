/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 01:16:00 by agserran          #+#    #+#             */
/*   Updated: 2022/07/04 01:16:00 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*memory;

	if (!s)
		return (NULL);
	memory = (char *)ft_calloc(len + 1, sizeof(char));
	if (!memory)
		return (NULL);
	if (*s)
	{
		while (len > 0)
		{
			if (*s != start)
			{
				s++;
			}
			if (*s == start)
			{
				*memory = *s;
				s++;
				memory++;
				len--;
			}
			return (memory);
		}
	}
}
