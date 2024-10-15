/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:18:34 by ymetinog          #+#    #+#             */
/*   Updated: 2024/10/15 09:20:25 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_str;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	new_str = malloc(len + 1 *(sizeof(char)));
	while (s[i])
	{
		if ((i >= start) && (i <= start + len))
		{
			while (i < (len + start))
			{
				new_str[j] = s[i];
				i++;
				j++;
			}
		}
		i++;
	}
	new_str[j] = '\0';
	return (new_str);
}
