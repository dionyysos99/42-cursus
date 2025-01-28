#include <unistd.h>
void ft_putnbr(int a)
{
    char c;
    if(a>9)
        ft_putnbr(a/10);
    c = a % 10 + 48;
    write(1,&c,1);
}