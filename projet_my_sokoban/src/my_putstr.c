/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** my_putstr
*/
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0'){
        i++;
    }
    write(1, str, i);
    return (0);
}
