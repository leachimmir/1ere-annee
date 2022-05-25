/*
** EPITECH PROJECT, 2022
** File description:
** init_quete
*/

#include "rpg.h"

void init_dialogue_button(dialogue_t *d)
{
    d->b[1].size.left = 0;
    d->b[1].size.top = 0;
    d->b[1].size.width = 109;
    d->b[1].size.height = 100;
    d->b[2].size.left = 0;
    d->b[2].size.top = 0;
    d->b[2].size.width = 109;
    d->b[2].size.height = 100;
    d->b[1].pos.x = 1400;
    d->b[1].pos.y = 600;
    d->b[2].pos.x = 1700;
    d->b[2].pos.y = 600;
    create_button(&d->b[1], "sprites/quete/yes.png");
    create_button(&d->b[2], "sprites/quete/no.png");
}

void init_dialogue_sprite_bis(dialogue_t *d)
{
    d->dialogue32_t = sfTexture_createFromFile(D32_T, NULL);
    d->dialogue32_s = sfSprite_create();
    sfSprite_setTexture(d->dialogue32_s, d->dialogue32_t, sfFalse);
    d->dialogue33_t = sfTexture_createFromFile(D33_T, NULL);
    d->dialogue33_s = sfSprite_create();
    sfSprite_setTexture(d->dialogue33_s, d->dialogue33_t, sfFalse);
    d->dialogue4_t = sfTexture_createFromFile(D4_T, NULL);
    d->dialogue4_s = sfSprite_create();
    sfSprite_setTexture(d->dialogue4_s, d->dialogue4_t, sfFalse);
    init_dialogue_button(d);
}

void init_dialogue_sprite(dialogue_t *d)
{
    d->dialogue1_t = sfTexture_createFromFile(D1_T, NULL);
    d->dialogue1_s = sfSprite_create();
    sfSprite_setTexture(d->dialogue1_s, d->dialogue1_t, sfFalse);
    d->dialogue20_t = sfTexture_createFromFile(D20_T, NULL);
    d->dialogue20_s = sfSprite_create();
    sfSprite_setTexture(d->dialogue20_s, d->dialogue20_t, sfFalse);
    d->dialogue21_t = sfTexture_createFromFile(D21_T, NULL);
    d->dialogue21_s = sfSprite_create();
    sfSprite_setTexture(d->dialogue21_s, d->dialogue21_t, sfFalse);
    d->dialogue30_t = sfTexture_createFromFile(D30_T, NULL);
    d->dialogue30_s = sfSprite_create();
    sfSprite_setTexture(d->dialogue30_s, d->dialogue30_t, sfFalse);
    d->dialogue31_t = sfTexture_createFromFile(D31_T, NULL);
    d->dialogue31_s = sfSprite_create();
    sfSprite_setTexture(d->dialogue31_s, d->dialogue31_t, sfFalse);
    init_dialogue_sprite_bis(d);
}
