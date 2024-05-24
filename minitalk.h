#ifndef MINITALK_H
#define MINITALK_H

#define typeof(var) _Generic( (var),\
char: "Char",\
int: "Integer",\
float: "Float",\
char *: "String",\
void *: "Pointer",\
default: "Undefined")

# include <stdio.h>
# include <signal.h>
# include <unistd.h>

typedef struct
{
    int result;
    int sign;
    int nb;
    int i;
} t_a;

int ft_atoi(const char *msg);
void ft_putpid(int pid);

#endif

