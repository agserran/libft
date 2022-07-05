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
	size_t	c;

	c = (size_t)start;
	if (!s)
		return (NULL);
	if (*s == '\0' || c > ft_strlen(s))
		return (ft_strdup(""));
	memory = (char *)ft_calloc(len + 1, sizeof(char));
	if (!memory)
		return (NULL);
	while (len > 0)
		{
			s[c] = *memory;
			c++;
			memory++;
			len--;
		}
	return (memory);
}
