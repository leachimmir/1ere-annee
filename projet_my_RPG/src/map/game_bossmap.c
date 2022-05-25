/*
** EPITECH PROJECT, 2022
** File description:
** game_bossmap
*/

#include "rpg.h"

void check_boss_changemap(rpg_t *rpg)
{
    if (KEYPRESS) {
        if ((MAP_STAT == BOSS) && PLAYER_X >= 1876
        && PLAYER_Y >= 388 && PLAYER_Y <= 532 && KEY_RIGHT) {
            PLAYER_X = 1001;
            PLAYER_Y = -11;
            draw_rightmap(rpg);
        }
        if ((MAP_STAT == BOSS) && PLAYER_X < 1400)
            rpg->game_status = 7;
    }
}

void draw_bossmap(rpg_t *rpg)
{
    MAP_STAT = BOSS;
    sfRenderWindow_drawSprite(rpg->window, rpg->map.boss_s, NULL);
    display_items_spawn(rpg);
    display_inventory(rpg);
    check_boss_changemap(rpg);
}
