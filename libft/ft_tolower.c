int ft_tolower(int c)
{
    if(c >= 'a' && c <= 'z')
        c = c + 32;
    else 
        return c;
    return c;
}