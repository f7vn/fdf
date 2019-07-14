/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:29:48 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:29:48 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*oldlists;
	t_list	*newlists;
	t_list	*lists;

	if (!lst || !f)
		return (NULL);
	oldlists = lst;
	newlists = f(oldlists);
	if (!newlists)
		return (NULL);
	lists = newlists;
	while (oldlists->next)
	{
		oldlists = oldlists->next;
		newlists->next = f(oldlists);
		newlists = newlists->next;
		if (!newlists)
			return (NULL);
	}
	return (lists);
}
