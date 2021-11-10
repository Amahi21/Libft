/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahi <amahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:06:57 by amahi             #+#    #+#             */
/*   Updated: 2021/11/08 16:40:01 by amahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	char	b;

	b = ch;
	i = 0;
	while (str[i] != '\0')
		i++;
	if (ch == '\0')
		return ((char *)&str[i]);
	while (i != -1)
	{
		if (str[i] == b)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}
