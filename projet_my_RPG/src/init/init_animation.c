/*
** EPITECH PROJECT, 2022
** File description:
** init_animation
*/

#include "rpg.h"

void init_gameover_button(rpg_t *rpg)
{
    rpg->a.b[1].size.left = 0;
    rpg->a.b[1].size.top = 0;
    rpg->a.b[1].size.width = 109;
    rpg->a.b[1].size.height = 100;
    rpg->a.b[2].size.left = 0;
    rpg->a.b[2].size.top = 0;
    rpg->a.b[2].size.width = 109;
    rpg->a.b[2].size.height = 100;
    rpg->a.b[1].pos.x = 500;
    rpg->a.b[1].pos.y = 700;
    rpg->a.b[2].pos.x = 1200;
    rpg->a.b[2].pos.y = 700;
}

void init_end(rpg_t *rpg)
{
    rpg->a.end_t = sfTexture_createFromFile("sprites/quete/end.png", NULL);
    rpg->a.end_s = sfSprite_create();
    sfSprite_setTexture(rpg->a.end_s, rpg->a.end_t, sfFalse);
}

void init_prologue(rpg_t *rpg)
{
    init_gameover_button(rpg);
    rpg->a.prologue1_t = sfTexture_createFromFile(P1_T, NULL);
    rpg->a.prologue1_s = sfSprite_create();
    sfSprite_setTexture(rpg->a.prologue1_s, rpg->a.prologue1_t, sfFalse);
    rpg->a.prologue2_t = sfTexture_createFromFile(P2_T, NULL);
    rpg->a.prologue2_s = sfSprite_create();
    sfSprite_setTexture(rpg->a.prologue2_s, rpg->a.prologue2_t, sfFalse);
    rpg->a.gameover_t = sfTexture_createFromFile("sprites/gameover.png", NULL);
    rpg->a.gameover_s = sfSprite_create();
    sfSprite_setTexture(rpg->a.gameover_s, rpg->a.gameover_t, sfFalse);
    create_button(&rpg->a.b[1], "sprites/menu/restart.png");
    create_button(&rpg->a.b[2], "sprites/menu/exit.png");
    init_end(rpg);
}
