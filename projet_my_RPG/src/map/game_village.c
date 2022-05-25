/*
** EPITECH PROJECT, 2022
** File description:
** game_village
*/

#include "rpg.h"

void check_village_inside(rpg_t *rpg)
{
    if (PLAYER_Y >= 885 && PLAYER_Y <= 899
        && PLAYER_X >= 290 && PLAYER_X <= 310) {
        PLAYER_X = 1113;
        PLAYER_Y = 794;
        draw_cave(rpg);
    }
    if (PLAYER_Y >= 437 && PLAYER_Y <= 451
        && PLAYER_X >= 259 && PLAYER_X <= 273) {
        PLAYER_X = 812;
        PLAYER_Y = 696;
        draw_hospital(rpg);
    }
    if (PLAYER_Y >= 654 && PLAYER_Y <= 669
        && PLAYER_X >= 896 && PLAYER_X <= 924) {
        PLAYER_X = 938;
        PLAYER_Y = 668;
        draw_shop(rpg);
    }
}

void check_village_changemap(rpg_t *rpg)
{
    if (KEYPRESS) {
        if ((MAP_STAT == VILLAGE) && PLAYER_X < 10
            && PLAYER_Y >= 185 && PLAYER_Y <= 227 && KEY_LEFT) {
            PLAYER_X = 1873;
            PLAYER_Y = 206;
            draw_leftmap(rpg);
        }
        if ((MAP_STAT == VILLAGE) && PLAYER_X > 1880
            && PLAYER_Y >= 171 && PLAYER_Y <= 220 && KEY_RIGHT) {
            PLAYER_X = 7;
            PLAYER_Y = 206;
            draw_rightmap(rpg);
        }
        if ((MAP_STAT == VILLAGE) && KEY_UP)
            check_village_inside(rpg);
    }
}

void draw_village(rpg_t *rpg)
{
    MAP_STAT = VILLAGE;
    sfRenderWindow_drawSprite(rpg->window, rpg->map.village_s, NULL);
    display_items_spawn(rpg);
    display_inventory(rpg);
    check_dialogue_to_print(rpg);
    check_village_changemap(rpg);
}
