/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:15:07 by agserran          #+#    #+#             */
/*   Updated: 2022/08/07 18:19:31 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_clear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (*lst)
	{
		del((*lst)->content);
		tmp = (*lst)->next;
		free(*lst);
		(*lst) = tmp;
	}
	*lst = NULL;
}
