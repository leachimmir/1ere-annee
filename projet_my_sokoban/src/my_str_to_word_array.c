/*
** EPITECH PROJECT, 2022
** my_str_to_word_array.c
** File description:
** my_str_to_word_array
*/
#include "../include/my.h"

int count_line(char *buffer, char c)
{
    int countline = 0;
    int i = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] == c) {
            countline++;
        }
        i++;
    }
    return (countline);
}

int count_column(char *buffer, int i, char c)
{
    int countcarac = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] != c)
            countcarac++;
        i++;
    }
    return (countcarac);
}

char **my_str_to_word_array(char *buffer, char c)
{
    int countl = count_line(buffer, c);
    char **tab = malloc(sizeof(char *) * (countl + 1));
    int i = 0;
    int tab1 = 0;
    int tab2 = 0;

    while (tab1 != countl) {
        tab[tab1] = malloc(sizeof(char) * (count_column(buffer, i, c) + 1));
        while (buffer[i] != c && buffer[i] != '\0'){
            tab[tab1][tab2] = buffer[i];
            i++;
            tab2 = tab2 + 1;
        }
        tab[tab1][tab2] = '\0';
        tab2 = 0;
        tab1 = tab1 + 1;
        i++;
    }
    tab[tab1] = NULL;
    return (tab);
}
