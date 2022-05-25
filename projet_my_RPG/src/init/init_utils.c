/*
** EPITECH PROJECT, 2022
** File description:
** init_utils
*/

#include "rpg.h"

void init_utils(rpg_t *rpg)
{
    rpg->utils.back_txt_t = sfTexture_createFromFile("sprites/quete/no.png"
        , NULL);
    rpg->utils.back_txt_s = sfSprite_create();
    sfSprite_setTexture(rpg->utils.back_txt_s, rpg->utils.back_txt_t, sfFalse);
}
