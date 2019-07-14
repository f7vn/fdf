/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:29:23 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:29:23 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list	*ft_lstcpy(t_list *list)
{
	t_list	*newlist;

	newlist = ft_lstnew(list->content, \
						list->content_size);
	if (newlist)
		return (newlist);
	return (NULL);
}
