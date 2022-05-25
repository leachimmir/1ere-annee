/*
** EPITECH PROJECT, 2022
** prompt.c
** File description:
** prompt
*/
#include "../include/my.h"

void prompt(void)
{
    my_putstr("$> ");
}

char *my_getline(void)
{
    char *line = NULL;
    size_t size = 0;
    int len;

    if (getline(&line, &size, stdin) == -1) {
        my_putstr("exit\n");
        exit(0);
    }
    len = my_strlen(line);
    if (line[len - 1] == '\n')
        line[len - 1] = '\0';
    line = change_line(line);
    return(line);
}

void minishell1(char **env)
{
    char *line;
    char **redir;

    while(1) {
        prompt();
        line = my_getline();
        if (line == NULL)
            return;
        if (my_strlen(line) > 0) {
            //redir = 
            env = line_to_exec(line, env, 1);
            if (env == NULL)
                return;
            free(line);
        }
    }
}


// if (check_redir(env, av, id_fork) == 1) {
//         free_array(av);
//         env = NULL;
//         return env;
//     }