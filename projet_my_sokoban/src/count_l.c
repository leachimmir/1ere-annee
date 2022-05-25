/*
** EPITECH PROJECT, 2022
** count_l
** File description:
** count numbers of line
*/
#include "../include/my.h"

int count_l(char *buffer, char c)
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