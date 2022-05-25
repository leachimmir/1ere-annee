/*
** EPITECH PROJECT, 2022
** File description:
** game_shop
*/

#include "rpg.h"

void check_shop_outside(rpg_t *rpg)
{
    if (KEYPRESS) {
        if ((MAP_STAT == SHOP) && PLAYER_Y >= 660
        && PLAYER_X >= 903 && PLAYER_X <= 973 && KEY_DOWN) {
            PLAYER_X = 910;
            PLAYER_Y = 661;
            draw_village(rpg);
        }
    }
}

void draw_shop(rpg_t *rpg)
{
    MAP_STAT = SHOP;
    sfRenderWindow_drawSprite(rpg->window, rpg->map.shop_s, NULL);
    display_items_spawn(rpg);
    display_inventory(rpg);
    if (PLAYER_X >= 826 && PLAYER_X <= 1071
    && PLAYER_Y >= 493 && PLAYER_Y <= 598)
        print_shop_dialogue(rpg);
    else
        rpg->s.shop_stat = 0;
    check_shop_outside(rpg);
}
