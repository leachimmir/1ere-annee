/*
** EPITECH PROJECT, 2022
** File description:
** game_sprite_manage
*/

#include "rpg.h"

void create_sprite_game(rpg_t *rpg)
{
    sfSprite_setTexture(rpg->c.sprite, rpg->c.spriteTexture, sfFalse);
    sfSprite_setTexture(rpg->c.sprite_a, rpg->c.spriteTexture_a, sfFalse);
    for (int i = 0; i != 10; i++) {
        sfSprite_setTexture(rpg->en[i].sprite, rpg->en[i].spriteTexture,
        sfFalse);
    }
}

void draw_sprite_game(rpg_t *rpg)
{
    sfVector2f scale = {1.4, 1.4};
    if (rpg->c.attacking == 0) {
        sfSprite_setPosition(rpg->c.sprite, rpg->c.pos);
        sfSprite_setTextureRect(rpg->c.sprite, rpg->c.rectsprite);
        sfSprite_setScale(rpg->c.sprite, scale);
        sfRenderWindow_drawSprite(rpg->window, rpg->c.sprite, NULL);
    }
    if (rpg->c.attacking == 1) {
        sfSprite_setPosition(rpg->c.sprite_a, rpg->c.pos);
        sfSprite_setTextureRect(rpg->c.sprite_a, rpg->c.rectsprite_a);
        sfSprite_setScale(rpg->c.sprite_a, scale);
        sfRenderWindow_drawSprite(rpg->window, rpg->c.sprite_a, NULL);
    }
    sfSprite_setPosition(rpg->c.sprite_h, rpg->c.pos_h);
    sfSprite_setTextureRect(rpg->c.sprite_h, rpg->c.rectsprite_h);
    sfRenderWindow_drawSprite(rpg->window, rpg->c.sprite_h, NULL);
}

void getpos_game(rpg_t *rpg)
{
    rpg->inv.time = sfClock_getElapsedTime(rpg->clock);
    if (rpg->inv.time.microseconds % 100 == 0) {
        rpg->inv.gold += 2;
    }
    rpg->c.pos = sfSprite_getPosition(rpg->c.sprite);
}
