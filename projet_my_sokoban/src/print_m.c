/*
** EPITECH PROJECT, 2022
** print_m.c
** File description:
** print_m
*/
#include "../include/my.h"

void small_ter(soko_t *sokoban)
{
    char *ter = "Terminal is too small";

    clear();
    while (sokoban->window_y < sokoban->line ||
        sokoban->window_x < sokoban->column) {
        clear();
        getmaxyx(stdscr, sokoban->window_y, sokoban->window_x);
        clear();
        mvprintw(sokoban->window_y / 2,
        sokoban->window_x / 2 - (my_strlen(ter) / 2), "%s", ter);
        refresh();
        }
}

void print_m(soko_t *sokoban)
{
    int i = 0;
    int l = 0;

    clear();
    small_ter(sokoban);
    for (int l = 0; sokoban->tab[i] != NULL;) {
        mvprintw(i + (sokoban->window_y / 2) - (sokoban->line / 2),
        l + (sokoban->window_x  / 2) - (sokoban->column / 2),
        "%s", sokoban->tab[i]);
        i++;
    }
    refresh();
}