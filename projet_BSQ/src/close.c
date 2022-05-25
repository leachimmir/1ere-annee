/*
** EPITECH PROJECT, 2021
** close.c
** File description:
** close
*/
#include "../include/my.h"

void close_free(int fd, char *buffer)
{
    close(fd);
}

void free_iarray(int **tab)
{
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
}

void free_carray(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int sign = 1;
    int res = 0;

    while (str[i] != '\n' && (str[i] == '-' || str[i] == '+')) {
        if (str[i] == '-') {
            sign = sign * -1;
        }
        i++;
    }
    while (str[i] != '\n' && str[i] >= '0' && str[i] <= '9') {
        res = res * 10 + (str[i] - 48);
        i++;
    }
    return res * sign + 1;
}
