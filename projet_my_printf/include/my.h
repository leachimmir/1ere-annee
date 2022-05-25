/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my.h for printf
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

#ifndef MY_H_
#define MY_H_
#define FAILURE 84
#define SUCCESS 0
#define EXIT 1

int my_strlen(char const *str);
char *my_revstr(char *str);
void my_putstr(char *str);
int my_put_str_s(char *str);
char *my_strdup(char *str);
int my_char(char c, char *next);
int operator(char c, char next);
int cdsiu(char next, va_list list);
int oxX(char next, va_list list);
int my_arg_create(char next, va_list list);
char *my_printf(char *str, ...);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_put_octa(unsigned int nb);
int my_put_unsigned(unsigned int nb);
int my_put_hexa(unsigned int nb);
int my_put_Hexa(unsigned int nb);
int my_put_bin(unsigned int nb);
#endif