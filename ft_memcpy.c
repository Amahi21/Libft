/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahi <amahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:06:38 by amahi             #+#    #+#             */
/*   Updated: 2021/10/19 18:29:27 by amahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)dest;
	b = (unsigned char *)source;
	i = 0;
	if (source == NULL && dest == NULL)
		return (NULL);
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (a);
}
