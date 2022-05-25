/*
** EPITECH PROJECT, 2022
** File description:
** display_setting
*/

#include "rpg.h"

int check_mouse_setting_click(rpg_t *rpg)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(rpg->window);
    for (int i = 0; i <= 10; i++) {
        if (mouse.x > rpg->setting.b[i].size.left
        && sfMouse_isButtonPressed(sfMouseLeft)
        && mouse.x < rpg->setting.b[i].size.left + rpg->setting.b[i].size.width
        && mouse.y > rpg->setting.b[i].size.top && mouse.y <
        rpg->setting.b[i].size.top + rpg->setting.b[i].size.height) {
            return i;
        }
    }
    return 0;
}

void check_button_setting_click(rpg_t *rpg)
{
    int click = check_mouse_setting_click(rpg);
    int status = 0;
    if (click == 1)
        rpg->sound_lvl += 5;
    if (click == 9)
        status = 1;
    if (click == 10) {
        if (rpg->game_status == 10)
            rpg->game_status = 0;
        if (rpg->game_status == 20)
            rpg->game_status = 3;
    }
    if (status == 1)
        sfRenderWindow_drawSprite(rpg->window, rpg->setting.htp_s, NULL);
}

void display_button_setting(sfRenderWindow *w, setting_t *set)
{
    sfRenderWindow_drawRectangleShape(w, set->b[1].rect, NULL);
    sfRenderWindow_drawRectangleShape(w, set->b[2].rect, NULL);
    sfRenderWindow_drawRectangleShape(w, set->b[3].rect, NULL);
    sfRenderWindow_drawRectangleShape(w, set->b[4].rect, NULL);
    sfRenderWindow_drawRectangleShape(w, set->b[5].rect, NULL);
    sfRenderWindow_drawRectangleShape(w, set->b[6].rect, NULL);
    sfRenderWindow_drawRectangleShape(w, set->b[7].rect, NULL);
    sfRenderWindow_drawRectangleShape(w, set->b[8].rect, NULL);
    sfRenderWindow_drawRectangleShape(w, set->b[9].rect, NULL);
    sfRenderWindow_drawRectangleShape(w, set->b[10].rect, NULL);
}

void display_setting(rpg_t *rpg)
{
    sfRenderWindow_drawSprite(rpg->window, rpg->setting.background_s, NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->setting.txt_s, NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->setting.fps_s, NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->setting.music_s, NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->setting.sound_s, NULL);
    display_button_setting(rpg->window, &rpg->setting);
    sfRenderWindow_setMouseCursorVisible(rpg->window, sfTrue);
    check_button_setting_click(rpg);
}
