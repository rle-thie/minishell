/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:17:07 by rle-thie          #+#    #+#             */
/*   Updated: 2022/10/01 23:25:24 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PARSING_H
# define PARSING_H

void	lexer(char *str, t_data *data);
void	create_cmd(t_token *cmd, t_token *token, t_data *data, int len);

// lexer_cmd_utils.c
char	*trans(char c, t_data *data);
t_token_type	select_type(char c);
void	fill_type(t_token *cmd, t_data *data);

#endif