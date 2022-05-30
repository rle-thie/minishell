/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:42:26 by rle-thie          #+#    #+#             */
/*   Updated: 2022/05/30 20:02:23 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

void	loop(char **envp, t_data *data)
{
	char *str;

	envp = envp;
	while (1)
	{
		str = readline("Minishell:");
		create_token(str, data);
		break;
	}
}