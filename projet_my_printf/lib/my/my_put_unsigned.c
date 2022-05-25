/*
** EPITECH PROJECT, 2021
** my_put_unsigned.c
** File description:
** my_put_unsigned
*/


#include <unistd.h>
void my_putchar(char c);

int my_put_unsigned(unsigned int nb)
{
    if (nb / 10) {
        my_put_unsigned(nb / 10);
        my_putchar(nb % 10 + '0');
    }
    if (nb < 10)
        my_putchar(nb + '0');
    return(0);
}