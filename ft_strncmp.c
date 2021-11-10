/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahi <amahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:06:01 by amahi             #+#    #+#             */
/*   Updated: 2021/10/20 00:47:30 by amahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *)str1;
	b = (unsigned char *)str2;
	i = 0;
	if (n == 0)
		return (0);
	while (--n && a[i] == b[i] && a[i])
		i++;
	if (a[i] != b[i])
		return (a[i] - b[i]);
	return (0);
}
