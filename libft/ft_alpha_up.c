/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alpha_up.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorange- <gorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:27:55 by gorange-          #+#    #+#             */
/*   Updated: 2019/07/15 00:28:15 by gorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void    ft_alpha_up(char **str)
{
    int		n;

    n = 0;
    while((*str)[n])
    {
        if (ft_str_is_alpha((*str)[n]))
            (*str)[n] = ft_abs((*str)[n]) - 32;
        n++;
    }
}
