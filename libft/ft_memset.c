/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:31:28 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:31:29 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memset(void *s, int c, size_t count)
{
	char	*str;

	if (count)
	{
		str = (char *)s;
		while (count--)
			*str++ = c;
	}
	return (s);
}
