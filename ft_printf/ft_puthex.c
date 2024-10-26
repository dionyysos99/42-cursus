/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:57:29 by ymetinog          #+#    #+#             */
/*   Updated: 2024/10/26 14:55:54 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_puthex(unsigned int d, char w)
{
	int	leng;
	int	num;

	leng = 0;
	num = 0;
	if (d >= 16)
	{
		num = ft_puthex(d / 16, w);
		if (num == -1)
			return (-1);
		leng += num;
	}
	if (w == 'X')
	{
		if (write(1, &"0123456789ABCDEF"[d % 16], 1) == -1)
			return (-1);
	}
	else if (w == 'x')
		if (write(1, &"0123456789abcdef"[d % 16], 1) == -1)
			return (-1);
	return (leng + 1);
}
