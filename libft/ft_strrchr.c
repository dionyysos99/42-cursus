/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:38:45 by ymetinog          #+#    #+#             */
/*   Updated: 2024/10/15 09:16:21 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	size_t	slen;

	slen = ft_strlen((char *)str) + 1;
	while (slen--)
	{
		if (*(str + slen) == (char)c)
			return ((char *)(str + slen));
	}
	return (0);
}
