/*
** EPITECH PROJECT, 2022
** File description:
** init_enemy
*/

#include "rpg.h"

void init_position_ennemy_bis(rpg_t *rpg)
{
    rpg->en[6].pos.x = 1700;
    rpg->en[6].pos.y = 400;
    rpg->en[7].pos.x = 400;
    rpg->en[7].pos.y = 950;
    rpg->en[8].pos.x = 1000;
    rpg->en[8].pos.y = 600;
    rpg->en[9].pos.x = -500;
    rpg->en[9].pos.y = 400;
}

void init_position_ennemy(rpg_t *rpg)
{
    rpg->en[0].pos.x = 1800;
    rpg->en[0].pos.y = 950;
    rpg->en[1].pos.x = 2300;
    rpg->en[1].pos.y = 950;
    rpg->en[2].pos.x = 1800;
    rpg->en[2].pos.y = 500;
    rpg->en[3].pos.x = 1800;
    rpg->en[3].pos.y = 190;
    rpg->en[4].pos.x = 500;
    rpg->en[4].pos.y = 300;
    rpg->en[5].pos.x = 3000;
    rpg->en[5].pos.y = 500;
    init_position_ennemy_bis(rpg);
}

void init_ennemi(rpg_t *rpg, int i)
{
    rpg->en[i].attack = 10;
    rpg->en[i].attacking = 0;
    rpg->en[i].health = 50;
    rpg->en[i].direction = 1;
    rpg->en[i].sprite = sfSprite_create();
    rpg->en[i].spriteTexture = sfTexture_createFromFile
    ("sprites/gfx/boss/Skeleton enemy.png", NULL);
    sfSprite_setTexture(rpg->en[i].sprite, rpg->en[i].spriteTexture,
    sfTrue);
    rpg->en[i].rectsprite.top = 448;
    rpg->en[i].rectsprite.left = 768;
    rpg->en[i].rectsprite.width = 64;
    rpg->en[i].rectsprite.height = 64;
}
