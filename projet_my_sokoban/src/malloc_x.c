/*
** EPITECH PROJECT, 2022
** malloc_xc
** File description:
** malloc_x
*/
#include "../include/my.h"

void pos_o(soko_t *sokoban, int x, int y, int index_o)
{
    sokoban->o_pos[index_o][0] = x;
    sokoban->o_pos[index_o][1] = y;
}

void pos_x(soko_t *sokoban, int x, int y, int index_x)
{
    sokoban->x_pos[index_x][0] = x;
    sokoban->x_pos[index_x][1] = y;
}