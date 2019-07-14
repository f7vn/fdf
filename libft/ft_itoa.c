/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:29:13 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:29:14 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static size_t	ft_lengthint(int n)
{
	size_t		i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	if (i == 0)
		i++;
	return (i);
}

char		*ft_itoa(int n)
{
	char	*answer;
	int		flag;
	int		i;

	if (!(answer = ft_strnew(ft_lengthint(n))))
		return (NULL);
	i = 0;
	flag = 1;
	if (n < 0)
		flag = -1;
	while ((n / 10) != 0)
	{
		answer[i] = n % 10 * flag + 48;
		n /= 10;
		i++;
	}
	answer[i++] = n * flag + 48;
	if (flag == -1)
		answer[i++] = '-';
	answer[i] = '\0';
	ft_strrev(answer);
	return (answer);
}
