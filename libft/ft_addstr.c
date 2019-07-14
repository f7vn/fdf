/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:27:35 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:27:38 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_addstr(const char *str)
{
	char	*answer;
	int		n;

	if (!str)
		return (NULL);
	answer = ft_strnew((size_t)ft_strlen(str));
	n = -1;
	while (str[++n])
		answer[n] = str[n];
	answer[n] = '\0';
	return (answer);
}
