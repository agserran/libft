/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 18:35:49 by agserran          #+#    #+#             */
/*   Updated: 2022/07/04 20:36:24 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	c;
	size_t	c2;
	char	*memory;

	c = ft_strlen(s1);
	c2 = ft_strlen(s2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	memory = ft_calloc(c + c2 + 1, sizeof(char));
	if (!memory)
		return (NULL);
	if (*s1 != 0)
		ft_memcpy(memory, s1, c);
	while(*s2 != 0)
		{
			memory[c] = *s2;
			c++;
			s2++;
		}
	
	return (memory);
}
