/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:31:19 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:31:20 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memmove(void *to, const void *src, size_t n)
{
	char		*dest;
	const char	*source;

	dest = to;
	source = src;
	if (dest <= source)
		while (n-- > 0)
			*dest++ = *source++;
	else
		while (n-- > 0)
			dest[n] = source[n];
	return (to);
}
