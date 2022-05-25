/*
** EPITECH PROJECT, 2022
** File description:
** print_quete
*/

#include "rpg.h"

int check_dialogue_mouseclick(rpg_t *rpg)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(rpg->window);
    for (int i = 0; i <= 2; i++) {
        if (mouse.x > rpg->d.b[i].size.left
        && sfMouse_isButtonPressed(sfMouseLeft)
        && mouse.x < rpg->d.b[i].size.left + rpg->d.b[i].size.width
        && mouse.y > rpg->d.b[i].size.top && mouse.y <
        rpg->d.b[i].size.top + rpg->d.b[i].size.height) {
            my_buttonsound(rpg->d.b);
            return i;
        }
    }
    return 0;
}

void check_dialogue_to_print(rpg_t *rpg)
{
    if (PLAYER_X >= 973 && PLAYER_X <= 1141 &&
    PLAYER_Y >= 696 && PLAYER_Y <= 815 && MAP_STAT == VILLAGE) {
        first_dialogue(rpg);
    }
    if (PLAYER_X >= 966 && PLAYER_X <= 1106 && rpg->ennemy_status == 0 &&
    PLAYER_Y >= 430 && PLAYER_Y <= 542 && MAP_STAT == ARENE) {
        second_dialogue(rpg);
    }
    if (PLAYER_X >= 966 && PLAYER_X <= 1106 && rpg->ennemy_status == 2 &&
    PLAYER_Y >= 430 && PLAYER_Y <= 542 && MAP_STAT == ARENE) {
        third_dialogue(rpg);
    }
}
