/*
** EPITECH PROJECT, 2022
** File description:
** game_arenemap
*/

#include "rpg.h"

void put_pos_ennemy(rpg_t *rpg, int i)
{
    if (rpg->c.pos.x <= rpg->en[i].pos.x + 32) {
        rpg->en[i].pos.x--;
        rpg->en[i].direction = 1;
    }
    if (rpg->c.pos.x >= rpg->en[i].pos.x + 32) {
        rpg->en[i].pos.x++;
        rpg->en[i].direction = 0;
    }
    if (rpg->c.pos.y <= rpg->en[i].pos.y + 32)
        rpg->en[i].pos.y--;
    if (rpg->c.pos.y >= rpg->en[i].pos.y + 32)
        rpg->en[i].pos.y++;
}

void ennemy_arenemap(rpg_t *rpg)
{
    for (int i = 0; i != 10; i++) {
        put_pos_ennemy(rpg, i);
        sfVector2f scale = {2.5, 2.5};
        sfSprite_setScale(rpg->en[i].sprite, scale);
        sfSprite_setPosition(rpg->en[i].sprite, rpg->en[i].pos);
        sfSprite_setTextureRect(rpg->en[i].sprite, rpg->en[i].rectsprite);
        if (rpg->en[i].health > 0)
            sfRenderWindow_drawSprite(rpg->window, rpg->en[i].sprite, NULL);
    }
}

void check_arena_changemap(rpg_t *rpg)
{
    if (KEYPRESS) {
        if ((MAP_STAT == ARENE) && PLAYER_Y > 934
        && PLAYER_X > 950 && PLAYER_X < 1070 && KEY_DOWN) {
            PLAYER_X = 872;
            PLAYER_Y = -4;
            draw_leftmap(rpg);
        }
    }
}

int check_ennemy_defeat(rpg_t *rpg)
{
    for (int i = 0; i != 10; i++)
        if (rpg->en[i].health > 0)
            return 1;
    return 0;
}

void draw_arenemap(rpg_t *rpg)
{
    MAP_STAT = ARENE;
    sfRenderWindow_drawSprite(rpg->window, rpg->map.arene_s, NULL);
    display_items_spawn(rpg);
    if (rpg->ennemy_status == 1)
        ennemy_arenemap(rpg);
    display_items_spawn(rpg);
    display_inventory(rpg);
    if (check_ennemy_defeat(rpg) == 0)
        rpg->ennemy_status = 2;
    check_dialogue_to_print(rpg);
    check_arena_changemap(rpg);
}
