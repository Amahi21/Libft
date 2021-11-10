/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahi <amahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 20:13:42 by amahi             #+#    #+#             */
/*   Updated: 2021/10/20 02:08:51 by amahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *strB, const char *strA, size_t len)
{
	size_t			i;
	size_t			j;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)strA;
	b = (unsigned char *)strB;
	i = 0;
	j = 0;
	if (!*strA)
		return ((char *)strB);
	while ((b[j] != '\0') && (j < len))
	{
		i = 0;
		while (a[i] == b[j + i] && ((j + i) < len))
		{
			i++;
			if (a[i] == '\0')
				return ((char *) &b[j]);
		}
		j++;
	}
	return (0);
}
