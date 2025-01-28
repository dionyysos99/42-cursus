#include "minitalk.h"
void	handle_signal(int signal)
{
	static int	bit;
	static int	i;

	if (signal == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		write(1,&i,1);
		bit = 0;
		i = 0;
	}
}
int main(int argc, char *argv[])
{
    ft_putstr("PID :");
	ft_putnbr((int)getpid());
	ft_putstr("\n");
    (void)argv;
    if(argc == 1)
    {
        signal(SIGUSR1, handle_signal);
        signal(SIGUSR2, handle_signal);
        while(1)
            pause();        
    }
    return 0;
}