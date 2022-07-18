/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:22:24 by agserran          #+#    #+#             */
/*   Updated: 2022/07/17 11:22:24 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	largo(long nu)
{
	size_t	c;

	c = 0;
	if (nu == 0)
	{
		c++;
		return(c);
	}
	if (nu < 0)
	{
		nu *= -1;
		c++;
	}
	while (nu > 0)
	{
		nu = nu / 10;
		c++;
	}
	return (c);
}
char	*ft_itoa(int n)
{
	char	*memory;
	long	num;
	size_t	len;

	num = n;
	len = largo(num);
	memory = (char *)ft_calloc(len + 1, sizeof(char));
	if(!s)
		return(NULL);
	if (n == 0)
		memory[0] = 48;
	if (num < 0)
	{
		memory[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		memory[len] = (num % 10) + 48;
		num = num / 10;
		len--;
	}
	return (memory);
}
