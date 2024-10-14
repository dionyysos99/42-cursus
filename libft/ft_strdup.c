/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:44:48 by ymetinog          #+#    #+#             */
/*   Updated: 2024/10/08 19:50:08 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*str;
	unsigned int	len;

	len = ft_strlen(s1);
	str = malloc(len + 1 * sizeof(char));
	if (*s1 == '\0')
		return (str);
	ft_memcpy(str, s1, len);
	str[len] = '\0';
	return (str);
}
