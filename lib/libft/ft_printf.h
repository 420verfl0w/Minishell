/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42.angouleme.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:58:26 by stales            #+#    #+#             */
/*   Updated: 2022/04/19 21:30:18 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char const *str, char end);
int	ft_putnbr(int n);
int	ft_putnbu(unsigned int n);
int	ft_puthex(unsigned long n, char fmt);
int	ft_va(char *fmt, va_list a);
int	ft_printf(const char *format, ...);

#endif