/*
** EPITECH PROJECT, 2022
** File description:
** attack_rect
*/

#include "rpg.h"

void move_rect_attack(rpg_t *rpg, int offset, int max_value)
{
    if (rpg->c.rectsprite_a.left != max_value) {
        rpg->c.rectsprite_a.left += offset;
    } else {
        rpg->c.rectsprite_a.left = 0;
        rpg->c.attacking = 0;
        rpg->event.key.code = 0;
    }
}

void attack_rect_bis(rpg_t *rpg)
{
    if (rpg->c.rectsprite.top == 125) {
        rpg->c.rectsprite_a.top = 62;
        move_rect_attack(rpg, 62 , 186);
        hit_ennemy(rpg, 'u');
    }
    if (rpg->c.rectsprite.top == 187) {
        rpg->c.rectsprite_a.top = 186;
        move_rect_attack(rpg, 62 , 186);
        hit_ennemy(rpg, 'l');
    }

}

void attack_rect(rpg_t *rpg)
{
    if (rpg->c.rectsprite.top == 62) {
        rpg->c.rectsprite_a.top = 124;
        move_rect_attack(rpg, 62 , 186);
        hit_ennemy(rpg, 'r');
    }
    if (rpg->c.rectsprite.top == 0) {
        rpg->c.rectsprite_a.top = 0;
        move_rect_attack(rpg, 62 , 186);
        hit_ennemy(rpg, 'd');
    }
    attack_rect_bis(rpg);
    sfClock_restart(rpg->clock);
}
