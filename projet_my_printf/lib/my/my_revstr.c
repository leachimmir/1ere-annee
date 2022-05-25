/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** my_revstr.c
*/
#include <stdio.h>
#include <string.h>

char *my_revstr(char *str)
{
    int i = 0;
    int x = 0;
    char c = 0;
    
    while (str[x] != '\0') {
        x++;
    }
    x = x - 1;
    while (i < x) {
        c = str[i];
        str[i] = str[x];
        str[x] = c;
        i++;
        x--;
    }
    str[x + i + 1] = '\0';
    return (str);
}
