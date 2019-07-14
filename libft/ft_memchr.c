/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:30:51 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:30:52 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memchr(const void *s, int c, size_t num)
{
	size_t		n;
	const char	*str;

	str = (const char*)s;
	n = 0;
	while (n < num)
	{
		if ((unsigned char)str[n] == (unsigned char)c)
			return ((char*)s + n);
		n++;
	}
	return (NULL);
}
