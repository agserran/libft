/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:22:24 by agserran          #+#    #+#             */
/*   Updated: 2022/08/06 16:52:55 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(long nu)
{
	size_t	len;

	len = 0;
	if (nu == 0)
	{
		len++;
		return(len);
	}
	if (nu < 0)
	{
		nu *= -1;
		len++;
	}
	while (nu > 0)
	{
		nu = nu / 10;
		len++;
	}
	return (len);
}
char	*ft_itoa(int n)
{
	char	*memory;
	size_t	len;
	int		i;

	if (n == -2147483648)
		return (ft_strdup( "-2147483648"));
	len = ft_len(n);
	memory = (char *)ft_calloc(len + 1, sizeof(char));
	if(!memory)
		return(NULL);
	if (n == 0)
		memory[0] = '0';
	if (n < 0)
	{
		memory[0] = '-';
		n *= -1;
	}
	i = len - 1;
	while (n > 0)
	{
		memory[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	return (memory);
}
