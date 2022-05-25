/*
** EPITECH PROJECT, 2022
** File description:
** main_menu_sprite_manage
*/

#include "rpg.h"

void move_rect_par(rpg_t *rpg, int offset, int max_value)
{
    if (rpg->mm.rectsprite.left != max_value) {
        rpg->mm.rectsprite.left += offset;
    } else {
        rpg->mm.rectsprite.left = 0;
    }
    sfSprite_setTextureRect(rpg->mm.sprite, rpg->mm.rectsprite);
}

void create_sprite_menu(rpg_t *rpg)
{
    sfSprite_setTexture(rpg->mm.onebackground, rpg->mm.obt, sfFalse);
    sfSprite_setTexture(rpg->mm.twobackground, rpg->mm.tbt, sfFalse);
    sfSprite_setTexture(rpg->mm.threebackground, rpg->mm.thbt, sfFalse);
    sfSprite_setTexture(rpg->mm.fourbackground, rpg->mm.fbt, sfFalse);
    sfSprite_setTexture(rpg->mm.fivebackground, rpg->mm.fibt, sfFalse);
    sfSprite_setPosition(rpg->mm.fivebackground, rpg->mm.posfive);
    sfSprite_setTexture(rpg->mm.sprite, rpg->mm.spriteTexture, sfFalse);
    sfSprite_setTextureRect(rpg->mm.sprite, rpg->mm.rectsprite);
    sfSprite_setTexture(rpg->sprmouse, rpg->mouseTexture, sfFalse);
    sfSprite_setPosition(rpg->sprmouse, rpg->posmouse);
}

void drawSpr(rpg_t *rpg)
{
    sfRenderWindow_drawSprite(rpg->window, rpg->mm.onebackground, NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->mm.twobackground, NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->mm.threebackground, NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->mm.fourbackground, NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->mm.sprite, NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->mm.fivebackground, NULL);
    sfSprite_setPosition(rpg->sprmouse, rpg->posmouse);
    print_mainmenu_button(rpg);
    sfRenderWindow_drawSprite(rpg->window, rpg->sprmouse, NULL);
}

void getpos(rpg_t *rpg)
{
    rpg->mm.pos = sfSprite_getPosition(rpg->mm.sprite);
    rpg->mm.posone = sfSprite_getPosition(rpg->mm.onebackground);
    rpg->mm.postwo = sfSprite_getPosition(rpg->mm.twobackground);
    rpg->mm.posthree = sfSprite_getPosition(rpg->mm.threebackground);
    rpg->mm.posfour = sfSprite_getPosition(rpg->mm.fourbackground);
    rpg->mm.posfive = sfSprite_getPosition(rpg->mm.fivebackground);
}

void spritemove(rpg_t *rpg)
{
    sfSprite_move(rpg->mm.onebackground, rpg->mm.moveone);
    sfSprite_move(rpg->mm.twobackground, rpg->mm.movetwo);
    sfSprite_move(rpg->mm.threebackground, rpg->mm.movethree);
    sfSprite_move(rpg->mm.fourbackground, rpg->mm.movefour);
    sfSprite_move(rpg->mm.fivebackground, rpg->mm.movefive);
}
