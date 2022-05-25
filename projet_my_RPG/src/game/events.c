/*
** EPITECH PROJECT, 2022
** File description:
** events
*/

#include "rpg.h"

void move_rect(rpg_t *rpg, int offset, int max_value)
{
    if (rpg->c.rectsprite.left != max_value) {
        rpg->c.rectsprite.left += offset;
    } else {
        rpg->c.rectsprite.left = 0;
    }
}

void check_game_events(rpg_t *rpg)
{
    if (sfKeyboard_isKeyPressed(sfKeyDown) && !collide_main(rpg)) {
        rpg->c.pos.y += 7;
        move_rect(rpg, 31, 93);
        rpg->c.rectsprite.top = 0;
    }
    if (sfKeyboard_isKeyPressed(sfKeyUp) && !collide_main(rpg)) {
        rpg->c.pos.y -= 7;
        move_rect(rpg, 31, 93);
        rpg->c.rectsprite.top = 125;
    }
}

void game_events(rpg_t *rpg)
{
    if (MAP_STAT == ARENE && rpg->ennemy_status == 1)
        for (int i = 0; i != 10; i++)
            animate_ennemies(rpg, i);
    if (rpg->event.type == sfEvtKeyPressed) {
        if (sfKeyboard_isKeyPressed(sfKeyRight) && !collide_main(rpg)) {
            rpg->c.pos.x += 7;
            move_rect(rpg, 31, 93);
            rpg->c.rectsprite.top = 62;
        }
        if (sfKeyboard_isKeyPressed(sfKeyLeft) && !collide_main(rpg)) {
            rpg->c.pos.x -= 7;
            move_rect(rpg, 31, 93);
            rpg->c.rectsprite.top = 187;
        }
        check_game_events(rpg);
    }
    if (rpg->event.key.code == sfKeySpace && rpg->inv.sword == 1)
        rpg->c.attacking = 1;
}
