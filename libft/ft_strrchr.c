char *ft_strrchr(char *str , int c)
{
    char *sstr;
    while(*str)
    {
        if(*str == (char)c)
            sstr = str;
        str++;
    }
    return sstr;
}