/*
** EPITECH PROJECT, 2022
** File description:
** hit_ennemy
*/

#include "rpg.h"

void hit_ennemy_right(rpg_t *rpg, int i)
{
    if (rpg->en[i].pos.x < rpg->c.pos.x + 86 &&
    rpg->en[i].pos.x > rpg->c.pos.x + 32 &&
    rpg->en[i].pos.y < rpg->c.pos.y + 64 &&
    rpg->en[i].pos.y > rpg->c.pos.y - 64 && rpg->en[i].health > 0)
        rpg->en[i].health =- rpg->c.attack;
}

void hit_ennemy_left(rpg_t *rpg, int i)
{
    if (rpg->en[i].pos.x < rpg->c.pos.x + 32 &&
    rpg->en[i].pos.x > rpg->c.pos.x - 32 &&
    rpg->en[i].pos.y < rpg->c.pos.y + 64 &&
    rpg->en[i].pos.y > rpg->c.pos.y - 64 && rpg->en[i].health > 0)
        rpg->en[i].health =- rpg->c.attack;
}

void hit_ennemy_up(rpg_t *rpg, int i)
{
    if (rpg->en[i].pos.x < rpg->c.pos.x + 64 &&
    rpg->en[i].pos.x > rpg->c.pos.x - 64 &&
    rpg->en[i].pos.y < rpg->c.pos.y + 32 &&
    rpg->en[i].pos.y > rpg->c.pos.y - 64 && rpg->en[i].health > 0)
        rpg->en[i].health =- rpg->c.attack;
}

void hit_ennemy_down(rpg_t *rpg, int i)
{
    if (rpg->en[i].pos.x < rpg->c.pos.x + 64 &&
    rpg->en[i].pos.x > rpg->c.pos.x - 64 &&
    rpg->en[i].pos.y < rpg->c.pos.y + 86 &&
    rpg->en[i].pos.y > rpg->c.pos.y + 32 && rpg->en[i].health > 0)
        rpg->en[i].health =- rpg->c.attack;
}

void hit_ennemy(rpg_t *rpg, char c)
{
    for (int i = 0; i != 10; i++) {
        if (c == 'u')
            hit_ennemy_up(rpg, i);
        if (c == 'd')
            hit_ennemy_down(rpg, i);
        if (c == 'r')
            hit_ennemy_right(rpg, i);
        if (c == 'l')
            hit_ennemy_left(rpg, i);
    }
}
