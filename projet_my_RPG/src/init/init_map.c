/*
** EPITECH PROJECT, 2022
** File description:
** init_map
*/

#include "rpg.h"

void draw_inside(rpg_t *rpg)
{
    if ((rpg->map.map_status == CAVE))
        draw_cave(rpg);
    if ((rpg->map.map_status == HOSPITAL))
        draw_hospital(rpg);
    if ((rpg->map.map_status == SHOP))
        draw_shop(rpg);
    if ((rpg->map.map_status == HOUSE1))
        draw_houseone(rpg);
    if ((rpg->map.map_status == HOUSE2))
        draw_housetwo(rpg);
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        rpg->game_status = 2;
}

void draw_map(rpg_t *rpg)
{
    if ((rpg->map.map_status == VILLAGE))
        draw_village(rpg);
    if ((rpg->map.map_status == LEFT))
        draw_leftmap(rpg);
    if ((rpg->map.map_status == RIGHT))
        draw_rightmap(rpg);
    if ((rpg->map.map_status == ARENE))
        draw_arenemap(rpg);
    if ((rpg->map.map_status == BOSS))
        draw_bossmap(rpg);
    draw_inside(rpg);
}

void init_allinside(rpg_t *rpg)
{
    rpg->map.cave_t = sfTexture_createFromFile(CAVE_T, NULL);
    rpg->map.cave_s = sfSprite_create();
    sfSprite_setTexture(rpg->map.cave_s, rpg->map.cave_t, sfFalse);
    rpg->map.house1_t = sfTexture_createFromFile(HOUSE1_T, NULL);
    rpg->map.house1_s = sfSprite_create();
    sfSprite_setTexture(rpg->map.house1_s, rpg->map.house1_t, sfFalse);
    rpg->map.house2_t = sfTexture_createFromFile(HOUSE2_T, NULL);
    rpg->map.house2_s = sfSprite_create();
    sfSprite_setTexture(rpg->map.house2_s, rpg->map.house2_t, sfFalse);
    rpg->map.shop_t = sfTexture_createFromFile(SHOP_T, NULL);
    rpg->map.shop_s = sfSprite_create();
    sfSprite_setTexture(rpg->map.shop_s, rpg->map.shop_t, sfFalse);
    rpg->map.hospital_t = sfTexture_createFromFile(HOSPITAL_T, NULL);
    rpg->map.hospital_s = sfSprite_create();
    sfSprite_setTexture(rpg->map.hospital_s, rpg->map.hospital_t, sfFalse);
    rpg->map.right_tree_t = sfTexture_createFromFile(TREE_T, NULL);
    rpg->map.right_tree_s = sfSprite_create();
    sfSprite_setTexture(rpg->map.right_tree_s, rpg->map.right_tree_t, sfFalse);
}

void init_allmap(rpg_t *rpg)
{
    rpg->map.village_t = sfTexture_createFromFile(VILLAGE_T, NULL);
    rpg->map.village_s = sfSprite_create();
    sfSprite_setTexture(rpg->map.village_s, rpg->map.village_t, sfFalse);
    rpg->map.left_t = sfTexture_createFromFile(LEFT_T, NULL);
    rpg->map.left_s = sfSprite_create();
    sfSprite_setTexture(rpg->map.left_s, rpg->map.left_t, sfFalse);
    rpg->map.arene_t = sfTexture_createFromFile(ARENE_T, NULL);
    rpg->map.arene_s = sfSprite_create();
    sfSprite_setTexture(rpg->map.arene_s, rpg->map.arene_t, sfFalse);
    rpg->map.right_t = sfTexture_createFromFile(RIGHT_T, NULL);
    rpg->map.right_s = sfSprite_create();
    sfSprite_setTexture(rpg->map.right_s, rpg->map.right_t, sfFalse);
    rpg->map.boss_t = sfTexture_createFromFile(BOSS_T, NULL);
    rpg->map.boss_s = sfSprite_create();
    sfSprite_setTexture(rpg->map.boss_s, rpg->map.boss_t, sfFalse);
    init_allinside(rpg);
}
