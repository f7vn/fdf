/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:33:57 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:33:58 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*answer;
	int		n;

	if ((s == NULL) || (f == NULL))
		return (NULL);
	if (!(answer = ft_strnew((size_t)(ft_strlen(s)))))
		return (NULL);
	n = 0;
	while (s[n])
	{
		answer[n] = f(n, s[n]);
		n++;
	}
	return (answer);
}
