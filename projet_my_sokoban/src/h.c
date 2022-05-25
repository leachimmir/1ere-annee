/*
** EPITECH PROJECT, 2022
** my_h.c
** File description:
** -h for sokoban
*/
#include "../include/my.h"

int my_h(char **av, int ac)
{
    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h') {
            my_putstr("USAGE\n");
            my_putstr("./my_sokoban map\n");
            my_putstr("                             DESCRIPTION\n");
            my_putstr("      map  file representing the warehouse map, c");
            my_putstr("ontaining '#' for walls, \n      'p' for the player,");
            my_putstr(" 'X' for boxes and '0' for storage locations.");
            return (1);
        }
    }
}