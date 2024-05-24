#include "minitalk.h"

int ft_atoi(const char *msg)
{
    t_a t;

    t.i = 0;
    t.sign = 1;
    while ((msg[t.i] >= 9 && msg[t.i] <= 13) || msg[t.i] == 32)
        t.i++;
    while (msg[t.i] == '-' || msg[t.i] == '+')
    {
        if(msg[t.i] == '-')
            t.sign = -1; 
        t.i++;
    }
    t.result = 0;
    while (msg[t.i] >= '0' && msg[t.i] <= '9')
    {
        t.result =  (t.result * 10) + (msg[t.i] - 48);
        t.i++;
    }
    return(t.result * t.sign);
}

void send_signal(__pid_t pid, char *msg)
{
    unsigned int i;
    unsigned int j;

    i = 0; 
    while (msg[i] != '\0')
    {
        
    }
    
}


int main(int argc, char **argv)
{
    __pid_t s_pid;
    char *msg; 

    if(argc == 3)
    {
        s_pid = ft_atoi(argv[1]);
        msg = ft_atoi(argv[2]);
    
        send_signal(s_pid, msg);
    }
    else
        write(1,"Error for arguments, Try Again !\n", 33);
    return (0);
}

/*
        printf("%s\n", typeof(a1));
        printf("%s\n", typeof(a2));
        printf("%d\n", a1);
        */