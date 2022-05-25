/*
** EPITECH PROJECT, 2022
** File description:
** game_leftmap
*/

#include "rpg.h"

void check_leftmap_inside(rpg_t *rpg)
{
    if (PLAYER_Y >= 556 && PLAYER_Y <= 570
        && PLAYER_X >= 39 && PLAYER_X <= 74) {
        PLAYER_X = 728;
        PLAYER_Y = 815;
        draw_housetwo(rpg);
    }
}

void check_left_changemap(rpg_t *rpg)
{
    if (KEYPRESS) {
        if ((MAP_STAT == LEFT) && PLAYER_Y < 10
        && PLAYER_X > 870 && PLAYER_X < 920 && KEY_UP) {
            PLAYER_X = 980;
            PLAYER_Y = 934;
            draw_arenemap(rpg);
        }
        if ((MAP_STAT == LEFT) && PLAYER_X > 1873
        && PLAYER_Y >= 171 && PLAYER_Y <= 213 && KEY_RIGHT) {
            PLAYER_X = 0;
            PLAYER_Y = 213;
            draw_village(rpg);
        }
        if ((MAP_STAT == LEFT) && KEY_UP)
            check_leftmap_inside(rpg);
    }
}

void draw_leftmap(rpg_t *rpg)
{
    MAP_STAT = LEFT;
    sfRenderWindow_drawSprite(rpg->window, rpg->map.left_s, NULL);
    display_items_spawn(rpg);
    display_inventory(rpg);
    check_left_changemap(rpg);
}
