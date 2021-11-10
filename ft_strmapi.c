/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahi <amahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 05:39:22 by amahi             #+#    #+#             */
/*   Updated: 2021/10/24 05:39:47 by amahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*a;

	i = 0;
	if (!s)
		return (0);
	a = ft_strdup(s);
	if (a == 0)
		return (0);
	while (a[i])
	{
		a[i] = (*f)(i, a[i]);
		i++;
	}
	return (a);
}
