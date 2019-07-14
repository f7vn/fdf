/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:34:46 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:34:47 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;
	int		j;
	char	*str1;
	char	*str2;

	str1 = (char*)str;
	str2 = (char*)to_find;
	i = 0;
	if (str2[0] == '\0')
		return (str1);
	while (str1[i])
	{
		j = 0;
		if (str1[i] == str2[j])
		{
			while (str2[j] && (str2[j] == str1[i + j]))
				j++;
			if (str2[j] == '\0')
				return (str1 + i);
		}
		i++;
	}
	return (NULL);
}
