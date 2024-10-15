/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:45:14 by ymetinog          #+#    #+#             */
/*   Updated: 2024/10/15 09:15:00 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
		return (0);
	while (i < len && *s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
		i++;
	}
	if (i == len)
		return (0);
	return ((unsigned char ) *s1 - (unsigned char) *s2);
}
