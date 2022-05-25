/*
** EPITECH PROJECT, 2022
** File description:
** display_spawn
*/

#include "rpg.h"

void check_spaw_status(rpg_t *rpg)
{

    if (MAP_STAT == CAVE && PLAYER_X >= 987 && PLAYER_X <= 1015 &&
        PLAYER_Y >= 451 && PLAYER_Y <= 493)
        rpg->inv.sword = 1;
}

void display_items_spawn(rpg_t *rpg)
{
    if (MAP_STAT == CAVE && rpg->inv.sword == 0) {
        sfRenderWindow_drawSprite(rpg->window, rpg->spawn.sword_s, NULL);
    }
    check_spaw_status(rpg);
}
