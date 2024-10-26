/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:00:17 by ymetinog          #+#    #+#             */
/*   Updated: 2024/10/26 10:00:42 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putunsg(unsigned int w)
{
	int	leng;
	int	tmp;

	leng = 0;
	if (w >= 10)
	{
		tmp = ft_putunsg(w / 10);
		if (tmp == -1)
			return (-1);
		leng += tmp;
	}
	if (write(1, &"0123456789"[w % 10], 1) == -1)
		return (-1);
	return (leng + 1);
}
