/*
** EPITECH PROJECT, 2021
** my_strdup.c
** File description:
** my_strdup
*/
#include "../../include/my.h"

char *my_strdup(char *str)
{
    char *res;
    int i = 0;

    res = malloc(sizeof(char) * my_strlen(str) + 1);
    for (; str[i] != '\0'; i++) {
        res[i] = str[i];
    }
    res[i + 1] = '\0';
    return res;
}
