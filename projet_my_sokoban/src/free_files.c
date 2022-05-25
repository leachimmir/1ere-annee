/*
** EPITECH PROJECT, 2022
** free_files.c
** File description:
** free_files
*/
#include "../include/my.h"

void free_f(soko_t *sokoban)
{
    for (int i = 0; sokoban->tab[i] != NULL; i++) {
        free(sokoban->tab[i]);
        free(sokoban->tab2[i]);
    }
    free(sokoban->buffer);
    free(sokoban);
}