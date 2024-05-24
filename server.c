#include "minitalk.h"

void ft_putpid(int pid)
{
    char c;

    if(pid > 9)
    {
        ft_putpid((pid / 10));
        ft_putpid((pid % 10));
    }
    else
    {
        c = 48 + pid;
        write(1, &c, 1);
    }
}

static void drop_signal(int signal)
{
    static char  c;
    static unsigned int i;

    i++; 
    if(signal == SIGUSR1)
    {
        c = c | 1;  
    }
    if(i == 8)
    {
        write(1, &c, 1);
        i = 0; 
        c = 0;   
    }
    c = c << 1;
}

int main(void)
{
    pid_t s_pid;

    s_pid = getpid();
    ft_putpid(s_pid);
    signal(SIGUSR1, drop_signal);
    signal(SIGUSR2, drop_signal);
    while (1)
    {
        pause();
    }
    return(0);   
}