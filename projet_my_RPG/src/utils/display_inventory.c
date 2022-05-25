/*
** EPITECH PROJECT, 2022
** File description:
** display_inventory
*/

#include "rpg.h"

void available_items(rpg_t *rpg)
{
    if (rpg->inv.sword == 1) {
        sfRenderWindow_drawSprite(rpg->window, rpg->inv.sword_s, NULL);
        sfSprite_setPosition(rpg->inv.sword_s, rpg->inv.vec_sword);
    }
    if (rpg->inv.axe == 1) {
        sfRenderWindow_drawSprite(rpg->window, rpg->inv.axe_s, NULL);
        sfSprite_setPosition(rpg->inv.axe_s, rpg->inv.vec_axe);
    }
    if (rpg->inv.ruby == 1) {
        sfRenderWindow_drawSprite(rpg->window, rpg->inv.ruby_s, NULL);
        sfSprite_setPosition(rpg->inv.ruby_s, (sfVector2f){455, 245});
    }
}

void display_gold(rpg_t *rpg)
{
    if (rpg->inv.gold >= 0 && rpg->inv.gold < 50)
        sfRenderWindow_drawSprite(rpg->window, rpg->inv.gold1_s, NULL);
    if (rpg->inv.gold >= 50 && rpg->inv.gold < 100)
        sfRenderWindow_drawSprite(rpg->window, rpg->inv.gold2_s, NULL);
    if (rpg->inv.gold >= 100 && rpg->inv.gold < 150)
        sfRenderWindow_drawSprite(rpg->window, rpg->inv.gold3_s, NULL);
    if (rpg->inv.gold >= 150)
        sfRenderWindow_drawSprite(rpg->window, rpg->inv.gold4_s, NULL);
}

void display_inventory(rpg_t *rpg)
{
    sfSprite_setPosition(rpg->inv.inventory_s, rpg->inv.vec_inv);
    if (KEYPRESS) {
        if (KEY_ALT) {
            sfRenderWindow_drawSprite(rpg->window, rpg->inv.inventory_s, NULL);
            display_gold(rpg);
            available_items(rpg);
        }
    }
}
