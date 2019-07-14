/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_brn.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:28:35 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:28:35 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char		*ft_brn(double r)
{
	size_t *t;
	size_t i;
	int n;
	char *str;

	i = 63;
	n = 0;
	t = (size_t *)&r;
	str = ft_strnew(65);
	while (i != 0)
	{
		if ((*t>>i)&1)
			str[n++] = '1';
		else
			str[n++] = '0';
		i--;
	}
	if ((*t>>i)&1)
		str[n++] = '1';
	else
		str[n++] = '0';
	str[n] = '\0';
	return (str);
}
