#include "libft.h"
size_t wordcount(char const *s, char c)
{
    size_t count;
    count = 0;
    while(*s != '\0')
    {
        if(*s == c)
            s++;
        else
        {
            count++;
            while(*s != '\0' && *s != c)
                s++;
        }
    }
    return count;
}
char **freemem(char **str, size_t i)
{
    while(str[i] != NULL && i >= 0)
    {
        free(str[i]);
        str[i] = NULL;
        i--;
    }
    free(str);
    str = NULL;
    return NULL;
}
char **ft_split(char const *str, char c)
{
    size_t  i;
    size_t  len;
    size_t  wordcnt;
    char    **words;
    if(!str || !(words = (char **)malloc(sizeof(char *) * (wordcount(str, c) + 1))))
        return NULL;
    wordcnt = wordcount(str, c);
    i = 0;
    while(*str)
    {
        if(*str == c)
            str++;
        else
        {
            len = 0;
            while (*(str + len) && *(str + len) != c)
            {
                len++;
            }
            if(i < wordcnt && !(words[i++] = ft_substr(str, 0, len)))
                return (freemem(words , i));
            str += len;
        }
    }
    words[i] = 0;
    return (words);
}