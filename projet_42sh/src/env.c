/*
** EPITECH PROJECT, 2022
** my_env.c
** File description:
** my_env
*/
#include "../include/my.h"

void print_env(char **env)
{
    for (int i = 0; env[i] != NULL; i++) {
        my_putstr(env[i]);
        my_putstr("\n");
    }
}

int my_envcmp(char *str, char *str2)
{
  int i = 0;

  while (str[i] != '\0' && str2[i] != '\0') {
        if (str[i] != str2[i])
            return 0;
        i++;
  }
    if (str[i] == '=' && str2[i] == '\0')
        return 1;
    return 0;
}

char **copy_env(char **env)
{
    char **dest = malloc(sizeof(char *) * 500);
    int i;
    int j;
    int a;

    for (a = 0; env[a] != NULL; a++);
    dest = malloc(sizeof(char *) * (a + 1));
    for (i = 0; env[i] != NULL; i++) {
        dest[i] = malloc(sizeof(char) * (my_strlen(env[i]) + 1));
        for (j = 0; env[i][j] != '\0'; j++)
            dest[i][j] = env[i][j];
        dest[i][j] = '\0';
    }
    dest[i] = NULL;
    return (dest);
}

int check_in_env(char **env, char *search)
{
    for (int i = 0; env[i] != NULL; i++) {
        if (my_envcmp(env[i], search))
            return i;
    }
    return -1;
}
