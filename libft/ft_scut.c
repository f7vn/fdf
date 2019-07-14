/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scut.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:32:36 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:32:37 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_scut(char const *s, unsigned int start, char c)
{
	char	*answer;
    int     n;
	size_t	i;

    n = 0;
	while (s[n] != c && s[n])
        n++;
    answer = ft_strnew(n);
	if ((s == NULL) || !answer)
		return (NULL);
	i = 0;
	while (s[start] && (s[start] != c))
		answer[i++] = s[start++];
	answer[i] = 0;
	return (answer);
}
