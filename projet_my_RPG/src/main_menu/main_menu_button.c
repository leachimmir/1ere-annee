/*
** EPITECH PROJECT, 2022
** File description:
** main_menu
*/

#include "rpg.h"

int check_mainmenu_mouseclick(rpg_t *rpg)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(rpg->window);
    for (int i = 0; i <= 3; i++) {
        if (mouse.x > rpg->b[i].size.left
        && sfMouse_isButtonPressed(sfMouseLeft)
        && mouse.x < rpg->b[i].size.left + rpg->b[i].size.width
        && mouse.y > rpg->b[i].size.top && mouse.y <
        rpg->b[i].size.top + rpg->b[i].size.height) {
            my_buttonsound(rpg->b);
            return i;
        }
    }
    return 0;
}

void init_mainmenu_button_bis(rpg_t *rpg)
{
    rpg->b[1].pos.x = 200;
    rpg->b[1].pos.y = 200;
    rpg->b[2].pos.x = 800;
    rpg->b[2].pos.y = 200;
    rpg->b[3].pos.x = 1600;
    rpg->b[3].pos.y = 400;
    create_button(&rpg->b[1], "sprites/main_menu/start-button.png");
    create_button(&rpg->b[2], "sprites/main_menu/settings_button.png");
    create_button(&rpg->b[3], "sprites/main_menu/exit_button.png");
}

void init_mainmenu_button(rpg_t *rpg)
{
    rpg->b[1].size.left = 0;
    rpg->b[1].size.top = 0;
    rpg->b[1].size.width = 435;
    rpg->b[1].size.height = 185;
    rpg->b[2].size.left = 0;
    rpg->b[2].size.top = 0;
    rpg->b[2].size.width = 654;
    rpg->b[2].size.height = 185;
    rpg->b[3].size.left = 0;
    rpg->b[3].size.top = 0;
    rpg->b[3].size.width = 654;
    rpg->b[3].size.height = 185;
    init_mainmenu_button_bis(rpg);
}

void print_mainmenu_button(rpg_t *rpg)
{
    int click = check_mainmenu_mouseclick(rpg);
    sfRenderWindow_drawRectangleShape(rpg->window, rpg->b[1].rect
        , NULL);
    sfRenderWindow_drawRectangleShape(rpg->window, rpg->b[2].rect
        , NULL);
    sfRenderWindow_drawRectangleShape(rpg->window, rpg->b[3].rect
        , NULL);
    if (click == 1)
        rpg->game_status = 1;
    if (click == 2)
        rpg->game_status = 10;
    if (click == 3)
        sfRenderWindow_close(rpg->window);
}
