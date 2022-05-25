/*
** EPITECH PROJECT, 2022
** verify_map.c
** File description:
** verify_map
*/
#include "../include/my.h"

int verif_map(char *str)
{
    int index = 0;
    int p = 0;
    int X = 0;
    int O = 0;

    while (str[index] != '\0') {
        switch (str[index]) {
        case 'P': p++; break;
        case 'X': X++; break;
        case 'O': O++; break;
        case '#': break;
        case '\n': break;
        case ' ': break;
        default: return 1; break;
        }
        index++;
    }
    if (p == 0 || X == 0 || O == 0 || X != O)
        return 1;
    return 0;
}
int check_borders(soko_t *sokoban, int i, int y)
{
    if (sokoban->tab[i][y - 1] == '#' && sokoban->tab[i - 1][y] == '#') {
        sokoban->loose += 1;
        return 0;
    }
    if (sokoban->tab[i][y + 1] == '#' && sokoban->tab[i - 1][y] == '#') {
        sokoban->loose += 1;
        return 0;
    }
    if (sokoban->tab[i][y - 1] == '#' && sokoban->tab[i + 1][y] == '#') {
        sokoban->loose += 1;
        return 0;
    }
    if (sokoban->tab[i][y + 1] == '#' && sokoban->tab[i + 1][y] == '#') {
        sokoban->loose += 1;
        return 0;
    }
}

int check_loose(char *str, soko_t *sokoban, int i)
{
    int o = 0;
    for (int y = 0; str[y]; y++) {
        if (str[y] == 'X') {
            check_borders(sokoban, i, y);
        }
    }
    return 1;
}

int loose(soko_t *sokoban)
{
    for (int i = 0; sokoban->tab[i]; i++) {
        check_loose(sokoban->tab[i], sokoban, i);
    }
    return 0;
}