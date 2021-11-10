/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahi <amahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 23:48:08 by amahi             #+#    #+#             */
/*   Updated: 2021/11/08 16:38:21 by amahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t		i;
	char		*a;
	char		b;

	b = c;
	i = 0;
	a = (char *)arr;
	while (i < n)
	{
		if (a[i] == b)
		{
			return ((void *)&a[i]);
		}	
		i++;
	}
	return (0);
}
