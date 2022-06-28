/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:15:24 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/26 14:15:27 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_atol(const char *nptr)
{
	const char	*ptr;
	long int	to_dec;
	long int	neg;

	to_dec = 0;
	neg = 1;
	ptr = (char *)nptr;
	while (*ptr == ' ' || (*ptr >= '\t' && *ptr <= '\r'))
		ptr++;
	if ((*ptr == '+' || *ptr == '-'))
		if (*ptr++ == '-')
			neg = ~(neg - 1);
	while (*ptr >= '0' && *ptr <= '9')
		to_dec = (to_dec * 0xA) + (*ptr++ & 0xF);
	return (to_dec * neg);
}
