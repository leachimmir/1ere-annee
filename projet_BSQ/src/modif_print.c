/*
** EPITECH PROJECT, 2021
** modif_print.c
** File description:
** modif_print
*/
#include "../include/my.h"


char x(int l, int i, int *pos, char **tab)
{
    if ((l >= pos[2] - pos[0] + 1 && l <= pos[2]) 
    && (i >= pos[1] - pos[0] + 1 && i <= pos[1])) {
        return ('x');
    } else {
    return (tab[i][l]);
    }
}

int put_x(char **tab, int *pos, char *buffer, int col)
{
    int line = my_getnbr(buffer) - 1;
    col = col - 1;

    for (int i = 0; i < line; i++) {
        for (int l = 0; l != col; l++) {
            tab[i][l] = x(l, i, pos, tab);
        }
    }
    for (int i = 0; i < line; i++) {
        write(1, tab[i], col);
        my_putchar('\n');
    }
    return (SUCCESS);
}
