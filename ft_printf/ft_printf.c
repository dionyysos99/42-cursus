/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:55:06 by ymetinog          #+#    #+#             */
/*   Updated: 2025/01/19 05:28:56 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static int	ft_phchck(const char str)
{
	if (str == 'c' || str == 's' || str == 'p' || str == 'd' || str == 'i'
		|| str == 'u' || str == 'x' || str == 'X' || str == '%')
		return (1);
	return (0);
}

static int	ft_phsender(va_list *args, const char str)
{
	if (str == 'c')
		return (ft_putchar(va_arg((*args), int)));
	else if (str == '%')
		return (ft_putchar('%'));
	else if (str == 'd' || str == 'i')
		return (ft_putnbr(va_arg((*args), int)));
	else if (str == 'u')
		return (ft_putunsg(va_arg((*args), unsigned int)));
	else if (str == 's')
		return (ft_putstr(va_arg((*args), char *)));
	else if (str == 'X' || str == 'x')
		return (ft_puthex(va_arg((*args), unsigned int), str));
	else if (str == 'p')
		return (ft_putpointer(va_arg((*args), unsigned long), str));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		ccounter;
	int		i;
	int		temp;

	ccounter = 0;
	i = 0;
	temp = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_phchck(str[i + 1]) == 1)
		{
			temp = ft_phsender(&arg, str[i + 1]);
			if (temp == -1)
				return (-1);
			ccounter += temp;
			i++;
		}
		else if (str[i] != '%' && (ft_putchar(str[i]) == -1 || !++ccounter))
			return (-1);
		i++;
	}
	va_end(arg);
	return (ccounter);
}
