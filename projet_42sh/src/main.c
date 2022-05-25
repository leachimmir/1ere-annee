/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../include/my.h"

int main(int ac, char **av, char **environnement)
{
    char **env = NULL;
    char *pwd[3];

    if (ac != 1)
        return (84);
    if (environnement == NULL)
        return (84);
    env = copy_env(environnement);
    if (check_in_env(env, "OLDPWD") == -1) {
        pwd[0] = "setenv";
        pwd[1] = "OLDPWD";
        pwd[2] = NULL;
        my_setenv(env, pwd);
    }
    minishell1(env);
    free_array(env);
    return (0);
    return (0);
}