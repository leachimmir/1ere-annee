/*
** EPITECH PROJECT, 2022
** File description:
** init_setting
*/

#include "rpg.h"

void init_setting_button(setting_t *setting)
{
    create_button(&setting->b[1], "sprites/menu/+.png");
    create_button(&setting->b[2], "sprites/menu/-.png");
    create_button(&setting->b[3], "sprites/menu/+.png");
    create_button(&setting->b[4], "sprites/menu/-.png");
    create_button(&setting->b[5], "sprites/menu/+.png");
    create_button(&setting->b[6], "sprites/menu/-.png");
    create_button(&setting->b[7], "sprites/menu/sound_cut.png");
    create_button(&setting->b[8], "sprites/menu/music_cut.png");
    create_button(&setting->b[9], "sprites/menu/how_to_play_button.png");
    create_button(&setting->b[10], EXIT_T);
}

void init_setting_pos(setting_t *setting)
{
    setting->b[1].pos.x = 800;
    setting->b[1].pos.y = 330;
    setting->b[2].pos.x = 400;
    setting->b[2].pos.y = 330;
    setting->b[3].pos.x = 800;
    setting->b[3].pos.y = 510;
    setting->b[4].pos.x = 400;
    setting->b[4].pos.y = 510;
    setting->b[5].pos.x = 800;
    setting->b[5].pos.y = 690;
    setting->b[6].pos.x = 400;
    setting->b[6].pos.y = 690;
    setting->b[7].pos.x = 290;
    setting->b[7].pos.y = 330;
    setting->b[8].pos.x = 295;
    setting->b[8].pos.y = 690;
    setting->b[9].pos.x = 900;
    setting->b[9].pos.y = 220;
}

void init_setting_txt(setting_t *setting)
{
    sfVector2f pos_sound = {480, 230};
    sfVector2f pos_fps = {480, 415};
    sfVector2f pos_music = {480, 600};

    setting->fps_t = sfTexture_createFromFile(FPS_T, NULL);
    setting->fps_s = sfSprite_create();
    sfSprite_setTexture(setting->fps_s, setting->fps_t, sfFalse);
    sfSprite_setPosition(setting->fps_s, pos_fps);
    setting->sound_t = sfTexture_createFromFile(SOUND_T, NULL);
    setting->sound_s = sfSprite_create();
    sfSprite_setTexture(setting->sound_s, setting->sound_t, sfFalse);
    sfSprite_setPosition(setting->sound_s, pos_sound);
    setting->music_t = sfTexture_createFromFile(MUSIC_T, NULL);
    setting->music_s = sfSprite_create();
    sfSprite_setTexture(setting->music_s, setting->music_t, sfFalse);
    sfSprite_setPosition(setting->music_s, pos_music);
}

void init_setting_back(setting_t *setting)
{
    sfVector2f scale = {2, 1.6};
    sfVector2f pos = {150, 50};
    setting->background_t = sfTexture_createFromFile(BACKGROUND_T, NULL);
    setting->background_s = sfSprite_create();
    sfSprite_setTexture(setting->background_s, setting->background_t, sfFalse);
    setting->txt_t = sfTexture_createFromFile(TXT_T, NULL);
    setting->txt_s = sfSprite_create();
    sfSprite_setTexture(setting->txt_s, setting->txt_t, sfFalse);
    sfSprite_setScale(setting->txt_s, scale);
    sfSprite_setPosition(setting->txt_s, pos);
    setting->htp_t = sfTexture_createFromFile(HTP_T, NULL);
    setting->htp_s = sfSprite_create();
    sfSprite_setTexture(setting->htp_s, setting->htp_t, sfFalse);
    sfSprite_setScale(setting->htp_s, scale);
    sfSprite_setPosition(setting->htp_s, (sfVector2f){1000, 50});
}

void init_setting(rpg_t *rpg)
{
    init_setting_back(&rpg->setting);
    init_setting_txt(&rpg->setting);
    init_button_setting_size(rpg);
    init_setting_pos(&rpg->setting);
    init_setting_button(&rpg->setting);
}
