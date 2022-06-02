/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42.angouleme.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:37:02 by stales            #+#    #+#             */
/*   Updated: 2022/06/02 18:26:34 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	main(int ac, char **av, char **env)
{
	t_msh	msh = {
		.p.name = NULL,
		.p.opwd = NULL,
		.p.pwd = NULL
	};
	
	msh_console(&msh, ac, av, env);
	return (0);
}
