/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** display one by one char of a str
*/

void my_putchar(char c);

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
