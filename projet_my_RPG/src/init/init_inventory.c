/*
** EPITECH PROJECT, 2022
** File description:
** init_inv
*/
#include "rpg.h"

void init_gold_bis(rpg_t *rpg)
{
    rpg->inv.gold3_t = sfTexture_createFromFile
        ("sprites/inventory/big_coin.png", NULL);
    rpg->inv.gold3_s = sfSprite_create();
    sfSprite_setTexture(rpg->inv.gold3_s, rpg->inv.gold3_t, sfTrue);
    sfSprite_setPosition(rpg->inv.gold3_s, rpg->inv.vec_gold);
    rpg->inv.gold4_t = sfTexture_createFromFile
        ("sprites/inventory/lot_of_coins.png", NULL);
    rpg->inv.gold4_s = sfSprite_create();
    sfSprite_setTexture(rpg->inv.gold4_s, rpg->inv.gold4_t, sfTrue);
    sfSprite_setPosition(rpg->inv.gold4_s, rpg->inv.vec_gold);
}

void init_gold(rpg_t *rpg)
{
    rpg->inv.gold1_t = sfTexture_createFromFile
        ("sprites/inventory/little_coin.png", NULL);
    rpg->inv.gold1_s = sfSprite_create();
    sfSprite_setTexture(rpg->inv.gold1_s, rpg->inv.gold1_t, sfTrue);
    sfSprite_setPosition(rpg->inv.gold1_s, rpg->inv.vec_gold);
    rpg->inv.gold2_t = sfTexture_createFromFile
        ("sprites/inventory/average_coin.png", NULL);
    rpg->inv.gold2_s = sfSprite_create();
    sfSprite_setTexture(rpg->inv.gold2_s, rpg->inv.gold2_t, sfTrue);
    sfSprite_setPosition(rpg->inv.gold2_s, rpg->inv.vec_gold);
    init_gold_bis(rpg);
}

void init_items(rpg_t *rpg)
{
    sfVector2f scale_sword = {2, 2};
    sfVector2f scale_axe = {0.17, 0.17};
    rpg->inv.sword_t = sfTexture_createFromFile
        ("sprites/inventory/sword.png", NULL);
    rpg->inv.sword_s = sfSprite_create();
    sfSprite_setTexture(rpg->inv.sword_s, rpg->inv.sword_t, sfTrue);
    sfSprite_setScale(rpg->inv.sword_s, scale_sword);
    rpg->inv.axe_t = sfTexture_createFromFile
        ("sprites/inventory/axe.png", NULL);
    rpg->inv.axe_s = sfSprite_create();
    sfSprite_setTexture(rpg->inv.axe_s, rpg->inv.axe_t, sfTrue);
    sfSprite_setScale(rpg->inv.axe_s, scale_axe);
    rpg->inv.ruby_t = sfTexture_createFromFile
        ("sprites/inventory/ruby.png", NULL);
    rpg->inv.ruby_s = sfSprite_create();
    sfSprite_setTexture(rpg->inv.ruby_s, rpg->inv.ruby_t, sfTrue);
    sfSprite_setScale(rpg->inv.ruby_s, scale_axe);
    init_gold(rpg);
}

void init_inventory(rpg_t *rpg)
{
    rpg->inv.inventory_t = sfTexture_createFromFile
        ("sprites/inventory/inventory.png", NULL);
    rpg->inv.inventory_s = sfSprite_create();
    sfSprite_setTexture(rpg->inv.inventory_s, rpg->inv.inventory_t, sfTrue);
    init_items(rpg);
}
