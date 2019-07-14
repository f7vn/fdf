/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:31:35 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:31:36 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double 	ft_power(double nb, int power)
{
	if (power <= -1)
		return (0);
	if (power > 1)
		nb *= ft_power(nb, power - 1);
	if (power == 0 || ((nb < 0) && (power == 0)))
		return (1);
	return (nb);
}
