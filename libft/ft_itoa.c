/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 08:46:48 by ymetinog          #+#    #+#             */
/*   Updated: 2024/10/15 08:50:57 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	astrlen(int n)
{
	int	temp;
	int	res;

	temp = n;
	res = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		res++;
	while (temp != 0)
	{
		temp /= 10;
		res++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*stri;
	int		stri_len;
	long	longn;

	longn = n;
	stri_len = astrlen(n);
	stri = malloc(stri_len + 1);
	if (!stri)
		return (NULL);
	stri[stri_len] = '\0';
	if (longn == 0)
		stri[0] = '0' + 0;
	if (longn < 0)
	{
		stri[0] = '-';
		longn = -longn;
	}
	while (longn != 0)
	{
		stri[--stri_len] = '0' + (longn % 10);
		longn /= 10;
	}
	return (stri);
}
