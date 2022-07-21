/ * ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:48:35 by agserran          #+#    #+#             */
/*   Updated: 2022/07/21 12:48:35 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strc(const char *s, char c)
{
	int	c1;
	int	cstr;

	c = 0;
	cstr = 0;
	if (s[c1] == c)
		cstr--;
	while(s[c1] != '\0')
	{
		if (s[c1] == c && s[c1 + 1] != c || s[c1 + 1] == '\0')
			cstr++;
		c1++;
	}
	cstr++;
	return (cstr);
}
char	*mr(const char *s, char c)
{
	int		i;
	char	*memory;

	i = 0;
	while (s[i] != c && s[i])
	{
		i++;
	}
	memory = (char *)ft_calloc(i + 1, sizeof(char));
	if (!memory)
		return (NULL);
	i = 0;
	while (s[i] != c && s[i])
	{
		memory[i] = s[i];
		i++;
	}
	return (memory);
}
char	**ft_split(char const *s, char c)
{
	int		co;
	int		st;
	char	**memory;

	co = 0;
	if (!s)
		return (NULL);
	st = strc(s, c);
	memory = (char **)ft_calloc(st + 1, sizeof(char *));
	if (!tabla)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if(*s && *s != c)
		{
			memory(co) = mr(s, c);
			co++;
			while(*s && *s != c)
				s++;
		}
	}
	return (memory);
}