/*
** EPITECH PROJECT, 2022
** File description:
** game_loop
*/

#include "rpg.h"

void check_healt_status_bis(rpg_t *rpg)
{
    if (rpg->c.health < 50 && rpg->c.health >= 40)
        rpg->c.rectsprite_h.width = 173;
    if (rpg->c.health < 40 && rpg->c.health >= 30)
        rpg->c.rectsprite_h.width = 133;
    if (rpg->c.health < 30 && rpg->c.health >= 20)
        rpg->c.rectsprite_h.width = 80;
    if (rpg->c.health < 20 && rpg->c.health >= 10)
        rpg->c.rectsprite_h.width = 50;
    if (rpg->c.health < 10 && rpg->c.health > 0)
        rpg->c.rectsprite_h.width = 25;
    if (rpg->c.health <= 0)
        rpg->c.rectsprite_h.width = 0;
}

void check_health_status(rpg_t *rpg)
{
    if (rpg->c.health == 100)
        rpg->c.rectsprite_h.width = 453;
    if (rpg->c.health < 100 && rpg->c.health >= 90)
        rpg->c.rectsprite_h.width = 412;
    if (rpg->c.health < 90 && rpg->c.health >= 80)
        rpg->c.rectsprite_h.width = 360;
    if (rpg->c.health < 80 && rpg->c.health >= 70)
        rpg->c.rectsprite_h.width = 319;
    if (rpg->c.health < 70 && rpg->c.health >= 60)
        rpg->c.rectsprite_h.width = 267;
    if (rpg->c.health < 60 && rpg->c.health >= 50)
        rpg->c.rectsprite_h.width = 225;
    check_healt_status_bis(rpg);
}

void game_loop(rpg_t *rpg)
{
    draw_sprite_game(rpg);
    sfRenderWindow_display(rpg->window);
    getpos_game(rpg);
    check_health_status(rpg);
}
