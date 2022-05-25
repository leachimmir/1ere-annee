/*
** EPITECH PROJECT, 2022
** count_max_col.c
** File description:
** count_max_col
*/

#include "../include/my.h"

int count_max_col(soko_t *sokoban)
{
    int i = 0;
    int len = 0;
    int column = 0;

    while (sokoban->tab2[i] != NULL) {
        if (len > column) {
        column = len;
    }
        len = my_strlen(sokoban->tab2[i]) + 1;
        i++;
    }
    sokoban->column = column;
    return column;
}