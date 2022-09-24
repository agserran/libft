/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 12:15:10 by agserran          #+#    #+#             */
/*   Updated: 2022/08/06 17:57:09 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	if (*needle == '\0' || needle == haystack)
		return ((char *)haystack);
	while (haystack[i] && len > i)
	{
		c = 0;
		if (haystack[i] == needle[c])
		{
			while (haystack[i + c] == needle[c] && c + i < len
				&& haystack[i + c])
			{
				c++;
				if (needle[c] == '\0')
					return (&((char *)haystack)[i]);
			}
		}
		i++;
	}
	return (NULL);
}
