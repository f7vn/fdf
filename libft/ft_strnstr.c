/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:34:25 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:34:25 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	int		i;

	if (!to_find[0])
		return ((char*)str);
	while (n && *str)
	{
		i = 0;
		if (*str == to_find[i])
		{
			while (to_find[i] && (str[i] == to_find[i]) && (n - i))
				i++;
			if (!to_find[i])
				return ((char*)&*str);
		}
		n--;
		str++;
	}
	return (NULL);
}
