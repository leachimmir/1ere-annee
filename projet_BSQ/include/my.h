/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my.h for BSQ
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h>

#ifndef MY_H_
#define MY_H_
#define FAILURE 84
#define SUCCESS 0
#define EXIT 1

void my_putchar(char c);
int my_strlen(char const *str);
void my_putstr(char *str);
int my_put_nbr(int nb);
char *my_strdup(char *str);
char change_char(char c, int nb);
int count_line(char *str, char c);
int count_col(char *str);
int count_number(char *str);
int **my_str_to_word_array(char *str, char c, int nb, int col);
char **my_str_to_word_array_2(char *str, char c, int col);
int *pos_x(int **tab, int col, int line, int *pos);
int *check_bn(int **tab, int col, int line);
int **modif_tab(char *buffer);
int put_x(char **tab, int *pos, char *buffer, int col);
void close_free(int fd, char *buffer);
int **minor(int **tab, char *buffer, int col);
int my_getnbr(char const *str);
int put_x(char **tab, int *pos, char *buffer, int col);
void free_carray(char **tab);
void free_iarray(int **tab);
#endif
