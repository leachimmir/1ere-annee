/*
** EPITECH PROJECT, 2022
** exec.c
** File description:
** exec
*/
#include "../include/my.h"

char **line_to_exec(char *line, char **env, int id_fork)
{
    char **av;

    av = my_str_to_word_array(line, ' ');
    if (check_redir(env, av, id_fork) == 1) {
        return env;
    }
    env = exe_env(av, env, id_fork);
    free_array(av);
    return env;
}

char **exe_env(char **av, char **env, int id_fork)
{
    if (my_strcmp(av[0], "env") == 0) {
        print_env(env);
        return (env);
    }
    if (my_strcmp(av[0], "setenv") == 0) {
        env = my_setenv(env, av);
        return (env);
    }
    if (my_strcmp(av[0], "unsetenv") == 0) {
        env = my_unsetenv(env, av);
        return (env);
    }
    return (exe_out(av, env, id_fork));
}

char **exe_out(char **av, char **env, int id_fork)
{
    if (my_strcmp(av[0], "exit") == 0) {
        my_putstr("exit\n");
        return (NULL);
    }
    if (my_strcmp(av[0], "cd") == 0) {
        env = my_cd(env, av);
        return (env);
    }
    execute_fork(av, env, id_fork);
    return (env);
}

void execute(char **av, char **env)
{
    int i = check_in_env(env, "PATH");
    char **path = NULL;

    if (i != -1)
        path = my_str_to_word_array(env[i] + 5, ':');
    my_exec(av, path, env);
    if (path != NULL)
        free_array(path);
}

void execute_fork(char **av, char **env, int id_fork)
{
    int status;
    pid_t pid;

    if (id_fork > 0) {
        pid = fork();
        if (pid == 0) {
            execute(av, env);
         } else
            wait(&status);
        print_error(status);
    } else
        execute(av, env);
}
