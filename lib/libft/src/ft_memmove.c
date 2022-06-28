/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:54:00 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/12 02:32:31 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tdst;
	unsigned char	*tsrc;

	if (!dest && !src)
		return (dest);
	tdst = (unsigned char *)dest;
	tsrc = (unsigned char *)src;
	if (tdst > tsrc)
	{
		tsrc += (n - 1);
		tdst += (n - 1);
		while (n--)
			*tdst-- = *tsrc--;
	}
	else
		while (n--)
			*tdst++ = *tsrc++;
	return (dest);
}
