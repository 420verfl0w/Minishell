/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnu.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42.angouleme.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 00:06:01 by stales            #+#    #+#             */
/*   Updated: 2022/04/20 10:10:46 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	ft_putnbu(unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > UINT_MAX)
		return (0);
	if (n >= 10)
		i += ft_putnbu(n / 10);
	i += ft_putchar((n % 10) + '0');
	return (i);
}
