/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:35:27 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:35:28 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_toupper(int c)
{
	if ((int)c >= 97 && (int)c <= 122)
		c -= 32;
	return (c);
}
