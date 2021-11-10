/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahi <amahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 23:40:19 by amahi             #+#    #+#             */
/*   Updated: 2021/10/23 23:40:27 by amahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	size_t		z;
	char		*a;

	z = 0;
	j = 0;
	if (!s1 || !set)
		return (0);
	i = ft_strlen(s1);
	while (ft_strchr(set, s1[j]) && s1[j] != '\0')
		j++;
	while (ft_strchr(set, s1[i - 1]) && i > j)
		i--;
	a = (char *)malloc(i - j + 1);
	if (a == 0)
		return (0);
	while (j < i)
	{
		a[z++] = s1[j++];
	}
	a[z] = '\0';
	return (a);
}
