#include "libft.h"
void *ft_memcpy(void *restrict dst , const void *restrict src ,size_t len)
{
    size_t i;
    i=0;
    if(dst == src || !len)
        return dst;
    while (i < len)
    {
        *((char *)dst + i) = *((char *)src + i);
        i++;
    }
    return dst;
}