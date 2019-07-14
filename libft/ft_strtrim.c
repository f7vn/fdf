/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:34:55 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:34:55 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	ft_getitem(const char *s)
{
	int		item;

	item = 0;
	while ((s[item] == 32) ||
		(s[item] == 9) ||
		(s[item] == 10))
		item++;
	return (item);
}

static int	ft_getitemend(const char *s)
{
	int		item;

	item = ft_strlen(s) - 1;
	while ((s[item] == 32) ||
		(s[item] == 9) ||
		(s[item] == 10))
		item--;
	return (item);
}

char		*ft_strtrim(char const *s)
{
	char	*answer;
	int		start;
	int		end;
	int		n;

	if (!s)
		return (NULL);
	start = ft_getitem(s);
	end = ft_getitemend(s);
	if ((end - start) < 0)
		start = 0;
	answer = ft_strnew((size_t)(end - start + 1));
	if (!answer)
		return (NULL);
	n = 0;
	while (start <= end)
		answer[n++] = (char)s[start++];
	answer[n] = '\0';
	return (answer);
}
