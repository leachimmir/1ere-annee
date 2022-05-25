/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main for printf
*/
#include "../include/my.h"

int my_char(char c, char *next)
{
    for (int i = 0; next[i] != '\0'; i++) {
        if (c == next[i]) {
            return(EXIT);
        }
    }
    return (SUCCESS);
}

int operator(char c, char next)
{
    if (c == '%' && next == '%') {
        my_putchar('%');
        return 2;
    }
    if (c == '\\' && next == '\\') {
         my_putchar('\\');
        return 2;
    }
    return 0;
}

char *my_printf(char *str, ...)
{
    va_list list;
    va_start(list ,str);
    int mac = 0;
    
    if (!(str))
        exit(FAILURE); 
    for (int i = 0; str[i] != '\0'; i++)
    {
        i += operator(str[i], str[i + 1]);
       
        if (str[i] == '%' && str[i + 1] != '\0' && str[i + 1] != '%' 
        && my_char(str[i + 1], "cisduoxXSb") != 0) {  
            my_arg_create(str[i + 1], list);
            i += 1;
            mac = 1;
        }
        i += operator(str[i], str[i + 1]);
        if (mac == 0)
            my_putchar(str[i]);
        mac = 0;
    }
    va_end(list);
    return (str);
}
int main(int ac , char **av)
{
    char *str = "lala";
    int b = 12;
    my_printf("%s, %d\n",str, b);

    return 0;
}