/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:38:16 by agserran          #+#    #+#             */
/*   Updated: 2022/07/06 11:38:16 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	c;

	c = n;
	if (c < 0)
	{
		ft_putchar_fd('-', fd);
		c *= -1;
	}
	if (c > 10)
	{
		ft_putnbr_fd(c / 10, fd);
		ft_putnbr_fd(c % 10, fd);
	}
	else
		ft_putchar_fd(c + 48, fd);
}
