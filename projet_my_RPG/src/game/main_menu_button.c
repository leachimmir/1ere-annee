/*
** EPITECH PROJECT, 2022
** File description:
** main_menu
*/

#include "rpg.h"

void init_mainmenu_button(rpg_t *rpg)
{
    rpg->b[1].size.left = 0;
    rpg->b[1].size.top = 0;
    rpg->b[1].size.width = 109;
    rpg->b[1].size.height = 100;
    rpg->b[2].size.left = 0;
    rpg->b[2].size.top = 0;
    rpg->b[2].size.width = 109;
    rpg->b[2].size.height = 100;
    rpg->b[1].pos.x = 1400;
    rpg->b[1].pos.y = 600;
    rpg->b[2].pos.x = 1700;
    rpg->b[2].pos.y = 600;
    create_button(&rpg->b[1], "sprite/main_menu/start-button.png");
    create_button(&rpg->b[2], "sprite/main_menu/settings_button.png");
}
