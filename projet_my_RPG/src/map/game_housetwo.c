/*
** EPITECH PROJECT, 2022
** File description:
** game_housetwo
*/

#include "rpg.h"

void check_housetwo_outside(rpg_t *rpg)
{
    if (KEYPRESS) {
        if ((MAP_STAT == HOUSE2) && PLAYER_Y >= 808
        && PLAYER_X >= 721 && PLAYER_X <= 742 && KEY_DOWN) {
            PLAYER_Y = 563;
            PLAYER_X = 60;
            draw_leftmap(rpg);
        }
    }
}

void draw_housetwo(rpg_t *rpg)
{
    MAP_STAT = HOUSE2;

    sfRenderWindow_drawSprite(rpg->window, rpg->map.house1_s, NULL);
    display_items_spawn(rpg);
    display_inventory(rpg);
    check_housetwo_outside(rpg);
}
