/*
** EPITECH PROJECT, 2022
** my_strcmp.c
** File description:
** my_strcmp
*/
#include "../include/my.h"

int my_strcmp(char *s1, char *s2)
{
    int i;

    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }
    return (0);
}