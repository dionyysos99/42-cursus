char *ft_strchr(char *str , int c)
{
    char ch = c;
    while(*str)
    {
        if(*str == ch)
            return str;
        str++;
    }
    return 0;
}
