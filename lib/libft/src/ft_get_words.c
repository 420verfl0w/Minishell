/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_words.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:50:33 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/12 02:32:31 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_words(char const *str, char c)
{
	char	*tstr;
	int		count;

	tstr = (char *)str;
	count = 0;
	while (*tstr)
	{
		while (*tstr && *tstr == c)
			tstr++;
		if (*tstr && *tstr != c)
			count++;
		while (*tstr && *tstr != c)
			tstr++;
	}
	return (count);
}
