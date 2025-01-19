/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:59:16 by ymetinog          #+#    #+#             */
/*   Updated: 2025/01/19 06:56:14 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static int	ft_calc(unsigned long w)
{
	int	leng;
	int	tmp;

	leng = 0;
	if (w >= 16)
	{
		tmp = ft_calc(w / 16);
		if (tmp == -1)
			return (-1);
		leng += tmp;
	}
	if (write(1, &"0123456789abcdef"[w % 16], 1) == -1)
		return (-1);
	return (leng + 1);
}

int	ft_putpointer(unsigned long w)
{
	if (!w)
	{
		if (ft_putstr("(nil)") == -1)
			return (-1);
		return (5);
	}
	return (ft_putstr("0x") + ft_calc(w));
}
