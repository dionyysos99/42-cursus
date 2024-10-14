#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_str;
	unsigned int 	i;
	unsigned int	j;

	i = 0;
	j = 0;
	new_str = malloc(len + 1 *(sizeof(char)));
	while(s[i])
	{
		if(i >= start && i <= start + len)
			while(i < len + start)
			{
				new_str[j] = s[i];
				i++;
				j++;
			}
		i++;
	}
	new_str[j]='\0';
	return new_str;
}
