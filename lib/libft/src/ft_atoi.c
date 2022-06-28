/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:24:34 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/12 02:32:31 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	const char	*ptr;
	long int	to_dec;
	int			neg;

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
	if (neg == -1 && to_dec < -2147483648)
		return (0);
	if (neg && to_dec < -2147483648)
		return (-1);
	return (to_dec * neg);
}
