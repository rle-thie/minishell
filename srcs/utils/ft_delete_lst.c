/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 02:06:15 by rle-thie          #+#    #+#             */
/*   Updated: 2022/11/09 15:24:04 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

t_token	*delete_lst(t_token *lst)
{
	if (!lst->prev && !lst->next)
	{
		g_data.cmd = NULL;
		return (NULL);
	}
	else if (!lst->prev)
	{
		*lst = *(lst)->next;
		lst->prev = NULL;
	}
	else if (!lst->next)
	{
		lst = lst->prev;
		lst->next = NULL;
	}
	else if (lst->prev && lst->next)
	{
		lst->prev->next = lst->next;
		lst->next->prev = lst->prev;
	}
	return (lst);
}
