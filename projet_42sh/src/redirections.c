/*
** EPITECH PROJECT, 2022
** redirections
** File description:
** redirections
*/
#include "../include/my.h"

char **change_av(char **av)
{
    int j = 0;
    int index = 0;

    for (int i = 0; av[i]; i++) {
        if (strcmp(av[i], "<") == 0 || strcmp(av[i], ">") == 0 
        || strcmp(av[i], ">>") == 0 || strcmp(av[i], "<<") == 0) {
            index = i;
            for (int i = index + 1; av[i]; i++)
                free(av[i]);
            av[index] = NULL;
            return av;
            }
        }
    return av;
}

int check_in_av(char **av, char *search)
{
    for (int i = 0; av[i]; i++) {
        if (my_strcmp(av[i], search) == 0)
           return i;
    }
    return -1;
}

int simp_redir(char **env, char **av, int id_fork, int redir)
{
    int file = 0;
    char *buffer;
    pid_t pid;

    pid = fork();
    if (pid == 0) {
        file = open(av[redir + 1], O_WRONLY | O_CREAT | O_TRUNC ,0644);
        if (file == -1)
            return -1;
        dup2(file, STDOUT_FILENO);
        av = change_av(av);
        execute_fork(av,env, id_fork);
        close(file);
    }
    return 0;
}

int adv_redir(char **env, char **av, int id_fork, int redir)
{   
    int file = 0;
    pid_t pid;

    pid = fork();
    if (pid == 0) {
        file = open(av[redir + 1], O_WRONLY | O_CREAT | O_APPEND ,0644);
    if (file == -1)
        return -1;
        dup2(file, STDOUT_FILENO);
        av = change_av(av);
        execute_fork(av, env, id_fork);
        return 0;
    }
}

int check_redir(char **env, char **av, int id_fork)
{
    int ac = 0;
    int redir = 0;
    int file = 0;

    for (; av[ac]; ac++);
    if (ac < 2)
        return 84;
    redir = check_in_av(av, ">");
    if (redir != -1) {
        simp_redir(env, av, id_fork, redir); 
        free_array(av);
        return 1;
    }
    redir = check_in_av(av, ">>");
    if (redir != -1) {
        adv_redir(env, av, id_fork, redir);
        free_array(av);
        return 1;
    }
    return 0;
}
