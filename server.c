#include "minitalk.h"

int main(void)
{
    __pid_t s_pid;

    s_pid = getpid();
    printf("%d", s_pid);
}