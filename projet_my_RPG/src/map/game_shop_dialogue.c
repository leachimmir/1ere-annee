/*
** EPITECH PROJECT, 2022
** File description:
** game_shop_dialogue
*/

#include "rpg.h"

int check_shop_mouseclick(rpg_t *rpg)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(rpg->window);
    for (int i = 0; i <= 2; i++) {
        if (mouse.x > rpg->s.b[i].size.left
        && sfMouse_isButtonPressed(sfMouseLeft)
        && mouse.x < rpg->s.b[i].size.left + rpg->s.b[i].size.width
        && mouse.y > rpg->s.b[i].size.top && mouse.y <
        rpg->s.b[i].size.top + rpg->s.b[i].size.height) {
            return i;
        }
    }
    return 0;
}

void print_shop_stat(rpg_t *rpg)
{
    if (rpg->s.shop_stat == 3) {
        sfSprite_setPosition(rpg->s.shop3_s, (sfVector2f){1300, 700});
        sfRenderWindow_drawSprite(rpg->window, rpg->s.shop3_s, NULL);
    }
    if (rpg->s.shop_stat == 20) {
        sfSprite_setPosition(rpg->s.shop20_s, (sfVector2f){1300, 700});
        sfRenderWindow_drawSprite(rpg->window, rpg->s.shop20_s, NULL);
        rpg->inv.axe = 1;
        rpg->inv.ruby = 0;
    }
    if (rpg->s.shop_stat == 21) {
        sfSprite_setPosition(rpg->s.shop21_s, (sfVector2f){1300, 700});
        sfRenderWindow_drawSprite(rpg->window, rpg->s.shop21_s, NULL);
    }
}

void check_buy(rpg_t *rpg)
{
    if (rpg->inv.ruby == 1)
        rpg->s.shop_stat = 20;
    else
        rpg->s.shop_stat = 21;
}

void print_shop_dialogue(rpg_t *rpg)
{
    int click = check_shop_mouseclick(rpg);
    if (rpg->s.shop_stat == 0) {
        sfSprite_setPosition(rpg->s.shop1_s, (sfVector2f){1300, 700});
        sfRenderWindow_drawSprite(rpg->window, rpg->s.shop1_s, NULL);
        sfRenderWindow_drawRectangleShape(rpg->window, rpg->s.b[1].rect, NULL);
        sfRenderWindow_drawRectangleShape(rpg->window, rpg->s.b[2].rect, NULL);
        sfRenderWindow_setMouseCursorVisible(rpg->window, sfTrue);
        if (click == 1)
            check_buy(rpg);
        if (click == 2)
            rpg->s.shop_stat = 3;
    }
    print_shop_stat(rpg);
}
