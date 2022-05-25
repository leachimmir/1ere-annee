/*
** EPITECH PROJECT, 2022
** cd.c
** File description:
** cd
*/
#include "../include/my.h"

char **my_cd(char **env, char **av)
{
    if (av[1] != NULL)
        chdir(av[1]);
    return (env);
}
