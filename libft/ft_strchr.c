/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:45:49 by ymetinog          #+#    #+#             */
/*   Updated: 2024/10/21 12:45:16 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *str, int c)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		if (str[idx] == (char)c)
			return ((char *)&str[idx]);
		idx++;
	}
	if (str[idx] == (char)c)
		return ((char *)&str[idx]);
	return (NULL);
}
