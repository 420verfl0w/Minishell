/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42.angouleme.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 21:48:33 by stales            #+#    #+#             */
/*   Updated: 2022/04/21 12:29:11 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_split_free(char **strarr)
{
	if (!*strarr)
		return ;
	while (strarr && *strarr)
	{
		free(*strarr);
		*strarr++ = NULL;
	}
}
