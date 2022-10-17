/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */ 
/*   Created: 2022/05/23 02:13:45 by rle-thie          #+#    #+#             */
/*   Updated: 2022/05/26 13:01:22 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

void	init_garb(t_data *data)
{
	data->garb = malloc(sizeof(t_garbage));
	if (!data->garb)
		exit(1);
	data->garb->next = NULL;
	data->garb->prev = NULL;
	data->garb->ptr = NULL;
}

void	init_all(char **envp)
{
	t_data	data;

	data.token = NULL;
	data.formated_cmd = NULL;
	data.cmd = NULL;
	data.garb = NULL;
	data.env = envp;
	data.env_head = NULL;
	init_garb(&data);
	g_data = data;
	init_env();
}