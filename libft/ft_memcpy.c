/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:31:00 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:31:01 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memcpy(void *destptr, const void *srcptr, size_t num)
{
	size_t			n;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char*)destptr;
	str2 = (unsigned char*)srcptr;
	n = 0;
	while (n < num)
	{
		str1[n] = str2[n];
		n++;
	}
	return (destptr);
}
