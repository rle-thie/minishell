/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:21:49 by ldevy             #+#    #+#             */
/*   Updated: 2022/11/15 15:37:26 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

void	handle_sigctlc(int sig)
{
	// printf("\n%s", input_name());
	printf("\nmini:");
	(void)sig;
	g_data.status = 130;
}

void	sig_init(void)
{
	t_sigs	sig;

	ft_memset(&(sig.sexit), 0, sizeof(sig.sexit));
	ft_memset(&(sig.sint), 0, sizeof(sig.sint));
	sig.sint.sa_handler = &handle_sigctlc;
	sig.sint.sa_flags = SA_RESTART;
	sig.sexit.sa_handler = SIG_IGN;
	sig.sexit.sa_flags = SA_RESTART;
	sigaction(SIGINT, &(sig.sint), NULL);
	sigaction(SIGQUIT, &(sig.sexit), NULL);
	g_data.sig = sig;
}
