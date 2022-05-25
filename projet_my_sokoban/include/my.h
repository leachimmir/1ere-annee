/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdlib.h>
    #include <stddef.h>
    #include <sys/stat.h>
    #include <limits.h>
    #include <curses.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <fcntl.h>
    #include <ncurses.h>

typedef struct sokoban_s {
    int line;
    int column;
    int window_x;
    int window_y;
    int p_x;
    int p_y;
    int nb_x;
    int nb_o;
    int win;
    int key_pressed;
    char **tab;
    char **tab2;
    int **x_pos;
    int **o_pos;
    int loose;
    char *buffer;
} soko_t;

int check_tersize(soko_t *sokoban);
char *read_file(char **av, int ac, soko_t *sokoban);
int my_h(char **av, int ac);
void my_putchar(char c);
int my_putstr(char const *str);
int verif_map(char *str);
int count_l(char *buffer, char c);
int count_max_col(soko_t *sokoban);
int count_x(char *buffer, soko_t *sokoban);
int count_o(char *buffer, soko_t *sokoban);
int find_p(char **tab, soko_t *sokoban);
char **shift(soko_t *sokoban, int x, int y);
void check_z(soko_t *sokoban);
int game(soko_t *sokoban, char *buffer);
void free_f(soko_t *sokoban);
void pos_o(soko_t *sokoban, int x, int y, int index_o);
void pos_x(soko_t *sokoban, int x, int y, int index_x);
void malloc_x(soko_t *sokoban);
void malloc_o(soko_t *sokoban);
void shifting(soko_t *sokoban, int x, int y);
void shifting_xp(soko_t *sokoban, int x, int y);
void move_p(soko_t *sokoban, int key);
char *my_strcpy(char *dest, char *src);
char **my_arrcpy(char **dest, char **src);
int count_line(char *buffer, char c);
int count_column(char *buffer, int i, char c);
char **my_str_to_word_array(char *buffer, char c);
int my_strlen(char *str);
void small_ter(soko_t *sokoban);
void print_m(soko_t *sokoban);
int verif_map(char *str);
int loose(soko_t *sokoban);
#endif
