#include "libft.h"
size_t ft_strlcpy(char *dst, const char *src ,size_t maxlen)
{
    const size_t srclen=ft_strlen(src);
    if (srclen + 1 < maxlen) 
		ft_memcpy(dst, src, srclen + 1);
	else if (maxlen != 0) {
		ft_memcpy(dst, src, maxlen - 1);
		dst[maxlen - 1] = '\0';
    }
	return srclen;
}