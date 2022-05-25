/*
** EPITECH PROJECT, 2022
** File description:
** game_rightmap
*/

#include "rpg.h"

void check_tree(rpg_t *rpg)
{
    if (KEYPRESS) {
        if (KEY_CTRL && rpg->inv.axe == 1 && PLAYER_X >= 945
        && PLAYER_X <= 1106 && PLAYER_Y >= 24 && PLAYER_Y <= 38)
        rpg->spawn.tree_status = 1;
    }
    if ((MAP_STAT == RIGHT) && rpg->spawn.tree_status == 0)
        sfRenderWindow_drawSprite(rpg->window, rpg->map.right_tree_s, NULL);
}

void check_rightmap_inside(rpg_t *rpg)
{
    if (PLAYER_Y >= 556 && PLAYER_Y <= 570
        && PLAYER_X >= 1806 && PLAYER_X <= 1834) {
        PLAYER_X = 728;
        PLAYER_Y = 815;
        draw_houseone(rpg);
    }
}

void check_right_changemap(rpg_t *rpg)
{
    if (KEYPRESS) {
        if ((MAP_STAT == RIGHT) && PLAYER_X < 20
        && PLAYER_Y >= 171 && PLAYER_Y <= 220 && KEY_LEFT) {
            PLAYER_X = 1880;
            PLAYER_Y = 206;
            draw_village(rpg);
        }
        if ((MAP_STAT == RIGHT) && PLAYER_Y <= 10
        && rpg->spawn.tree_status == 1 && PLAYER_X >= 959
        && PLAYER_X <= 1050 && KEY_UP) {
            PLAYER_X = 1869;
            PLAYER_Y = 472;
            draw_bossmap(rpg);
        }
        if ((MAP_STAT == RIGHT) && KEY_UP)
            check_rightmap_inside(rpg);
    }
    check_tree(rpg);
}

void draw_rightmap(rpg_t *rpg)
{
    MAP_STAT = RIGHT;
    sfRenderWindow_drawSprite(rpg->window, rpg->map.right_s, NULL);
    display_items_spawn(rpg);
    display_inventory(rpg);
    check_right_changemap(rpg);
}
