/*
** EPITECH PROJECT, 2022
** File description:
** colision_functions.c
*/

#include "rpg.h"

int collide_vlrab(rpg_t *rpg)
{
    if (PLAYER_X > 1878) {
        PLAYER_X -= 1;
        return 1;
    }
    if (PLAYER_X < 0) {
        PLAYER_X += 1;
        return 1;
    }
    if (PLAYER_Y > 955) {
        PLAYER_Y -= 1;
        return 1;
    }
    if (PLAYER_Y < 0) {
        PLAYER_Y += 1;
        return 1;
    }
    return 0;
}

int collide_shop(rpg_t *rpg)
{
    if (PLAYER_X > 1180) {
        PLAYER_X -= 1;
        return 1;
    }
    if (PLAYER_X < 690) {
        PLAYER_X += 1;
        return 1;
    }
    if (PLAYER_Y > 660) {
        PLAYER_Y -= 1;
        return 1;
    }
    if (PLAYER_Y < 520) {
        PLAYER_Y += 1;
        return 1;
    }
    return 0;
}

int collide_house(rpg_t *rpg)
{
    if (PLAYER_X > 910) {
        PLAYER_X -= 1;
        return 1;
    }
    if (PLAYER_X < 580) {
        PLAYER_X += 1;
        return 1;
    }
    if (PLAYER_Y > 805) {
        PLAYER_Y -= 1;
        return 1;
    }
    if (PLAYER_Y < 580) {
        PLAYER_Y += 1;
        return 1;
    }
    return 0;
}

int collide_call(rpg_t *rpg)
{
    if (MAP_STAT == VILLAGE || MAP_STAT == ARENE || MAP_STAT == BOSS
    || MAP_STAT == LEFT || MAP_STAT == RIGHT) {
        if (collide_vlrab(rpg) == 1)
            return 1;
    }
    if (MAP_STAT == SHOP) {
        if (collide_shop(rpg) == 1)
           return 1;
    }
    if (MAP_STAT == HOUSE1 || MAP_STAT == HOUSE2) {
        if (collide_house(rpg) == 1)
           return 1;
    }
    if (MAP_STAT == CAVE) {
        if (collide_cave(rpg) == 1)
            return 1;
    }
    return 0;
}
