/*
** EPITECH PROJECT, 2022
** File description:
** print_second_quete
*/

#include "rpg.h"

void second_say_no(rpg_t *rpg)
{
    sfSprite_setPosition(rpg->d.dialogue33_s, (sfVector2f){1300, 700});
    sfRenderWindow_drawSprite(rpg->window, rpg->d.dialogue33_s, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window, rpg->d.b[1].rect, NULL);
    if (check_dialogue_mouseclick(rpg) == 1)
        rpg->d.second_stat = 2;
}

void print_second_quete(rpg_t *rpg)
{
    int click = check_dialogue_mouseclick(rpg);
    sfSprite_setPosition(rpg->d.dialogue31_s, (sfVector2f){1300, 700});
    sfRenderWindow_drawSprite(rpg->window, rpg->d.dialogue31_s, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window, rpg->d.b[1].rect, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window, rpg->d.b[2].rect, NULL);
    sfRenderWindow_setMouseCursorVisible(rpg->window, sfTrue);
    if (click == 1)
        rpg->d.second_stat = 2;
    if (click == 2)
        rpg->d.second_stat = 3;
}

void second_dialogue(rpg_t *rpg)
{
    if (rpg->d.second_stat == 0) {
        sfSprite_setPosition(rpg->d.dialogue30_s, (sfVector2f){1300, 700});
        sfRenderWindow_drawSprite(rpg->window, rpg->d.dialogue30_s, NULL);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            rpg->d.second_stat = 1;
    }
    if (rpg->d.second_stat == 1)
        print_second_quete(rpg);
    if (rpg->d.second_stat == 2) {
        sfSprite_setPosition(rpg->d.dialogue32_s, (sfVector2f){1300, 700});
        sfRenderWindow_drawSprite(rpg->window, rpg->d.dialogue32_s, NULL);
        rpg->ennemy_status = 1;
    }
    if (rpg->d.second_stat == 3) {
        second_say_no(rpg);
    }
}
