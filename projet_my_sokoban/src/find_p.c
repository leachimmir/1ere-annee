/*
** EPITECH PROJECT, 2022
** find_p.c
** File description:
** find_p
*/
#include "../include/my.h"

int find_p(char **tab, soko_t *sokoban)
{
    for (int y = 0; tab[y] != NULL; y++) {
        for (int x = 0; tab[y][x] != '\0'; x++) {
            if (tab[y][x] == 'P') {
                sokoban->p_x = x;
                sokoban->p_y = y;
                return 0;
            }
        }
    }
    return (1);
}