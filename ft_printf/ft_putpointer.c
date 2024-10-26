/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:59:16 by ymetinog          #+#    #+#             */
/*   Updated: 2024/10/26 09:59:40 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putpointer(unsigned long w, int i)
{
	int	leng;
	int	tmp;

	leng = 0;
	if (i == 1)
	{
		if (ft_putstr("0x") == -1)
			return (-1);
		i = 0;
		leng += 2;
	}
	if (w >= 16)
	{
		tmp = ft_putpointer(w / 16, i);
		if (tmp == -1)
			return (-1);
		leng += tmp;
	}
	if (write(1, &"0123456789abcdef"[w % 16], 1) == -1)
		return (-1);
	return (leng + 1);
}
