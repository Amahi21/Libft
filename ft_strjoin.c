/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahi <amahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:43:36 by amahi             #+#    #+#             */
/*   Updated: 2021/10/26 14:44:14 by amahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*a;
	size_t		i;
	size_t		j;
	size_t		z;

	if (s1 == 0 || s2 == 0)
		return (0);
	a = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	j = 0;
	z = 0;
	if (a == 0)
		return (0);
	while (z < (ft_strlen(s1) + ft_strlen(s2) + 1))
	{
		if (s1[i] == '\0')
			a[z++] = s2[j++];
		else
			a[z++] = s1[i++];
	}
	return (a);
}
