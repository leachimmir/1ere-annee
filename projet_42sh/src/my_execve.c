/*
** EPITECH PROJECT, 2022
** exec_2.c
** path description:
** exec_2
*/
#include "../include/my.h"

void my_execve(char *name, char **av, char **env)
{
    DIR *dir = opendir(name);

    if (dir == NULL) {
        execve(name, av, env);
        return;
    }
    my_putstr_error(name);
    my_putstr_error(": Permission denied.\n");
}

void my_exec(char **av, char **path, char **env)
{
    char *fpath;
    int i;

    if (!access(av[0], X_OK)) {
        my_execve(av[0], av, env);
        exit(0);
    }
    if (path != NULL) {
        for (i = 0; path[i] != NULL; i++) {
            fpath = my_strcat(path[i], '/', av[0]);
            if (access(fpath, X_OK) == 0) {
                    my_execve(fpath, av, env);

                exit(0);
            }
            free(fpath);
        }
    }
    my_putstr_error(av[0]);
    my_putstr_error(": Command not found.\n");
    exit(0);
}
