/*
** EPITECH PROJECT, 2021
** check_pos.c
** File description:
** check_pos
*/
#include "../include/my.h"

int count_number(char *str)
{
    int i = 0;

    for (; str[i] != '\n' && str[i] != '\0'; i++);
    return (i + 1);
}


int *pos_x(int **tab, int col, int line, int *pos)
{
    if (pos[0] < tab[line][col]) {
        pos[0] = tab[line][col];
        pos[1] = line;
        pos[2] = col;
    }
    return (pos);
}

int *check_bn(int **tab, int col, int line)
{
    int *pos = malloc(sizeof(int) * 3);
    pos[0] = 0;

    for (int i = 0; i < line - 1; i++) {
        for (int l = 0; l < col; l++) {
            pos = pos_x(tab, l, i, pos);
        }
    }
    return (pos);
}