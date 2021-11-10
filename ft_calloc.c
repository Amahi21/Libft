/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahi <amahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 06:10:50 by amahi             #+#    #+#             */
/*   Updated: 2021/10/24 02:29:22 by amahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc( size_t number, size_t size)
{
	void			*arr;
	size_t			res;
	size_t			i;
	unsigned char	*a;

	res = number * size;
	arr = (void *)malloc(res);
	if (arr == 0)
		return (0);
	a = arr;
	i = 0;
	while (res--)
	{
		a[i++] = 0;
	}
	return (arr);
}
