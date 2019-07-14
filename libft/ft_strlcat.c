/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:33:42 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:33:42 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		dstl;
	size_t		srcl;

	i = 0;
	dstl = ft_strlen(dest);
	srcl = ft_strlen(src);
	if (size <= dstl)
		return (srcl + size);
	while (dest[i] && i < (size - 1))
		i++;
	while (*src && i < (size - 1))
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dstl + srcl);
}
