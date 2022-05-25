/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <limits.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <time.h>

#ifndef MY_H_
#define MY_H_

char *del_tab(char *str);
char *del_char(char *str, int pos);
char *del_space(char *str);
char *change_str(char *str);
char *change_line(char *str);
void print_env(char **env);
int my_envcmp(char *str, char *str2);
char **copy_env(char **env);
int check_in_env(char **env, char *search);
void my_putstr_error(char *str);
void print_error(int status);
void my_execve(char *name, char **av, char **env);
void my_exec(char **av, char **path, char **env);
int check_redir(char **env, char **av, int id_fork);
char **line_to_exec(char *line, char **env, int id_fork);
char **exe_env(char **av, char **env, int id_fork);
char **exe_out(char **av, char **env, int id_fork);
void execute(char **av, char **env);
void execute_fork(char **av, char **env, int id_fork);
void free_array(char **arr);
int my_strlen(char *str);
void my_putstr(char *str);
char *my_strcat(char *start, char middle, char *end);
int get_backslash(char *pwd);
int count_line(char *str, char c);
int count_col(char *str, char c);
char **my_str_to_word_array(char *str, char c);
int my_strcmp(char *s1, char *s2);
void prompt(void);
char *my_getline(void);
void minishell1(char **env);
char **my_setenv(char **env, char **av);
char **my_unsetenv(char **env, char **av);
int is_alpha_num(char c);
void my_exec(char **av, char **path, char **env);
char **my_cd(char **env, char **av);

#endif
