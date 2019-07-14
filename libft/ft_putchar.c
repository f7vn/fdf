/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:31:46 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:31:47 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_putchar(char c)
{
	unsigned char	tmp;
	unsigned char	ch;

	ch = (unsigned char)c;
	if (ch > 127)
	{
		tmp = (ch >> 6) | 0b11000000;
		write(1, &tmp, 1);
		tmp = ch & 0b10111111;
		write(1, &tmp, 1);
	}
	else
		write(1, &c, 1);
}
