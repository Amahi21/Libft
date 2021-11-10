/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahi <amahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 22:47:31 by amahi             #+#    #+#             */
/*   Updated: 2021/11/10 02:52:36 by amahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*link;

	if (!lst)
		return (0);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (0);
	link = new;
	lst = lst->next;
	while (lst)
	{
		new -> next = ft_lstnew(f(lst->content));
		if (new == 0)
		{
			ft_lstclear(&link, del);
			return (0);
		}
		lst = lst->next;
		new = new->next;
	}
	return (link);
}
