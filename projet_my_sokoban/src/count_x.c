/*
** EPITECH PROJECT, 2022
** count_x.c
** File description:
** count_x
*/
#include "../include/my.h"

int count_x(char *buffer, soko_t *sokoban)
{
    sokoban->nb_x = 0;
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == 'X')
            sokoban->nb_x++;
        i++;
    }
    return sokoban->nb_x;
}

int count_o(char *buffer, soko_t *sokoban)
{
    sokoban->nb_o = 0;
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == 'O')
            sokoban->nb_o++;
    }
    return sokoban->nb_o;
}