/*
** EPITECH PROJECT, 2021
** my_str_to_word_array.c
** File description:
** my_str_to_word_array
*/
#include "../include/my.h"

int count_line(char *str, char c)
{
    int lines = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c)
            lines++;
    }
    return (lines);
}

int count_col(char *str)
{
    int col = 0;
    int i = 0;
    
    for (; str[i] != '\n'; i++);
    i++;
    for (; str[i] != '\n'; i++) {
        col++;
    }
    return (col + 1);
}

char change_char(char c, int nb)
{
    if (nb == 2)
        return c;
    if (c == '.')
        c = 1;
    if (c == 'o')
        c = 0;
    return c;
}

int **my_str_to_word_array(char *str, char c, int nb, int colu)
{
    int index = count_number(str);
    int i = 0;
    int line = my_getnbr(str);
    int column = colu;
    int **tab = malloc(sizeof(int *) * (line + 1));

    for (; i < line; i++) {
        tab[i] = malloc(sizeof(int) * column - 1);
        for (int col = 0; str[index] != c 
        && str[index] != '\0'; col++, index++) {
            tab[i][col] = change_char(str[index], nb);
        }
        index++;
    }
    tab[i] = NULL;
    return (tab);
}

char **my_str_to_word_array_2(char *str, char c, int colu)
{
    int index = count_number(str);
    int i = 0;
    int line = my_getnbr(str);
    int column = colu;
    char **tab = malloc(sizeof(char *) * (line + 1));

    for (; i < line; i++) {
        tab[i] = malloc(sizeof(char) * column);
        for (int col = 0; str[index] != c 
        && str[index] != '\0'; col++, index++) {
            tab[i][col] = change_char(str[index], 2);
        }
        tab[i][column] = '\0';
        index++;
    }
    tab[i] = NULL;
    return (tab);
}