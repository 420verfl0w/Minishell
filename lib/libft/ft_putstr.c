/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42.angouleme.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:54:35 by stales            #+#    #+#             */
/*   Updated: 2022/04/20 16:36:47 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putstr(char const *s, char end)
{
	char	*tmp;

	if (!s)
		return (ft_putstr("(null)", 0));
	tmp = (char *)s;
	while (*tmp && *tmp != end)
		tmp++;
	return (write(1, s, tmp - s));
}
