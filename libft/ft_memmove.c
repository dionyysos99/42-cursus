/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:23:16 by ymetinog          #+#    #+#             */
/*   Updated: 2024/10/21 10:57:59 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*cpy_dest;
	const char	*cpy_src;
	const char	*end_src;
	char		*end_dst;

	if (!dst && !src)
		return (NULL);
	cpy_dest = dst;
	end_dst = cpy_dest + (len - 1);
	cpy_src = src;
	end_src = cpy_src + (len - 1);
	if (cpy_dest < cpy_src)
		while (len--)
			*cpy_dest++ = *cpy_src++;
	else
		while (len--)
			*end_dst-- = *end_src--;
	return (dst);
}
