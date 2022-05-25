/*
** EPITECH PROJECT, 2022
** my_arrcpy.c
** File description:
** my_arrcpy
*/


#include "../include/my.h"

char *my_strcpy(char *dest, char *src)
{
    int i = 0;

    for (; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}

char **my_arrcpy(char **dest, char **src)
{
    for (int i = 0; src[i] != NULL; i += 1)
        dest[i] = my_strcpy(dest[i], src[i]);
    return dest;
}