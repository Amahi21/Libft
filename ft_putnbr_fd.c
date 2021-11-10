/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahi <amahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 05:56:18 by amahi             #+#    #+#             */
/*   Updated: 2021/10/26 14:43:21 by amahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			a;
	unsigned int	b;

	if (fd < 0)
		return ;
	b = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		b = n * (-1);
	}
	a = b % 10 + '0';
	if (b < 10)
		write(fd, &a, 1);
	else
	{
		ft_putnbr_fd(b / 10, fd);
		write(fd, &a, 1);
	}
}
