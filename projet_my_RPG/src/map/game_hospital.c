/*
** EPITECH PROJECT, 2022
** File description:
** game_hospital
*/

#include "rpg.h"

void hospital_discussion(rpg_t *rpg)
{
    sfRenderWindow_drawSprite(rpg->window, rpg->a.end_s, NULL);
}

void check_hospital_outside(rpg_t *rpg)
{
    if (KEYPRESS) {
        if ((MAP_STAT == HOSPITAL) && PLAYER_Y >= 689
        && PLAYER_X >= 749 && PLAYER_X <= 878 && KEY_DOWN) {
            PLAYER_X = 259;
            PLAYER_Y = 444;
            draw_village(rpg);
        }
    }
}

void draw_hospital(rpg_t *rpg)
{
    MAP_STAT = HOSPITAL;
    sfRenderWindow_drawSprite(rpg->window, rpg->map.hospital_s, NULL);
    display_items_spawn(rpg);
    display_inventory(rpg);
    check_hospital_outside(rpg);
    if (PLAYER_X >= 588 && PLAYER_X <= 679
    && PLAYER_Y >= 479 && PLAYER_Y <= 556)
        hospital_discussion(rpg);
}
