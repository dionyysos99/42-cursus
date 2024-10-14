#include "libft.h"
char *ft_strtrim(char const *s1, char const *set)
{
	size_t	s1len;

	s1len = ft_strlen((char *)s1);
	while(ft_strchr(set, *s1) && *s1)
		s1++;
	while (ft_strchr(set, s1[s1len]) && s1len != 0)
		s1len--;
	if(!s1 || !set)
		return NULL;
	return (ft_substr((char *)s1, 0, s1len + 1));
}
