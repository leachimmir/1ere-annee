/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-arthur.dos-santos
** File description:
** struct
*/

#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <math.h>

#ifndef STRUCT_H_
    #define STRUCT_H_

    #define SPRITE_RUN "sprites/main_menu/spriterun.png"

    #define MAP_STAT rpg->map.map_status
    #define VILLAGE 1
    #define LEFT 2
    #define ARENE 3
    #define RIGHT 4
    #define BOSS 5
    #define CAVE 6
    #define HOSPITAL 7
    #define SHOP 8
    #define HOUSE1 9
    #define HOUSE2 10

    #define VILLAGE_T "sprites/map/village.png"
    #define LEFT_T "sprites/map/map_left.png"
    #define ARENE_T "sprites/map/arene.png"
    #define RIGHT_T "sprites/map/map_right.png"
    #define BOSS_T "sprites/map/boss.png"
    #define CAVE_T "sprites/map/cave.png"
    #define HOSPITAL_T "sprites/map/hospital.png"
    #define SHOP_T "sprites/map/shop.png"
    #define HOUSE1_T "sprites/map/house1.png"
    #define HOUSE2_T "sprites/map/house1.png"
    #define MOUSE_T "sprites/gfx/cursor.png"
    #define TREE_T "sprites/map/rightmap_tree.png"
    #define BACK_MENU_T "sprites/map/village.png"
    #define OPTION_T "sprites/menu/option_menu.png"
    #define BACKGROUND_T "sprites/menu/setting_back.png"
    #define TXT_T "sprites/menu/setting_zone.png"
    #define HTP_T "sprites/menu/howtoplay.png"
    #define FPS_T "sprites/menu/fps_text.png"
    #define SOUND_T "sprites/menu/sound_text.png"
    #define MUSIC_T "sprites/menu/music_text.png"

    #define EXIT_T "sprites/main_menu/exit_button.png"

    #define P1_T "sprites/quete/prologue1.png"
    #define P2_T "sprites/quete/prologue2.png"

    #define D1_T "sprites/quete/dialogue1.png"
    #define D20_T "sprites/quete/dialogue2.0.png"
    #define D21_T "sprites/quete/dialogue2.1.png"
    #define D30_T "sprites/quete/dialogue3.0.png"
    #define D31_T "sprites/quete/dialogue3.1.png"
    #define D32_T "sprites/quete/dialogue3.2.png"
    #define D33_T "sprites/quete/dialogue3.3.png"
    #define D4_T "sprites/quete/dialogue4.png"
    #define D5_T "sprites/quete/dialogue5.png"

    #define PLAYER_X rpg->c.pos.x
    #define PLAYER_Y rpg->c.pos.y

    #define KEYPRESS rpg->event.type == sfEvtKeyPressed
    #define KEY_UP rpg->event.key.code == sfKeyUp
    #define KEY_DOWN rpg->event.key.code == sfKeyDown
    #define KEY_LEFT rpg->event.key.code == sfKeyLeft
    #define KEY_RIGHT rpg->event.key.code == sfKeyRight
    #define KEY_ALT rpg->event.key.code == sfKeyLAlt
    #define KEY_CTRL rpg->event.key.code == sfKeyLControl

typedef struct button_s {
    sfRectangleShape *rect;
    sfTexture *texture;
    sfFloatRect size;
    sfVector2f pos;
    sfMusic *click_sound;
} button_t;

typedef struct animation_s {
    sfTexture *prologue1_t;
    sfSprite *prologue1_s;
    sfTexture *prologue2_t;
    sfSprite *prologue2_s;
    sfTexture *gameover_t;
    sfSprite *gameover_s;
    button_t b[3];
    sfTexture *end_t;
    sfSprite *end_s;
} animation_t;

typedef struct shop_s {
    int shop_stat;
    sfTexture *shop1_t;
    sfSprite *shop1_s;
    button_t b[3];
    sfTexture *shop20_t;
    sfSprite *shop20_s;
    sfTexture *shop21_t;
    sfSprite *shop21_s;
    sfTexture *shop3_t;
    sfSprite *shop3_s;
} shop_t;

typedef struct dialogue_s {
    sfTexture *dialogue1_t;
    sfSprite *dialogue1_s;
    sfTexture *dialogue20_t;
    sfSprite *dialogue20_s;
    sfTexture *dialogue21_t;
    sfSprite *dialogue21_s;
    sfTexture *dialogue30_t;
    sfSprite *dialogue30_s;
    sfTexture *dialogue31_t;
    sfSprite *dialogue31_s;
    sfTexture *dialogue32_t;
    sfSprite *dialogue32_s;
    sfTexture *dialogue33_t;
    sfSprite *dialogue33_s;
    sfTexture *dialogue4_t;
    sfSprite *dialogue4_s;
    sfTexture *dialogue5_t;
    sfSprite *dialogue5_s;
    int first_stat;
    int second_stat;
    int third_stat;
    button_t b[3];
} dialogue_t;

