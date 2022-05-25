/*
** EPITECH PROJECT, 2022
** File description:
** main_menu_loop
*/

#include "rpg.h"

void move_back_bis(rpg_t *rpg)
{
    if (rpg->mm.posfive.x < -1920) {
        rpg->mm.posfive.x = 0;
        sfSprite_setPosition(rpg->mm.fivebackground, rpg->mm.posfive);
    }
}

void move_back(rpg_t *rpg)
{
    if (rpg->mm.posone.x < -3840) {
        rpg->mm.posone.x = 0;
        sfSprite_setPosition(rpg->mm.onebackground, rpg->mm.posone);
    }
    if (rpg->mm.postwo.x < -1920) {
        rpg->mm.postwo.x = 0;
        sfSprite_setPosition(rpg->mm.twobackground, rpg->mm.postwo);
    }
    if (rpg->mm.posthree.x < -1920) {
        rpg->mm.posthree.x = 0;
        sfSprite_setPosition(rpg->mm.threebackground, rpg->mm.posthree);
    }
    if (rpg->mm.posfour.x < -3840) {
        rpg->mm.posfour.x = 0;
        sfSprite_setPosition(rpg->mm.fourbackground, rpg->mm.posfour);
    }
    move_back_bis(rpg);
}

void main_menu(rpg_t *rpg)
{
    if (rpg->game_status == 0 || rpg->game_status == 1)
            drawSpr(rpg);
    if (rpg->game_status == 0) {
        spritemove(rpg);
    }
    sfRenderWindow_display(rpg->window);
    if (rpg->game_status == 0) {
        getpos(rpg);
        move_back(rpg);
    }
    if (rpg->game_status == 1) {
        rpg->mm.pos.x += 7;
    }
    if (rpg->mm.pos.x >= 2000)
        rpg->game_status = 4;
}
