/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahi <amahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:31:28 by amahi             #+#    #+#             */
/*   Updated: 2021/11/10 02:50:13 by amahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*now;
	t_list	*next;

	if (!lst)
		return ;
	else
	{
		now = *lst;
		while (now)
		{
			next = now->next;
			del(now->content);
			free(now);
			now = next;
		}
		*lst = NULL;
	}
}
