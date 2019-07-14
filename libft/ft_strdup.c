/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:33:17 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:33:17 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strdup(const char *src)
{
	int		n;
	char	*strdup;

	n = 0;
	while (src[n])
		n++;
	if (!(strdup = ft_strnew((size_t)n)))
		return (NULL);
	n = -1;
	while (src[++n])
		strdup[n] = src[n];
	strdup[n] = '\0';
	return (strdup);
}
