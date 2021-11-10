/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahi <amahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 06:15:39 by amahi             #+#    #+#             */
/*   Updated: 2021/11/10 02:25:20 by amahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*arr;
	int		i;

	i = 0;
	arr = (char *)malloc(ft_strlen(str) + 1);
	if (arr == 0)
		return (0);
	while (str[i] != '\0')
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
