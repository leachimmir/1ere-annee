/*
** EPITECH PROJECT, 2022
** File description:
** check_game_status
*/

#include "rpg.h"

void check_game_status(rpg_t *rpg)
{
    check_gameover(rpg);
    if (rpg->game_status == 0 || rpg->game_status == 1)
        main_menu(rpg);
    if (rpg->game_status == 2)
        display_optionmenu(rpg);
    if (rpg->game_status == 3) {
        draw_map(rpg);
        game_loop(rpg);
    }
    if (rpg->game_status == 4 || rpg->game_status == 5)
        print_prologue(rpg);
    if (rpg->game_status == 6)
        print_gameover(rpg);
    if (rpg->game_status == 10 || rpg->game_status == 20)
        display_setting(rpg);
    if (rpg->game_status == 7)
        print_end(rpg);
}
