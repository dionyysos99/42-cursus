#include "libft.h"
char *ft_strnstr(char *haystack, char *needle, size_t len)
{
   	unsigned int	i;
	unsigned int	size;
    unsigned int    lens;

	if (!*needle)
		return (haystack);
	size = 0;
	while(needle[size])
	{
		size++;
	}
    lens = 0;
	while (*haystack && lens < len)
	{
		i = 0;
		while (haystack[i] == needle[i])
		{
			if (i == size - 1)
				return (haystack);
			i++;
		}
		haystack++;
	}
	return (0);
}