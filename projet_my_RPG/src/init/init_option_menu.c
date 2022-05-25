/*
** EPITECH PROJECT, 2022
** File description:
** init_option_menu
*/

#include "rpg.h"

void my_buttonsound(button_t *button)
{
    button->click_sound =
        sfMusic_createFromFile("sprites/menu/button_click.ogg");
    sfMusic_play(button->click_sound);
    sfMusic_setVolume(button->click_sound, 80);
}

void create_button(button_t *b, char *texture)
{
    b->texture = sfTexture_createFromFile(texture, NULL);
    b->rect = sfRectangleShape_create();
    sfVector2u p = sfTexture_getSize(b->texture);
    sfRectangleShape_setTexture(b->rect, b->texture, sfTrue);
    sfRectangleShape_setPosition(b->rect, b->pos);
    sfRectangleShape_setSize(b->rect, (sfVector2f){p.x, p.y});
    b->size = sfRectangleShape_getGlobalBounds(b->rect);
}

void init_option_sprite(menu_t *menu)
{
    sfVector2f pos_menu = {749, 227};
    menu->background_t = sfTexture_createFromFile(BACK_MENU_T, NULL);
    menu->background_s = sfSprite_create();
    sfSprite_setTexture(menu->background_s, menu->background_t, sfFalse);
    menu->option_t = sfTexture_createFromFile(OPTION_T, NULL);
    menu->option_s = sfSprite_create();
    sfSprite_setTexture(menu->option_s, menu->option_t, sfFalse);
    sfSprite_setPosition(menu->option_s, pos_menu);
}

void init_option_menu(rpg_t *rpg)
{
    init_option_sprite(&rpg->option);
    init_button_size(rpg);
    init_button_pos(&rpg->option);
    create_button(&rpg->option.b[1], "sprites/menu/resume.png");
    create_button(&rpg->option.b[2], "sprites/menu/restart.png");
    create_button(&rpg->option.b[3], "sprites/menu/setting.png");
    create_button(&rpg->option.b[4], "sprites/menu/exit.png");
}
