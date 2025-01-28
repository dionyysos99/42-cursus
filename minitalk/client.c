#include "minitalk.h"
static void send_bit(char i, int pid)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((i & (0x01 << bit)) != 0)
            kill(pid, SIGUSR1);
		else
            kill(pid, SIGUSR2);
		usleep(250);
		bit++;
	}
}

int main(int argc, char *argv[])
{
    if (argc == 3) 
    {
        int i;
        i = -1;
        __pid_t target_pid = atoi(argv[1]);
        if(!target_pid)
            return(-1);
        while (argv[2][++i])
            send_bit(argv[2][i],target_pid);
        send_bit('\n',target_pid);     
        return 0;
    }
}