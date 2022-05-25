/*
** EPITECH PROJECT, 2022
** change_line.c
** File description:
** formate
*/
#include "../include/my.h"

char *del_tab(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == '\t')
            str[i] = ' ';
    return (str);
}

char *del_char(char *str, int pos)
{
    int i = 0;

    for (i = pos; str[i] != '\0'; i++)
        str[i] = str[i + 1];
    str[i] = '\0';
    return (str);
}

char *del_space(char *str)
{
    int i = 0;

    while (str[0] == ' ')
        del_char(str, 0);
    for (i = 1; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i - 1] == ' ') {
            del_char(str, i);
            i--;
        }
    }
    for (i = my_strlen(str) - 1; i > 0; i++)
        if (str[i] == ' ')
            str[i] = '\0';
        else
            return (str);
    return (str);
}

char *change_str(char *str)
{
    char c = 0;
   
    for (int i = 0; str[i] != '\0'; i++) {
        if (i > 0) {
            c = str[i - 1];
            if (str[i] == ' ' && (c == '>' || c == '<' || c == '|')) {
                del_char(str, i);
                i--;
            }
        }
        c = str[i + 1];
        if (str[i] == ' ' && (c == '>' || c == '<' || c == '|')) {
                del_char(str, i);
                i--;
        }
    }
    return str;
}

char *change_line(char *str)
{   
    str = del_tab(str);
    str = del_space(str);
    //str = change_str(str);
    return str;
}