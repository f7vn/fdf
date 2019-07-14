/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:34:31 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:34:32 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*flag;
	int		n;

	str = (char *)s;
	flag = 0;
	n = 0;
	while (str[n])
	{
		if ((int)str[n] == c)
			flag = (char*)s + n;
		n++;
	}
	if ((int)str[n] == c)
		flag = (char*)s + n;
	return (flag);
}
