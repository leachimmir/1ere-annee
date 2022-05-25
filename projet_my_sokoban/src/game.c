/*
** EPITECH PROJECT, 2022
** game.c
** File description:
** game
*/
#include "../include/my.h"

void check_z(soko_t *sokoban)
{
    int x = 0;
    int y = 0;
    int end = 0;
    sokoban->win = 0;

    while (sokoban->tab[y] != NULL) {
        if (sokoban->tab[y][x] == ' ' && sokoban->tab2[y][x] == 'O') {
            sokoban->tab[y][x] = 'O';
        }
        if (sokoban->tab[y][x] == 'X' && sokoban->tab2[y][x] == 'O') {
            end++;
            if (end == sokoban->nb_o)
                sokoban->win = 1;
        }
        if (sokoban->tab[y][x] == '\0') {
            x = 0;
            y++;
        }
        x++;
    }
}

int game(soko_t *sokoban, char *buffer)
{
    sokoban->key_pressed = 0;
    sokoban->loose = 0;

    while (sokoban->win != 1 && sokoban->loose != sokoban->nb_o) {
        sokoban->key_pressed = getch();
        sokoban->loose = 0;
        move_p(sokoban, sokoban->key_pressed);
        check_z(sokoban);
        print_m(sokoban);
        loose(sokoban);
        if (sokoban->win == 1) {
            print_m(sokoban);
            usleep(1000000);
            return 0;
        }
    if (sokoban->loose == sokoban->nb_o)
        return 1;
    }
    return (0);
}