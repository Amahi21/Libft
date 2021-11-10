/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahi <amahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 23:48:15 by amahi             #+#    #+#             */
/*   Updated: 2021/10/15 04:12:49 by amahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	const unsigned char	*a;
	unsigned char		*b;

	i = 0;
	a = (unsigned char *)src;
	b = (unsigned char *)dst;
	if (dst > src)
	{
		while (++i <= len)
		{
			b[len - i] = a[len - i];
		}		
	}
	else
	{
		return (ft_memcpy(dst, src, len));
	}
	return (b);
}
