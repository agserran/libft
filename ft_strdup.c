/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:16:38 by agserran          #+#    #+#             */
/*   Updated: 2022/06/30 16:03:50 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*memory;
	size_t	c;

	c = ft_strlen(s1);
	memory = ft_calloc(c + 1, sizeof(char));
	if (!memory)
		return (NULL);
	ft_memcpy(memory, s1, c);
	return (memory);
}
