/*
** EPITECH PROJECT, 2022
** File description:
** game_arenemap_anim
*/

#include "rpg.h"

void move_rect_left(rpg_t *rpg, int offset, int max_value, int i)
{
    if (rpg->en[i].rectsprite.left != max_value) {
        rpg->en[i].rectsprite.left -= offset;
    } else {
        rpg->en[i].rectsprite.left = 768;
    }
}

void move_rect_right(rpg_t *rpg, int offset, int max_value, int i)
{
    if (rpg->en[i].rectsprite.left != max_value) {
        rpg->en[i].rectsprite.left += offset;
    } else {
        rpg->en[i].rectsprite.left = 0;
    }
}

void anim_left(rpg_t *rpg, int i)
{
    rpg->en[i].rectsprite.top = 448;
    if (hix_box_collide(rpg, i) == 1 && rpg->en[i].attacking == 0) {
        rpg->en[i].attacking = 1;
        rpg->en[i].rectsprite.top = 320;
        rpg->c.health -= 2;
    }
    move_rect_left(rpg, 64, 64, i);
}

void anim_right(rpg_t *rpg, int i)
{
    rpg->en[i].rectsprite.top = 128;
    if (hix_box_collide(rpg, i) == 1 && rpg->en[i].attacking == 0) {
        rpg->en[i].attacking = 1;
        rpg->en[i].rectsprite.top = 0;
        rpg->c.health -= 2;
    }
    move_rect_right(rpg, 64, 768, i);
}

void animate_ennemies(rpg_t *rpg, int i)
{
    if (rpg->seconds > 0.065) {
        if (rpg->en[i].pos.x > rpg->c.pos.x - 32)
            rpg->en[i].direction = 1;
        else
            rpg->en[i].direction = 0;
        if (rpg->en[i].direction == 1)
            anim_left(rpg, i);
        if (rpg->en[i].direction == 0)
            anim_right(rpg, i);
    }
}
