/*
** EPITECH PROJECT, 2021
** my_put_hexa.c
** File description:
** my_put_hexa
*/

#include <unistd.h>
void my_putchar(char c);

int my_put_hexa(unsigned int nb)
{
    char *hex = "abcdef";

     if (nb <= 9)
        my_putchar(nb + '0');
    else if (nb < 17)
        my_putchar(hex[nb - 10]);
    else {
        my_put_hexa(nb / 16);
        my_put_hexa(nb % 16);
    }
    return(0);
}

int my_put_Hexa(unsigned int nb)
{
    char *hex = "ABCDEF";

     if (nb <= 9)
        my_putchar(nb + '0');
    else if (nb < 17)
        my_putchar(hex[nb - 10]);
    else {
        my_put_hexa(nb / 16);
        my_put_hexa(nb % 16);
    }
    return(0);
}