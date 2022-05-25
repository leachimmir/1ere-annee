/*
** EPITECH PROJECT, 2022
** File description:
** collide
*/

#include "rpg.h"

int collide_cave(rpg_t *rpg)
{
    if (PLAYER_X > 1200) {
        PLAYER_X -= 1;
        return 1;
    }
    if (PLAYER_X < 700) {
        PLAYER_X += 1;
        return 1;
    }
    if (PLAYER_Y > 820) {
        PLAYER_Y -= 1;
        return 1;
    }
    if (PLAYER_Y < 300) {
        PLAYER_Y += 1;
        return 1;
    }
    return 0;
}

int collide_main(rpg_t *rpg)
{
    if (collide_call(rpg) == 1)
        return 1;
    return 0;
}

int hix_box_collide(rpg_t *rpg, int i)
{
    if (rpg->c.pos.x >= rpg->en[i].pos.x &&
    rpg->c.pos.x <= rpg->en[i].pos.x + 64 &&
    rpg->c.pos.y >= rpg->en[i].pos.y &&
    rpg->c.pos.y <= rpg->en[i].pos.y + 64 && rpg->en[i].health > 0)
        return 1;
    rpg->en[i].attacking = 0;
    return 0;
}
