/*
** EPITECH PROJECT, 2022
** env_2.c
** File description:
** setenv unsetenv
*/
#include "../include/my.h"

char **my_setenv(char **env, char **av)
{
    int i;
    char *new_env;

    if (av[1] == NULL) {
        print_env(env);
        return (env);
    }
    new_env = my_strcat(av[1], '=', av[2]);
    i = check_in_env(env, av[1]);
    if (i != -1) {
        free(env[i]);
        env[i] = new_env;
        return (env);
    }
    for (i = 0; env[i] != NULL; i++);
    env[i] = new_env;
    env[i + 1] = NULL;
    return (env);
}

char **my_unsetenv(char **env, char **av)
{
    int i = 1;
    int j;

    while (av[i] != NULL) {
        j = check_in_env(env, av[i]);
        if (j != -1) {
            free(env[j]);
            for (j = j + 1; env[j] != NULL; j++)
                env[j - 1] = env[j];
            env[j - 1] = NULL;
        }
        i++;
    }
    return (env);
}