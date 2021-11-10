/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahi <amahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 02:08:11 by amahi             #+#    #+#             */
/*   Updated: 2021/11/10 02:20:01 by amahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	if (dstsize == 0)
		return (j);
	if (dstsize < i)
		return (dstsize + j);
	while (*src && i < (dstsize-- - 1) && dstsize > 0)
	{
		*(dst + i) = *src;
		src++;
		dst++;
	}
	*(dst + i) = '\0';
	return (i + j);
}
