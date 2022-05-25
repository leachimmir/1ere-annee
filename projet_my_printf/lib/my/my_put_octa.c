/*
** EPITECH PROJECT, 2021
** my_put_octa.c
** File description:
** my_put_octa
*/


#include <unistd.h>
#include "../../include/my.h"

void my_putchar(char c);

int my_put_octa(unsigned int nb)
{
    if (nb < 8)
        my_putchar(nb + '0');
    if (nb / 8) {
        my_put_octa(nb / 8);
        my_putchar(nb % 8 + '0');
    }
    return(0);
}
