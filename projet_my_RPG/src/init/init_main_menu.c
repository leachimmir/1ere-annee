/*
** EPITECH PROJECT, 2022
** File description:
** init_main_menu
*/

#include "rpg.h"

void init_values(rpg_t *rpg)
{
    rpg->mm.pos.x = -150;
    rpg->mm.pos.y = 565;
    rpg->mm.posfive.x = 0;
    rpg->mm.posfive.y = -72;
    rpg->mm.moveone.x = -0.5;
    rpg->mm.moveone.y = 0;
    rpg->mm.movetwo.x = -1;
    rpg->mm.movetwo.y = 0;
    rpg->mm.movethree.x = -1.5;
    rpg->mm.movethree.y = 0;
    rpg->mm.movefour.x = -2;
    rpg->mm.movefour.y = 0;
    rpg->mm.movefive.x = -4;
    rpg->mm.movefive.y = 0;
    rpg->mm.rectsprite.top = 0;
    rpg->mm.rectsprite.left = 0;
    rpg->mm.rectsprite.width = 900;
    rpg->mm.rectsprite.height = 600;
}

void init_sprites(rpg_t *rpg)
{
    rpg->mm.spriteTexture = sfTexture_createFromFile(SPRITE_RUN, NULL);
    rpg->mm.sprite = sfSprite_create();
    sfSprite_setTexture(rpg->mm.sprite, rpg->mm.spriteTexture, sfTrue);
    rpg->mm.obt =
        sfTexture_createFromFile("sprites/main_menu/1back.png", NULL);
    rpg->mm.onebackground = sfSprite_create();
    rpg->mm.tbt =
        sfTexture_createFromFile("sprites/main_menu/2back.png", NULL);
    rpg->mm.twobackground = sfSprite_create();
    rpg->mm.thbt =
        sfTexture_createFromFile("sprites/main_menu/3back.png", NULL);
    rpg->mm.threebackground = sfSprite_create();
    rpg->mm.fbt =
        sfTexture_createFromFile("sprites/main_menu/4back.png", NULL);
    rpg->mm.fourbackground = sfSprite_create();
    rpg->mm.fibt =
        sfTexture_createFromFile("sprites/main_menu/5back.png", NULL);
    rpg->mm.fivebackground = sfSprite_create();
}

void init_main_menu(rpg_t *rpg)
{
    init_sprites(rpg);
    init_values(rpg);
}
