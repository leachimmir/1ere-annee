/*
** EPITECH PROJECT, 2022
** File description:
** print_third_quete
*/

#include "rpg.h"

void third_dialogue(rpg_t *rpg)
{
    if (rpg->d.third_stat == 0) {
        sfSprite_setPosition(rpg->d.dialogue4_s, (sfVector2f){1300, 700});
        sfRenderWindow_drawSprite(rpg->window, rpg->d.dialogue4_s, NULL);
        rpg->inv.ruby = 1;
    }
}
