/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   console.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42.angouleme.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:33:23 by stales            #+#    #+#             */
/*   Updated: 2022/06/02 19:21:40 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <readline/readline.h>
#include <readline/history.h>

void	msh_console(t_msh *msh, int ac, char **av, char **env)
{
	(void)ac, (void)av, (void)env;
	char			*buf;

	while (1)
	{
		set_prompt(&msh->p);
		buf = readline(msh->p.buf);
		if (!buf)
			continue ;
		add_history(buf);
		free(buf);
	}
}
