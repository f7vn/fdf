/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:34:12 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:34:13 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t size;

	size = ft_strlen(src);
	if (size > n)
		size = n;
	if (size != n)
		ft_memset(dest + size, '\0', n - size);
	return (ft_memcpy(dest, src, size));
}
