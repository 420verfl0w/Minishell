/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42.angouleme.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:53:53 by stales            #+#    #+#             */
/*   Updated: 2022/06/02 18:52:00 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tdst;
	unsigned char	*tsrc;

	if (!dest && !src)
		return (dest);
	tsrc = (unsigned char *)src;
	tdst = (unsigned char *)dest;
	while (n--)
		*tdst++ = *tsrc++;
	return (dest);
}
