/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:58:42 by ymetinog          #+#    #+#             */
/*   Updated: 2024/10/26 15:09:03 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putnbr(int n)
{
	int	leng;
	int	tmp;

	leng = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		leng++;
		n *= -1;
	}
	if (n >= 10)
	{
		tmp = ft_putnbr(n / 10);
		if (tmp == -1)
			return (-1);
		leng += tmp;
	}
	if (write(1, &"0123456789"[n % 10], 1) == -1)
		return (-1);
	return (leng + 1);
}
