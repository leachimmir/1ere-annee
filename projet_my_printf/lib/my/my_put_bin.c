/*
** EPITECH PROJECT, 2021
** my_put_bin.c
** File description:
** my_put_bin
*/
#include "../../include/my.h"

int my_put_bin(unsigned int nb)
{
    char *res = malloc(sizeof(char) * nb);
    int i = 0;

    for (; nb != 0; i++) {
        if (nb % 2 == 0)
            res[i] = '0';
        if (nb % 2 == 1)
            res[i] = '1';
        nb = nb / 2;
    }
    res[i + 1] = '\0';
    my_revstr(res);
    my_putstr(res);
}