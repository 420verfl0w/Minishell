/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:53:30 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/12 02:32:31 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long int	nb_size;
	long int	nb_long;
	char		*nb_str;

	nb_size = ft_nbrlen(n);
	nb_str = ft_calloc(1, nb_size + 1);
	if (!nb_str)
		return (NULL);
	nb_long = (long int)n;
	if (nb_long < 0)
	{
		nb_long = ~(nb_long - 1);
		nb_str[0] = '-';
	}
	if (nb_long == 0)
		nb_str[0] = '0';
	while (nb_long)
	{
		nb_str[nb_size - 1] = '0' + (nb_long % 10);
		nb_long /= 10;
		nb_size--;
	}
	return (nb_str);
}
