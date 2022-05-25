/*
** EPITECH PROJECT, 2021
** create_arg.c
** File description:
** create arg
*/
#include "../include/my.h"

int cdsiu(char next, va_list list)
{
    switch (next) {
    case 'c':
        my_putchar((char)va_arg(list, int));
        break;
    case 'd':
        my_put_nbr(va_arg(list, int));
        break;
    case 's':
        my_putstr(va_arg(list, char *));
        break;
    case 'i':
        my_put_nbr(va_arg(list, int));
        break;
    case 'u':
        my_put_unsigned(va_arg(list, unsigned int));
        break;
    }
    return EXIT_SUCCESS;
}

int oxX(char next, va_list list)
{
    switch (next) {
    case 'o':
        my_put_octa(va_arg(list, unsigned int));
        break;
    case 'x':
        my_put_hexa(va_arg(list, unsigned int));
        break;
    case 'X':
        my_put_Hexa(va_arg(list, unsigned int));
        break;
    case 'S':
        my_put_str_s(va_arg(list, char *));
        break;
    case 'b':
        my_put_bin(va_arg(list, unsigned int));
        break;
    }
    return EXIT_SUCCESS;
}

int my_arg_create(char next, va_list list)
{
    if (cdsiu(next, list) != EXIT_SUCCESS) {
        my_putstr("error\n");
        return (FAILURE);
    }
    if (oxX(next, list) != EXIT_SUCCESS) {
        my_putstr("error\n");
        return (FAILURE);
    }
    return EXIT_SUCCESS;
}
