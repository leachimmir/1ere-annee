/*
** EPITECH PROJECT, 2022
** File description:
** display_optionmenu
*/

#include "rpg.h"

void exit_game(rpg_t *rpg)
{
    sfRenderWindow_close(rpg->window);
}

void restart_game(rpg_t *rpg)
{
    sfRenderWindow_close(rpg->window);
    main(1, rpg->restart);
}

void check_mouse_click(rpg_t *rpg)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(rpg->window);
    for (int i = 0; i < 5; i++) {
        if (mouse.x > rpg->option.b[i].size.left
        && sfMouse_isButtonPressed(sfMouseLeft)
        && mouse.x < rpg->option.b[i].size.left + rpg->option.b[i].size.width
        && mouse.y > rpg->option.b[i].size.top && mouse.y <
        rpg->option.b[i].size.top + rpg->option.b[i].size.height) {
            my_buttonsound(rpg->option.b);
            if (i == 1)
                rpg->game_status = 3;
            if (i == 2)
                restart_game(rpg);
            if (i == 3) {
                rpg->game_status = 20;
            }
            if (i == 4)
                exit_game(rpg);
        }
    }
}

void display_optionmenu(rpg_t *rpg)
{
    sfRenderWindow_drawSprite(rpg->window, rpg->option.option_s, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window, rpg->option.b[1].rect
        , NULL);
    sfRenderWindow_drawRectangleShape(rpg->window, rpg->option.b[2].rect
        , NULL);
    sfRenderWindow_drawRectangleShape(rpg->window, rpg->option.b[3].rect
        , NULL);
    sfRenderWindow_drawRectangleShape(rpg->window, rpg->option.b[4].rect
        , NULL);
    check_mouse_click(rpg);
    sfRenderWindow_setMouseCursorVisible(rpg->window, sfTrue);
}
