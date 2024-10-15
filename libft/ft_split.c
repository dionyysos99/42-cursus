/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 08:57:13 by ymetinog          #+#    #+#             */
/*   Updated: 2024/10/15 11:41:08 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	wordcount(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			count++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (count);
}

char	**freemem(char **str, size_t i)
{
	while (str[i] != NULL && i >= 0)
	{
		free(str[i]);
		str[i] = NULL;
		i--;
	}
	free(str);
	str = NULL;
	return (NULL);
}

char	**ft_split(char const *str, char c)
{
	size_t	i;
	size_t	len;
	size_t	wordcnt;
	char	**st;

	st = (char **)malloc(sizeof(char *) * (wordcount(str, c) + 1));
	if (!str || !st)
		return (NULL);
	wordcnt = wordcount(str, c);
	i = 0;
	while (*str)
	{
		if (*str == c)
			str++;
		else
		{
			len = 0;
			while (*(str + len) && *(str + len) != c)
				len++;
			if (i < wordcnt && !(st[i++] = ft_substr(str, 0, len)))
				return (freemem(st, i));
			str += len;
		}
	}
	st[i] = 0;
	return (st);
}
