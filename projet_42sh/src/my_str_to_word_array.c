/*
** EPITECH PROJECT, 2022
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

int count_col(char *str, char c)
{
    int col = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != c)
            col++;
    }
    return (col + 1);
}

char **my_str_to_word_array(char *str, char c)
{   
    int index = 0;
    int i = 0;
    int line = count_line(str, c) + 1;
    int column = count_col(str, c);
    char **tab = malloc(sizeof(char *) * (line + 1));
    int col = 0;

    for (; i < line; i++) {
        tab[i] = malloc(sizeof(char) * column);
        for (col = 0; str[index] != c && str[index] != '\0'; col++, index++) {
            tab[i][col] = str[index];
    }
    tab[i][col] = '\0';
    index++;
    }
    tab[i] = NULL;
    return (tab);
}