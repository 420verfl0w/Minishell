/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42.angouleme.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:12:39 by stales            #+#    #+#             */
/*   Updated: 2022/04/20 16:35:58 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_va(char *fmt, va_list a)
{
	unsigned long	addr;

	if (*fmt == 'c')
		return (ft_putchar((char)va_arg(a, int)));
	if (*fmt == 's')
		return (ft_putstr(va_arg(a, char *), 0));
	if (*fmt == 'd' || *fmt == 'i')
		return (ft_putnbr(va_arg(a, int)));
	if (*fmt == 'u')
		return (ft_putnbu(va_arg(a, unsigned int)));
	if (*fmt == 'x' || *fmt == 'X')
		return (ft_puthex(va_arg(a, unsigned int), *fmt));
	if (*fmt == '%')
		return (ft_putchar('%'));
	if (*fmt == 'p')
	{
		addr = va_arg(a, unsigned long);
		if (addr)
			return (ft_putstr("0x", 0) + ft_puthex(addr, *fmt));
		return (ft_putstr("(nil)", 0));
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	char	*save;
	int		i;

	va_start(args, format);
	i = 0;
	while (*format)
	{
		if (*format == '%')
		{
			i += ft_va((char *)++format, args);
			format++;
			continue ;
		}
		save = (char *)format;
		format += ft_putstr((char *)format, '%');
		i += format - save;
	}
	va_end(args);
	return (i);
}
