/*
** EPITECH PROJECT, 2022
** File description:
** game_cave
*/

#include "rpg.h"

void check_cave_outside(rpg_t *rpg)
{
    if (KEYPRESS) {
        if ((MAP_STAT == CAVE) && PLAYER_Y >= 790
        && PLAYER_X >= 1090 && PLAYER_X <= 1120 && KEY_DOWN) {
            PLAYER_X = 297;
            PLAYER_Y = 895;
            draw_village(rpg);
        }
    }
}

void draw_cave(rpg_t *rpg)
{
    MAP_STAT = CAVE;

    sfRenderWindow_drawSprite(rpg->window, rpg->map.cave_s, NULL);
    display_items_spawn(rpg);
    display_inventory(rpg);
    check_cave_outside(rpg);
}
