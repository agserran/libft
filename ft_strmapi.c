/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:05:30 by agserran          #+#    #+#             */
/*   Updated: 2022/08/06 19:37:33 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char	*memory;
	int		c;

	c = 0;
	if(!f || !s)
		return(NULL);
	memory = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	while(s[c] != '\0')
	{
		memory[c] = f(c, s[c]);
		c++;
	}
	return (memory);
}
