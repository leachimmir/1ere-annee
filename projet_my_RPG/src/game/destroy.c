/*
** EPITECH PROJECT, 2022
** File description:
** destroy
*/

#include "rpg.h"

void destroy_all(rpg_t *rpg)
{
    sfRenderWindow_clear(rpg->window, sfBlack);
    sfRenderWindow_destroy(rpg->window);
}
