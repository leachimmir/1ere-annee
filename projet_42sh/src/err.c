/*
** EPITECH PROJECT, 2022
** err.c
** File description:
** err
*/
#include "../include/my.h"

void my_putstr_error(char *str)
{
    if (str != NULL)
        write(2, str, my_strlen(str));
}

void print_error(int status)
{
    int signal;

    if (WIFSIGNALED(status)) {
        signal = WTERMSIG(status);
        if (WCOREDUMP(status)) {
            if (signal == 8)
                my_putstr_error("Floating exception (core dumped)\n");
            else
                my_putstr_error("Segmentation fault (core dumped)\n");
        } else {
            if (signal == 8)
                my_putstr_error("Floating exception\n");
            else
                my_putstr_error("Segmentation fault\n");
        }
    }
}

int check_env_error(char **av, int i)
{
    if (av[1] == NULL)
        return (0);
    for (i = 0; av[i] != NULL; i++);
    if (i > 3) {
        my_putstr_error("setenv: Too many arguments.\n");
        return (1);
    }
    if (!(av[1][0] >= 'a' && av[1][0] <= 'z') &&
        !(av[1][0] >= 'A' && av[1][0] <= 'Z')) {
            my_putstr_error("setenv: Variable name must begin with a letter.\n");
            return (1);
    }
    for (i = 1; av[1][i] != '\0'; i++)
        if (is_alpha_num(av[1][i]) != 1) {
            my_putstr_error("setenv: Variable name");
            my_putstr_error("must contain alphanumeric characters.\n");
            return (1);
        }
    return (0);
}