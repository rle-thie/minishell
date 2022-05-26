/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:03:24 by rle-thie          #+#    #+#             */
/*   Updated: 2022/05/26 17:06:02 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

int main(int ac, char const **av, char **envp)
{
	t_data *data;
	// char *str;
	
	(void)ac;
	(void)av;
	// data = malloc(sizeof(t_data));
	// data.garb = malloc(sizeof(t_garbage));
	data = init_all(envp);
	loop(envp, data);
	// ft_garb_free_all(data);
	// free(data);
	data = data;
	return (0);
}
