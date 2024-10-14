/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:53:35 by ymetinog          #+#    #+#             */
/*   Updated: 2024/10/15 00:17:29 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t	i;
	size_t	size;
	size_t	slen;

	size = ft_strlen(needle);
	slen = 0;
	if (!*needle)
		return (haystack);
	while (*haystack && slen < len)
	{
		i = 0;
		while (haystack[i] == needle[i])
		{
			if (i == size - 1)
				return (haystack);
			i++;
		}
		slen++;
		haystack++;
	}
	return (0);
}
