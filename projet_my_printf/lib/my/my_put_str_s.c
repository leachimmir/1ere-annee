/*
** EPITECH PROJECT, 2021
** my_put_str_s.c
** File description:
** my_put_str_s
*/
#include "../../include/my.h"

int my_put_str_s(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] >= 127 ) {
            my_putchar('\\');
            my_put_octa(str[i]);
            i++;
        }
        my_putchar(str[i]);
    }
    return (0);
}