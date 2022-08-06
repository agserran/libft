/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 01:16:00 by agserran          #+#    #+#             */
/*   Updated: 2022/08/06 19:06:08 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*memory;
	size_t	c;
	size_t	i;

	i = 0;
	c = (size_t)start;
	if (!s)
		return (NULL);
	if (*s == '\0' || c > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	memory = (char *)ft_calloc(len + 1, sizeof(char));
	if (memory == NULL)
		return (NULL);
	if (start >= len)
	{
		memory[0] = '\0';
		return (memory);
	}
	while (len > 0)
		{
			memory[i] = s[c];
			i++;
			c++;
			len--;
		}
	return (memory);
}
