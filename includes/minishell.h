/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42.angouleme.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:38:08 by stales            #+#    #+#             */
/*   Updated: 2022/06/02 20:26:14 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

////////////////////////
//
//  	INCLUDES
//
////////////////////////

# include <limits.h>
# include <stddef.h>
# include <signal.h>

////////////////////////
//
//  	DEFINES
//
////////////////////////

# define RED "\033[38;5;196m"
# define GRE "\033[38;5;82m"
# define BLU "\033[38;5;69m"
# define YEL "\033[38;5;220m"
# define PUR "\033[38;5;93m"
# define RES "\033[00m"

////////////////////////
//
//  TYPEDEF & STRUCT
//
////////////////////////

typedef struct s_prompt
{
	char	buf[PATH_MAX];
	char	*name;
	char	*pwd;
	char	*opwd;
	int		i;
}	t_prompt;

typedef struct s_msh
{
	t_prompt	p;
}	t_msh;

////////////////////////
//
//		PROMPT
//
////////////////////////

void	set_prompt(t_prompt *p);

////////////////////////
//
//		HANDLER
//
////////////////////////

void	handler(int signum, siginfo_t *info, void *ptr);

////////////////////////
//
//		CONSOLE
//
////////////////////////

void	msh_console(t_msh *msh, int ac, char **av, char **env);

#endif