/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:29:03 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:29:04 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(int nbr)
{
	if ((int)nbr >= '0' && (int)nbr <= '9')
		return (1);
	else
		return (0);
}