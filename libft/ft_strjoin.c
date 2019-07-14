/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:33:37 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:33:38 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*answer;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	answer = ft_strnew((size_t)ft_strlen(s1) \
				+ (size_t)ft_strlen(s2) + 1);
	if (!answer)
		return (NULL);
	i = -1;
	while (s1[++i])
		answer[i] = s1[i];
	j = -1;
	while (s2[++j])
		answer[i + j] = s2[j];
	answer[i + j] = '\0';
	return (answer);
}
