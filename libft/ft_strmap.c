/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:33:53 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:33:54 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*answer;
	int		n;

	if ((s == NULL) || (f == NULL))
		return (NULL);
	answer = ft_strnew((size_t)(ft_strlen(s)));
	if (!answer)
		return (NULL);
	n = 0;
	while (s[n])
	{
		answer[n] = (char)f(s[n]);
		n++;
	}
	return (answer);
}
