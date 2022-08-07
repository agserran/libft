/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 01:16:00 by agserran          #+#    #+#             */
/*   Updated: 2022/08/07 21:23:11 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*memory;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	memory = (char *)ft_calloc(len + 1, sizeof(char));
	if (memory == NULL)
		return (NULL);
	if (start > len)
	{
		memory[0] = '\0';
		return (memory);
	}
	while (len > 0)
	{
		memory[i] = s[start];
		i++;
		start++;
		len--;
	}
	return (memory);
}
