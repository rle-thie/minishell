/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:17:07 by rle-thie          #+#    #+#             */
/*   Updated: 2022/05/26 17:09:46 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PARSING_H
# define PARSING_H

void	loop(char **envp, t_data *data);
void	create_token(char *str, t_data *data);


#endif