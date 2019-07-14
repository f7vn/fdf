/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:32:55 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:32:55 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		n;

	str = (char *)s;
	n = 0;
	while (str[n])
	{
		if ((int)str[n] == c)
			return ((char *)s + n);
		n++;
	}
	if ((int)str[n] == c)
		return ((char *)s + n);
	return (NULL);
}
