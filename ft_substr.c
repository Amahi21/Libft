/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahi <amahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:43:46 by amahi             #+#    #+#             */
/*   Updated: 2021/11/10 02:41:31 by amahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*a;

	i = 0;
	if (s == 0)
		return (0);
	if (ft_strlen(s) >= len)
		a = (char *)malloc(sizeof(char) * (len + 1));
	if (ft_strlen(s) < len)
		a = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (a == 0)
		return (0);
	while (start < ft_strlen(s) && len-- > 0)
	{
		a[i] = s[start];
		start++;
		i++;
	}
	a[i] = '\0';
	return (a);
}
