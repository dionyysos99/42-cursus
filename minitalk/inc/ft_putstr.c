#include <unistd.h>
void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	if (!str)
		str = "(null)";
	while (str[++i])
        write(1,&str[i],1);
}