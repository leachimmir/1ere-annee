/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-arthur.dos-santos
** File description:
** rpg
*/

#include "struct.h"

#ifndef RPG_H_
    #define RPG_H_

int main(int ac, char **av);
void restart_game(rpg_t *rpg);
void exit_game(rpg_t *rpg);
void print_gameover(rpg_t *rpg);
void check_gameover(rpg_t *rpg);
void my_gamemusic(rpg_t *rpg);
void check_game_status(rpg_t *rpg);
void print_mainmenu_button(rpg_t *rpg);
/*     ---lib---     */
void my_putstr(char const *str);
/*      ---animation---      */
void print_prologue(rpg_t *rpg);
/*     ---init---     */
void call_init(rpg_t *rpg);
void init_main(rpg_t *rpg);
void init_main_menu(rpg_t *rpg);
void init_prologue(rpg_t *rpg);
void init_inventory(rpg_t *rpg);
void init_allmap(rpg_t *rpg);
void init_position(rpg_t *rpg);
void init_value(rpg_t *rpg);
void init_utils(rpg_t *rpg);
void init_spawn(rpg_t *rpg);
void init_option_menu(rpg_t *rpg);
void init_ennemi(rpg_t *rpg, int i);
void init_position_ennemy(rpg_t *rpg);
void init_setting(rpg_t *rpg);
void init_button_setting_size(rpg_t *rpg);
void init_dialogue_sprite(dialogue_t *d);
void init_mainmenu_button(rpg_t *rpg);
void init_button_size(rpg_t *rpg);
void init_button_pos(menu_t *opt);
void init_shop_dialogue(rpg_t *rpg);
void init_shop_button(rpg_t *rpg);
/*     ---create---     */
void create_sprites(rpg_t *rpg);
void create_sprite_menu(rpg_t *rpg);
void create_sprite_game(rpg_t *rpg);
void create_button(button_t *b, char *texture);
/*     ---sprite_main_menu---     */
void main_menu(rpg_t *rpg);
void move_rect_par(rpg_t *rpg, int offset, int max_value);
void drawSpr(rpg_t *rpg);
void getpos(rpg_t *rpg);
void spritemove(rpg_t *rpg);
/*     ---sprite_game---     */
void game_loop(rpg_t *rpg);
void draw_sprite_game(rpg_t *rpg);
void getpos_game(rpg_t *rpg);
void attack_rect(rpg_t *rpg);
void move_rect_attack(rpg_t *rpg, int offset, int max_value);
/*     ---events---     */
void game_events(rpg_t *rpg);
void attack_rect(rpg_t *rpg);
void animate_ennemies(rpg_t *rpg, int i);
void hit_ennemy(rpg_t *rpg, char c);
/*     ---draw_map---     */
void draw_map(rpg_t *rpg);
void draw_inside(rpg_t *rpg);
void draw_village(rpg_t *rpg);
void draw_leftmap(rpg_t *rpg);
void draw_arenemap(rpg_t *rpg);
void draw_rightmap(rpg_t *rpg);
void draw_bossmap(rpg_t *rpg);
void draw_cave(rpg_t *rpg);
void draw_hospital(rpg_t *rpg);
void draw_shop(rpg_t *rpg);
void draw_houseone(rpg_t *rpg);
void draw_housetwo(rpg_t *rpg);
/*      ---inventory ---      */
void display_inventory(rpg_t *rpg);
void display_optionmenu(rpg_t *rpg);
/*      ---spawn---     */
void display_items_spawn(rpg_t *rpg);
/*     ---collides---     */
int collide_main(rpg_t *rpg);
int collide_call(rpg_t *rpg);
int collide_cave(rpg_t *rpg);
int hix_box_collide(rpg_t *rpg, int i);
void display_setting(rpg_t *rpg);
int collide_cave(rpg_t *rpg);
/*      ---sound---     */
void my_buttonsound(button_t *button);
void destroy_all(rpg_t *rpg);
/*      ---quete---     */
void check_dialogue_to_print(rpg_t *rpg);
int check_dialogue_mouseclick(rpg_t *rpg);
void first_dialogue(rpg_t *rpg);
void second_dialogue(rpg_t *rpg);
void third_dialogue(rpg_t *rpg);
void print_shop_dialogue(rpg_t *rpg);
void print_end(rpg_t *rpg);

#endif/* !RPG_H_ */
