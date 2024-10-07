int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
        c = c - 32;
    else 
        return c;
    return c;
}