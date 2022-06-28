/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:02:53 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/12 02:32:31 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok(char *str, char *token)
{
	static char	*p;

	if (str)
		p = str;
	if (!p || !token)
		return (NULL);
	p += ft_strspn(p, token);
	str = p;
	if (!*str)
		return (NULL);
	p += ft_strcspn(str, token);
	if (*p)
		*p++ = 0;
	if (*p == 0)
		p = NULL;
	return (str);
}
