/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42.angouleme.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:59:34 by stales            #+#    #+#             */
/*   Updated: 2022/04/19 21:28:15 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, char fmt)
{
	unsigned int		size;
	unsigned int		flag;
	unsigned char		nib;

	nib = 0;
	size = 0;
	flag = 0;
	if (fmt == 'X')
		flag = 0x20;
	if (n > 0xF)
		size += ft_puthex(n >> 0x4, fmt);
	nib = (n & 0xF);
	if (nib >= 10)
		size += ft_putchar(((nib - 10) + 'a') ^ flag);
	else
		size += ft_putchar((nib + '0'));
	return (size);
}
