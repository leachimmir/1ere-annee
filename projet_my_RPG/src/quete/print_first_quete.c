/*
** EPITECH PROJECT, 2022
** File description:
** print_first_quete
*/

#include "rpg.h"

void print_first_quete(rpg_t *rpg)
{
    int click = check_dialogue_mouseclick(rpg);
    sfSprite_setPosition(rpg->d.dialogue1_s, (sfVector2f){1300, 700});
    sfRenderWindow_drawSprite(rpg->window, rpg->d.dialogue1_s, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window, rpg->d.b[1].rect, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window, rpg->d.b[2].rect, NULL);
    sfRenderWindow_setMouseCursorVisible(rpg->window, sfTrue);
    if (click == 1)
        rpg->d.first_stat = 1;
    if (click == 2)
        rpg->d.first_stat = 2;
}

void first_dialogue(rpg_t *rpg)
{
    if (rpg->d.first_stat == 0)
            print_first_quete(rpg);
    if (rpg->d.first_stat == 1) {
        sfSprite_setPosition(rpg->d.dialogue20_s, (sfVector2f){1300, 700});
        sfRenderWindow_drawSprite(rpg->window, rpg->d.dialogue20_s, NULL);
    }
    if (rpg->d.first_stat == 2) {
        sfSprite_setPosition(rpg->d.dialogue21_s, (sfVector2f){1300, 700});
        sfRenderWindow_drawSprite(rpg->window, rpg->d.dialogue21_s, NULL);
        sfRenderWindow_drawRectangleShape(rpg->window, rpg->d.b[1].rect, NULL);
        if (check_dialogue_mouseclick(rpg) == 1)
            rpg->d.first_stat = 1;
    }
}
