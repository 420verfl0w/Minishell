/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42.angouleme.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:01:35 by stales            #+#    #+#             */
/*   Updated: 2022/04/21 20:57:03 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strspn(char *s, const char *accepts)
{
	size_t	i;

	i = 0;
	while (s[i] && ft_strchr(accepts, s[i]))
		i++;
	return (i);
}
