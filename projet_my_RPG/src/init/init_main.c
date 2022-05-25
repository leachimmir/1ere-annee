/*
** EPITECH PROJECT, 2022
** File description:
** init_main
*/

#include "rpg.h"

sfRenderWindow *create_window(unsigned int width, unsigned int height,
char const *title, rpg_t *rpg)
{
    sfVideoMode videoMode;

    videoMode.width = width;
    videoMode.height = height;
    videoMode.bitsPerPixel = 32;
    rpg->window = sfRenderWindow_create(videoMode, title, sfResize |
    sfClose, NULL);
    return rpg->window;
}

void init_main(rpg_t *rpg)
{
    rpg->window = create_window(1920, 1080, "RPG", rpg);
    rpg->fps = 120;
    rpg->sound_lvl = 50;
    rpg->music_lvl = 30;
    rpg->game_status = 0;
    rpg->mouseTexture = sfTexture_createFromFile(MOUSE_T, NULL);
    rpg->sprmouse = sfSprite_create();
    rpg->clock = sfClock_create();
    rpg->posmouse.x = 0;
    rpg->posmouse.y = 0;
    rpg->seconds = 0;
    rpg->c.pos.x = 945;
    rpg->c.pos.y = 10;
    rpg->map.map_status = VILLAGE;
}

void call_init(rpg_t *rpg)
{
    init_value(rpg);
    for (int i = 0; i != 10; i++)
        init_ennemi(rpg, i);
    init_position_ennemy(rpg);
    init_main(rpg);
    init_main_menu(rpg);
    init_allmap(rpg);
    init_inventory(rpg);
    init_utils(rpg);
    init_spawn(rpg);
    init_option_menu(rpg);
    init_setting(rpg);
    init_dialogue_sprite(&rpg->d);
    init_mainmenu_button(rpg);
    init_shop_button(rpg);
    init_shop_dialogue(rpg);
    init_prologue(rpg);
}
