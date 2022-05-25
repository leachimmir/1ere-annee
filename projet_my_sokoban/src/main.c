/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main for sokoban
*/
#include "../include/my.h"

int launch(char *buffer, soko_t *sokoban)
{
    sokoban->line = count_line(buffer, '\n');
    sokoban->tab = my_str_to_word_array(buffer, '\n');
    sokoban->tab2 = my_str_to_word_array(buffer, '\n');
    count_max_col(sokoban);
    find_p(sokoban->tab, sokoban);
    count_x(buffer, sokoban);
    count_o(buffer, sokoban);
}

int window(soko_t *sokoban)
{
    initscr();
    check_tersize(sokoban);
    noecho();
    print_m(sokoban);
}

int soko(soko_t *sokoban, char *buffer)
{
    launch(buffer, sokoban);
    window(sokoban);
    if (game(sokoban, buffer) == 0) {
        print_m(sokoban);
        endwin();
        return 0;
    }
    return 1;
}

int main(int ac, char **av)
{
    soko_t *sokoban = malloc(sizeof(soko_t));

    sokoban->win = 0;
    if (ac == 2)
        sokoban->buffer = read_file(av, ac, sokoban);
    if (sokoban->buffer == NULL) {
        return 84;
    }
    if (verif_map(sokoban->buffer) == 1) {
        free(sokoban);
        return 84;
    }
    if (soko(sokoban, sokoban->buffer) == 0) {
        free_f(sokoban);
        return 0;
    } else {
        free_f(sokoban);
        return 1;
    }
    return (84);
}