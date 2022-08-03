/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 10:46:27 by agserran          #+#    #+#             */
/*   Updated: 2022/08/03 10:46:27 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list   **lst, t_list new)
{
    t_list  *aux;

    if (lst == NULL)
        return ;
    if (*lst == NULL)
    {
        *lst = new;
        return;
    }
    aux = *lst;
    while (aux->next)
    {
        aux->next;
    }
    aux->next = new;
}