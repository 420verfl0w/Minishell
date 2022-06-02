/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42.angouleme.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:00:21 by stales            #+#    #+#             */
/*   Updated: 2022/04/21 17:55:31 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcspn(char *s, const char *rejects)
{
	char	*tmp;

	tmp = s;
	while (*tmp)
	{
		if (ft_strchr(rejects, *tmp))
			return (tmp - s);
		tmp++;
	}
	return (tmp - s);
}
