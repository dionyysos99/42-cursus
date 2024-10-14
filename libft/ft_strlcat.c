/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:43:36 by ymetinog          #+#    #+#             */
/*   Updated: 2024/10/08 20:12:32 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	src_len = 0;
	dest_len = 0;
	while ((dest_len < dstsize) && (dst[dest_len] != '\0'))
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if ((dstsize <= dest_len) || (dstsize == 0))
		return (dstsize + src_len);
	while ((src[i] != '\0') && (dest_len + i < dstsize - 1))
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}
