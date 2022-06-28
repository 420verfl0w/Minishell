/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:53:46 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/26 14:18:35 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* ########################################################################## */
/* CONFIG */
/* ###### */

# define PARAMS_LIST "cspdiuxX%"
# define HEX_UPPER "0123456789ABCDEF"
# define HEX_LOWER "0123456789abcdef"

/* ########################################################################## */

/* ########################################################################## */
/* LIBRARY */
/* ####### */

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

/* ########################################################################## */

/* ########################################################################## */
/* FILES */
/* ##### */

// ft_checkparams.c
int	ft_checkparams(char c);

// ft_error.c
int	ft_error(char *msg);

// ft_parse.c
int	ft_parse(va_list args, const char *format);

// ft_printf.c
int	ft_printf(const char *format, ...);

// ft_put_addr.c
int	ft_put_addr(va_list args);

// ft_putchar.c
int	ft_putchar(char c);

// ft_puthex.c
int	ft_puthex(unsigned long n, char format);

// ft_putnbr.c
int	ft_putnbr(int n);

// ft_putnbr_u.c
int	ft_putnbr_u(unsigned int n);

// ft_putstr.c
int	ft_putstr(char *s);

// ft_sel_params.c
int	ft_sel_params(va_list args, char param_type);

// ft_strlenn.c
int	ft_strlenn(char *s);

/* ########################################################################## */

#endif
