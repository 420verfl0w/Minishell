/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42.angouleme.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:00:47 by stales            #+#    #+#             */
/*   Updated: 2022/06/02 19:14:40 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include <stdlib.h>
#include "libft.h"

void	set_prompt(t_prompt *p)
{
	p->name = getenv("USER");
	p->pwd = getenv("PWD");
	if (ft_strncmp(p->pwd, getenv("HOME"), ft_strlen(p->pwd)) == 0)
		p->pwd = "~";
	p->i = 0;
	ft_memcpy(p->buf, " 😈 [\033[38;5;82m", 17);
	p->i += 17;
	ft_memcpy((char *)(p->buf + p->i), p->name, ft_strlen(p->name));
	p->i += ft_strlen(p->name);
	ft_memcpy((char *)(p->buf + p->i), "\033[00m]\r┌\n└[\033[38;5;82m", 25);
	p->i += 25;
	ft_memcpy((char *)(p->buf + p->i), p->pwd, ft_strlen(p->pwd));
	p->i += ft_strlen(p->pwd);
	ft_memcpy((char *)(p->buf + p->i), "\033[00m]$ ", 8);
	p->i = 0;
}
