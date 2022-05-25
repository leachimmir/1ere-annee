/*
** EPITECH PROJECT, 2022
** read_file.c
** File description:
** read_file
*/
#include "../include/my.h"

char *read_file(char **av, int ac, soko_t *sokoban)
{
    struct stat size;
    int file_size;
    int fd;
    int ret;

    sokoban->buffer = NULL;
    if (my_h(av, ac) == 1)
        return ("h");
    fd = open(av[1], O_RDONLY);
    if (fd != -1) {
        stat(av[1], &size);
        file_size = size.st_size;
        sokoban->buffer = malloc(sizeof(char) * (file_size + 1));
        ret = read(fd, sokoban->buffer, file_size);
        sokoban->buffer[ret] = '\0';
        close(fd);
        if (ret != -1) {
            return sokoban->buffer;
        }
    } else
        return NULL;
}