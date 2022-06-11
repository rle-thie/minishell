/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:00:12 by rle-thie          #+#    #+#             */
/*   Updated: 2022/06/11 02:45:53 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

t_token_type	choose_type_char(char ch)
{
	t_token_type type;

	if (ch == ' ')
		type = WHITE_SPACE;
	else if (ch == PIPE)
		type = PIPE;
	else if (ch == DQUOTE)
		type = DQUOTE;
	else if (ch == REDIR_IN)
		type = REDIR_IN;
	else if (ch == REDIR_OUT)
		type = REDIR_OUT;
	else if (ch == DOLLAR)
		type = DOLLAR;
	else
		type = LETTER;
	return (type);
}

t_token	*ft_create_lst_token(t_data *data, char ch)
{
	t_token *new;

	new = ft_malloc(sizeof(t_token), data);
	new->next = NULL;
	new->prev = NULL;
	new->c = ch;
	new->type = choose_type_char(new->c);
	// printf("lst created '%c' %d\n", new->c, new->type);
	return (new);
}

void	lexer(char *str, t_data *data)
{
	int i;
	t_token *tmp;

	i = 0;
	while (str[i])
	{
		if (!data->token)
		{
			data->token = ft_create_lst_token(data, str[i]);
			tmp = data->token;
		}
		else
		{
			data->token->next = ft_create_lst_token(data, str[i]);
			data->token->next->prev = data->token;
			data->token = data->token->next;
		}
		i++;
	}
	tmp=tmp;
	// print la list
	// printf("caca");
	// while (tmp->next)
	// {
	// 	printf("prev=%p, current=%c, next=%p\n", tmp->prev, tmp->c, tmp->next);
	// 	tmp = tmp->next;
	// }
	// printf("prev=%p, current=%c, next=%p\n", tmp->prev, tmp->c, tmp->next);

	create_cmd(data->cmd, tmp, data);
	// printf("end func\n");
}