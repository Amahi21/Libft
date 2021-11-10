/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahi <amahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:06:48 by amahi             #+#    #+#             */
/*   Updated: 2021/10/20 02:07:56 by amahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			i;
	size_t			s;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	s = 0;
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	while (src[s])
		s++;
	if (size == 0)
		return (s);
	while (i < (size - 1))
	{
		if (b[i] == '\0')
		{
			a[i] = '\0';
			return (s);
		}
		a[i] = b[i];
		i++;
	}
	a[i] = '\0';
	return (s);
}
