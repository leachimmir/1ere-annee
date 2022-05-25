/*
** EPITECH PROJECT, 2022
** functions.c
** File description:
** functions
*/

#include "../include/my.h"

int my_strlen(char *str)
{
    int i = 0;

    if (str == NULL)
        return (0);
    for (i = 0; str[i] != '\0'; i++);
    return (i);
}

void my_putstr(char *str)
{
    if (str != NULL)
        write(1, str, my_strlen(str));
}

char *my_strcat(char *start, char middle, char *end)
{
    int string_size;
    char *res;
    int i = 0;
    int j = 0;

    if (end == NULL)
        end = "\0";
    string_size = my_strlen(start) + my_strlen(end) + 1;
    res = malloc(sizeof(char) * string_size + 1);
    for (i = 0; start[i] != '\0'; i++, j++)
        res[j] = start[i];
    res[j] = middle;
    j++;
    for (i = 0; end[i] != '\0'; i++, j++)
        res[j] = end[i];
    res[j] = '\0';
    return res;
}

int get_slash(char *pwd)
{
    int i = 0;
    int n = 0;

    for (i = 0; pwd[i] != '\0'; i++) {
        if (pwd[i] == '/')
            n = i + 1;
    }
    return n;
}

int is_alpha_num(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    if (c >= 'a' && c <= 'z')
        return (1);
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}