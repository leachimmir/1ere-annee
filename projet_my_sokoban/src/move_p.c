/*
** EPITECH PROJECT, 2022
** move_p.c
** File description:
** move_p
*/


#include "../include/my.h"

void shifting(soko_t *sokoban, int x, int y)
{
    switch(sokoban->key_pressed)
    {
        case (65): shifting_xp(sokoban, x, y);
        break;
        case (66): shifting_xp(sokoban, x, y);
        break;
        case (67): shifting_xp(sokoban, x, y);
        break;
        case (68): shifting_xp(sokoban, x, y);
        break;
    }
}

void shifting_xp(soko_t *sokoban, int x, int y)
{
    if (sokoban->tab[sokoban->p_y + y][sokoban->p_x + x] == 'X' &&
    sokoban->tab[sokoban->p_y + y + y][sokoban->p_x + x + x] != '#' &&
    sokoban->tab[sokoban->p_y + y + y][sokoban->p_x + x + x] != 'X') {
        sokoban->tab[sokoban->p_y][sokoban->p_x] = ' ';
        sokoban->p_y = sokoban->p_y + y;
        sokoban->p_x = sokoban->p_x + x;
        sokoban->tab[sokoban->p_y + y][sokoban->p_x + x] = 'X';
        sokoban->tab[sokoban->p_y][sokoban->p_x] = 'P';
    }
    if (sokoban->tab[sokoban->p_y + y][sokoban->p_x + x] != '#'
    && sokoban->tab[sokoban->p_y + y][sokoban->p_x + x] != 'X' &&
    sokoban->tab[sokoban->p_y + y + y][sokoban->p_x + x + x] != 'x') {
        sokoban->tab[sokoban->p_y][sokoban->p_x] = ' ';
        sokoban->p_y = sokoban->p_y + y;
        sokoban->p_x = sokoban->p_x + x;
        sokoban->tab[sokoban->p_y][sokoban->p_x] = 'P';
    }
}

void move_p(soko_t *sokoban, int key)
{
    int x = 0;
    int y = 0;
    
    switch(key) {
        case(65): y = -1;
        break;
        case(66): y = 1;
        break;
        case(67): x = 1;
        break;
        case(68): x = -1;
        break;
    }
    if (key == 32) {
        find_p(my_arrcpy(sokoban->tab, sokoban->tab2), sokoban);
    } else
        shifting(sokoban, x, y);
}