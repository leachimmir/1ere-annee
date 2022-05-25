/*
** EPITECH PROJECT, 2022
** File description:
** init_spawn
*/

#include "rpg.h"

void init_spawn(rpg_t *rpg)
{
    sfVector2f scale_sword = {2, 2};
    sfVector2f scale_axe = {0.17, 0.17};
    sfVector2f pos_sword = {1000, 500};
    sfVector2f pos_axe = {1000, 250};
    rpg->spawn.sword_t = sfTexture_createFromFile
        ("sprites/inventory/sword.png", NULL);
    rpg->spawn.sword_s = sfSprite_create();
    sfSprite_setTexture(rpg->spawn.sword_s, rpg->spawn.sword_t, sfTrue);
    sfSprite_setScale(rpg->spawn.sword_s, scale_sword);
    sfSprite_setPosition(rpg->spawn.sword_s, pos_sword);
    rpg->spawn.axe_t = sfTexture_createFromFile
        ("sprites/inventory/axe.png", NULL);
    rpg->spawn.axe_s = sfSprite_create();
    sfSprite_setTexture(rpg->spawn.axe_s, rpg->spawn.axe_t, sfTrue);
    sfSprite_setScale(rpg->spawn.axe_s, scale_axe);
    sfSprite_setPosition(rpg->spawn.axe_s, pos_axe);
}
