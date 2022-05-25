/*
** EPITECH PROJECT, 2022
** check_tersize.c
** File description:
** check_tersize
*/
#include "../include/my.h"

int check_tersize(soko_t *sokoban)
{
    sokoban->window_x = 0;
    sokoban->window_y = 0;
    getmaxyx(stdscr, sokoban->window_y, sokoban->window_x);
    return 0;
}