typedef struct setting_s {
    button_t b[12];
    sfTexture *background_t;
    sfSprite *background_s;
    sfTexture *txt_t;
    sfSprite *txt_s;
    sfTexture *fps_t;
    sfSprite *fps_s;
    sfTexture *sound_t;
    sfSprite *sound_s;
    sfTexture *music_t;
    sfSprite *music_s;
    sfTexture *htp_t;
    sfSprite *htp_s;
} setting_t;

typedef struct menu_s {
    button_t b[5];
    sfFont *font;
    sfText *music;
    sfTexture *background_t;
    sfSprite *background_s;
    sfTexture *effect_t;
    sfSprite *effect_s;
    sfTexture *option_t;
    sfSprite *option_s;
} menu_t;

typedef struct spawn_s {
    sfTexture *sword_t;
    sfSprite *sword_s;
    sfTexture *axe_t;
    sfSprite *axe_s;
    int tree_status;
} spawn_t;

typedef struct utils_s {
    sfTexture *back_txt_t;
    sfSprite *back_txt_s;

} utils_t;

typedef struct inv_s {
    int sword;
    int gold;
    int axe;
    int ruby;
    sfTexture *inventory_t;
    sfSprite *inventory_s;
    sfVector2f vec_inv;
    sfTexture *sword_t;
    sfSprite *sword_s;
    sfVector2f vec_sword;
    sfTexture *axe_t;
    sfSprite *axe_s;
    sfTexture *ruby_t;
    sfSprite *ruby_s;
    sfVector2f vec_axe;
    sfTexture *gold1_t;
    sfTexture *gold2_t;
    sfTexture *gold3_t;
    sfTexture *gold4_t;
    sfSprite *gold1_s;
    sfSprite *gold2_s;
    sfSprite *gold3_s;
    sfSprite *gold4_s;
    sfSprite *gold_s;
    sfVector2f vec_gold;
    sfTime time;
} inv_t;

typedef struct map_s {
    int map_status;
    sfTexture *village_t;
    sfSprite *village_s;
    sfTexture *arene_t;
    sfSprite *arene_s;
    sfTexture *left_t;
    sfSprite *left_s;
    sfTexture *right_t;
    sfSprite *right_s;
    sfTexture *right_tree_t;
    sfSprite *right_tree_s;
    sfTexture *boss_t;
    sfSprite *boss_s;
    sfTexture *house1_t;
    sfSprite *house1_s;
    sfTexture *house2_t;
    sfSprite *house2_s;
    sfTexture *cave_t;
    sfSprite *cave_s;
    sfTexture *shop_t;
    sfSprite *shop_s;
    sfTexture *hospital_t;
    sfSprite *hospital_s;
} map_t;

typedef struct main_menu_s {
    sfIntRect rectsprite;
    sfTexture *spriteTexture;
    sfSprite *sprite;
    sfTexture *obt;
    sfSprite *onebackground;
    sfTexture *tbt;
    sfSprite *twobackground;
    sfTexture *thbt;
    sfSprite *threebackground;
    sfTexture *fbt;
    sfSprite *fourbackground;
    sfTexture *fibt;
    sfSprite *fivebackground;
    sfTexture *titleTexture;
    sfSprite *title;
    sfVector2f postitle;
    sfVector2f pos;
    sfVector2f posone;
    sfVector2f postwo;
    sfVector2f posthree;
    sfVector2f posfour;
    sfVector2f posfive;
    sfVector2f moveone;
    sfVector2f movetwo;
    sfVector2f movethree;
    sfVector2f movefour;
    sfVector2f movefive;
    sfTexture *startTexture;
    sfSprite *start;
    sfVector2f posstart;
    sfTexture *settingsTexture;
    sfSprite *settings;
    sfVector2f possettings;
    sfTexture *exitTexture;
    sfSprite *exit;
    sfVector2f posexit;
} main_menu_t;

typedef struct character_s {
    sfIntRect rectsprite;
    sfTexture *spriteTexture;
    sfSprite *sprite;
    sfIntRect rectsprite_a;
    sfTexture *spriteTexture_a;
    sfSprite *sprite_a;
    sfVector2f pos;
    sfIntRect rectsprite_h;
    sfTexture *spriteTexture_h;
    sfSprite *sprite_h;
    sfVector2f pos_h;
    int attack;
    int attacking;
    float health;
} character_t;

typedef struct ennemi_s {
    sfIntRect rectsprite;
    sfTexture *spriteTexture;
    sfSprite *sprite;
    sfVector2f pos;
    int attacking;
    float attack;
    float health;
    int direction;
} ennemi_t;

typedef struct rpg_s {
    sfMusic *music;
    sfRenderWindow *window;
    sfEvent event;
    sfClock *clock;
    sfRectangleShape *rect;
    sfVector2i mouse;
    sfVector2f posmouse;
    sfTexture *mouseTexture;
    sfSprite *sprmouse;
    int game_status;
    float seconds;
    main_menu_t mm;
    character_t c;
    map_t map;
    utils_t utils;
    inv_t inv;
    spawn_t spawn;
    menu_t option;
    ennemi_t en[13];
    char **restart;
    setting_t setting;
    int fps;
    int sound_lvl;
    int music_lvl;
    dialogue_t d;
    int ennemy_status;
    button_t b[4];
    shop_t s;
    animation_t a;
} rpg_t;

#endif/* !STRUCT_H_ */
