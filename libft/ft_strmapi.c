#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int , char))
{
    unsigned int i;
    char *str;

    str=malloc(ft_strlen(s) + 1);
    i = 0;
    while(s[i])
    {
        str[i]=f(i,s[i]);
        i++;
    }
    str[i]= '\0' ;
    return str;
}