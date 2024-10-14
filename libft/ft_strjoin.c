/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:44:37 by ymetinog          #+#    #+#             */
/*   Updated: 2024/10/08 19:51:33 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	i;
	size_t			s1len;
	size_t			s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	str = malloc(s1len + s2len + 1 * sizeof(char));
	i = 0;
	while (i < (s1len + s2len + 1))
	{
		if (i < s1len)
		{
			str[i] = *s1;
			s1++;
		}
		else
		{
			str[i] = *s2;
			s2++;
		}
		i++;
	}
	str[i + 1] = '\0';
	return (str);
}
