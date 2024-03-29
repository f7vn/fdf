/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:34:36 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:34:37 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_strrev(char *s)
{
	int		i;
	int		j;
	char	item;

	if (!s)
		return ;
	i = 0;
	j = ft_strlen(s) - 1;
	while ((j - i) > 0)
	{
		item = s[i];
		s[i] = s[j];
		s[j] = item;
		i++;
		j--;
	}
}
