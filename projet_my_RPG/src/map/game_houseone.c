/*
** EPITECH PROJECT, 2022
** File description:
** game_houseone
*/

#include "rpg.h"

void check_houseone_outside(rpg_t *rpg)
{
    if (KEYPRESS) {
        if ((MAP_STAT == HOUSE1) && PLAYER_Y >= 808
        && PLAYER_X >= 721 && PLAYER_X <= 742 && KEY_DOWN) {
            PLAYER_Y = 563;
            PLAYER_X = 1820;
            draw_rightmap(rpg);
        }
    }
}

void draw_houseone(rpg_t *rpg)
{
    MAP_STAT = HOUSE1;

    sfRenderWindow_drawSprite(rpg->window, rpg->map.house1_s, NULL);
    display_items_spawn(rpg);
    display_inventory(rpg);
    check_houseone_outside(rpg);
}
