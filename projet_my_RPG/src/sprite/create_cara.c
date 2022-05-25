/*
** EPITECH PROJECT, 2022
** File description:
** create_cara
*/

#include "rpg.h"

void create_caractere(rpg_t *rpg)
{
    rpg->c.spriteTexture = sfTexture_createFromFile
    ("sprites/gfx/character_walk.png", NULL);
    rpg->c.sprite = sfSprite_create();
    sfSprite_setTexture(rpg->c.sprite, rpg->c.spriteTexture, sfTrue);
}
