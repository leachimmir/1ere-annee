/*
** EPITECH PROJECT, 2022
** free.c
** File description:
** free
*/
#include "../include/my.h"

void free_array(char **arr)
{
    for (int i = 0; arr[i]; i++)
        free(arr[i]);
}