/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "../include/my.h"

int check_map(char *buff, int index)
{
    for (int i = index; buff[i] != '\0'; i++) {
        if (buff[i] != 'o' && buff[i] != '.' && buff[i] != '\n')
            return (FAILURE);
    }
    return (SUCCESS);
}

int smallest_number(int **tab, int i, int l)
{
    if (tab[i][l] == 0)
        return 0;
    if (tab[i - 1][l] <= tab[i - 1][l - 1] && tab[i - 1][l] <= tab[i][l - 1])
        return (tab[i - 1][l] + 1);
    if (tab[i][l - 1] <= tab[i - 1][l] && tab[i][l - 1] <= tab[i - 1][l - 1])
        return (tab[i][l - 1] + 1);
    if (tab[i - 1][l - 1] <= tab[i][l - 1] 
    && tab[i - 1][l - 1] <= tab[i - 1][l])
        return (tab[i - 1][l - 1] + 1);
    return (SUCCESS);
}

int **minor(int **tab, char *buffer, int col)
{
    for (int i = 1; i < my_getnbr(buffer); i++) {
        for (int l = 1; l < col - 1; l++) {
            tab[i][l] = smallest_number(tab ,i, l);
        }
    }
    return (tab);
}

int **modif_tab(char *buffer)
{
    int col = count_col(buffer);
    int **tab = my_str_to_word_array(buffer, '\n', 1, col);
    int *pos;
    char **tabend;

    tab = minor(tab, buffer, col);
    pos = check_bn(tab, col - 1, my_getnbr(buffer));
    tabend = my_str_to_word_array_2(buffer, '\n', col);
    put_x(tabend, pos, buffer, col);
    free(pos);
    free_iarray(tab);
    free_carray(tabend);
    free(buffer);
    return (SUCCESS);
}

int main(int ac ,char **av)
{   
    struct stat file_size;
    int size;
    char *buffer;
    int fd;
    
    if (stat(av[1], &file_size) != 0)
        return (FAILURE);
    size = file_size.st_size;
    if (size == 0)
        return (84);
    buffer = malloc(sizeof(char) * (size + 1));
    buffer[size] = '\0';
    if (open(av[1], O_RDONLY) < 0)
        return (FAILURE);
    fd = open(av[1], O_RDONLY);
    if (read(fd, buffer, size) < 0)
        return (FAILURE);
    modif_tab(buffer);
    close_free(fd, buffer);
    return (SUCCESS);
}
