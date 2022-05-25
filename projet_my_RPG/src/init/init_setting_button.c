/*
** EPITECH PROJECT, 2022
** File description:
** init_setting_button
*/

#include "rpg.h"

void init_button_setting_htp(rpg_t *rpg)
{
    rpg->setting.b[9].size.left = 0;
    rpg->setting.b[9].size.top = 0;
    rpg->setting.b[9].size.width = 103;
    rpg->setting.b[9].size.height = 100;
    rpg->setting.b[10].size.left = 0;
    rpg->setting.b[10].size.top = 0;
    rpg->setting.b[10].size.width = 654;
    rpg->setting.b[10].size.height = 185;
    rpg->setting.b[10].pos.x = 1700;
    rpg->setting.b[10].pos.y = 900;
}

void init_button_setting_size_bis(rpg_t *rpg)
{
    rpg->setting.b[5].size.left = 0;
    rpg->setting.b[5].size.top = 0;
    rpg->setting.b[5].size.width = 103;
    rpg->setting.b[5].size.height = 100;
    rpg->setting.b[6].size.left = 0;
    rpg->setting.b[6].size.top = 0;
    rpg->setting.b[6].size.width = 103;
    rpg->setting.b[6].size.height = 100;
    rpg->setting.b[7].size.left = 0;
    rpg->setting.b[7].size.top = 0;
    rpg->setting.b[7].size.width = 103;
    rpg->setting.b[7].size.height = 100;
    rpg->setting.b[8].size.left = 0;
    rpg->setting.b[8].size.top = 0;
    rpg->setting.b[8].size.width = 103;
    rpg->setting.b[8].size.height = 100;
    init_button_setting_htp(rpg);
}

void init_button_setting_size(rpg_t *rpg)
{
    rpg->setting.b[1].size.left = 0;
    rpg->setting.b[1].size.top = 0;
    rpg->setting.b[1].size.width = 103;
    rpg->setting.b[1].size.height = 103;
    rpg->setting.b[2].size.left = 0;
    rpg->setting.b[2].size.top = 0;
    rpg->setting.b[2].size.width = 103;
    rpg->setting.b[2].size.height = 100;
    rpg->setting.b[3].size.left = 0;
    rpg->setting.b[3].size.top = 0;
    rpg->setting.b[3].size.width = 103;
    rpg->setting.b[3].size.height = 100;
    rpg->setting.b[4].size.left = 0;
    rpg->setting.b[4].size.top = 0;
    rpg->setting.b[4].size.width = 103;
    rpg->setting.b[4].size.height = 100;
    init_button_setting_size_bis(rpg);
}
