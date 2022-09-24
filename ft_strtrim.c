/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:32:45 by agserran          #+#    #+#             */
/*   Updated: 2022/08/06 19:11:38 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*memory;
	size_t	i;
	size_t	size;

	memory = NULL;
	if (s1 && set)
	{
		i = 0;
		size = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[size -1] && ft_strrchr(set, s1[size -1]) && size > i)
			size--;
		memory = (char *)ft_calloc((size - i + 1), sizeof(char));
		if (memory == NULL)
			return (NULL);
		ft_strlcpy(memory, &s1[i], size - i + 1);
	}
	return (memory);
}
