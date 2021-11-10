/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahi <amahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:06:45 by amahi             #+#    #+#             */
/*   Updated: 2021/11/08 16:40:50 by amahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int		i;
	char	b;

	b = ch;
	i = 0;
	while (str[i])
	{
		if (str[i] == b)
			return ((char *)&str[i]);
		i++;
	}
	if (ch == '\0')
		return ((char *)&str[i]);
	return (0);
}
