/*
** EPITECH PROJECT, 2022
** File description:
** init_shop
*/

#include "rpg.h"

void init_shop_button(rpg_t *rpg)
{
    rpg->s.b[1].size.left = 0;
    rpg->s.b[1].size.top = 0;
    rpg->s.b[1].size.width = 109;
    rpg->s.b[1].size.height = 100;
    rpg->s.b[2].size.left = 0;
    rpg->s.b[2].size.top = 0;
    rpg->s.b[2].size.width = 109;
    rpg->s.b[2].size.height = 100;
    rpg->s.b[1].pos.x = 1400;
    rpg->s.b[1].pos.y = 600;
    rpg->s.b[2].pos.x = 1700;
    rpg->s.b[2].pos.y = 600;
}

void init_shop_dialogue(rpg_t *rpg)
{
    rpg->s.shop1_t = sfTexture_createFromFile
        ("sprites/quete/shop1.png", NULL);
    rpg->s.shop1_s = sfSprite_create();
    sfSprite_setTexture(rpg->s.shop1_s, rpg->s.shop1_t, sfTrue);
    rpg->s.shop20_t = sfTexture_createFromFile
        ("sprites/quete/shop2.0.png", NULL);
    rpg->s.shop20_s = sfSprite_create();
    sfSprite_setTexture(rpg->s.shop20_s, rpg->s.shop20_t, sfTrue);
    rpg->s.shop21_t = sfTexture_createFromFile
        ("sprites/quete/shop2.1.png", NULL);
    rpg->s.shop21_s = sfSprite_create();
    sfSprite_setTexture(rpg->s.shop21_s, rpg->s.shop21_t, sfTrue);
    rpg->s.shop3_t = sfTexture_createFromFile
        ("sprites/quete/shop3.png", NULL);
    rpg->s.shop3_s = sfSprite_create();
    sfSprite_setTexture(rpg->s.shop3_s, rpg->s.shop3_t, sfTrue);
    create_button(&rpg->s.b[1], "sprites/quete/yes.png");
    create_button(&rpg->s.b[2], "sprites/quete/no.png");
}
