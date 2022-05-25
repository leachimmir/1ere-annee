/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** my_strlen
*/

int my_strlen(char *str)
{
    int len = 0;

    for (len = 0; str[len] != '\0'; len++);
    return len;
}