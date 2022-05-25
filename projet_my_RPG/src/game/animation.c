/*
** EPITECH PROJECT, 2022
** File description:
** animation
*/

#include "rpg.h"

void my_gamemusic(rpg_t *rpg)
{
    rpg->music = sfMusic_createFromFile("sprites/game_music.ogg");
    sfMusic_setLoop(rpg->music, sfTrue);
    sfMusic_play(rpg->music);
    sfMusic_setVolume(rpg->music, rpg->sound_lvl);
}

void print_gameover(rpg_t *rpg)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(rpg->window);
    sfRenderWindow_drawSprite(rpg->window, rpg->a.gameover_s, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window, rpg->a.b[1].rect, NULL);
    sfRenderWindow_drawRectangleShape(rpg->window, rpg->a.b[2].rect, NULL);
    for (int i = 0; i <= 2; i++) {
        if (mouse.x > rpg->a.b[i].size.left
        && sfMouse_isButtonPressed(sfMouseLeft)
        && mouse.x < rpg->a.b[i].size.left + rpg->a.b[i].size.width
        && mouse.y > rpg->a.b[i].size.top && mouse.y <
        rpg->a.b[i].size.top + rpg->a.b[i].size.height) {
            if (i == 1)
                restart_game(rpg);
            if (i == 2)
                exit_game(rpg);
        }
    }
}

void check_gameover(rpg_t *rpg)
{
    if (rpg->c.health <= 0) {
        rpg->game_status = 6;
    }
}

void print_end(rpg_t *rpg)
{
    sfRenderWindow_drawSprite(rpg->window, rpg->a.end_s, NULL);
}

void print_prologue(rpg_t *rpg)
{
    if (rpg->game_status == 4) {
        sfRenderWindow_drawSprite(rpg->window, rpg->a.prologue1_s, NULL);
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            rpg->game_status = 5;
    }
    if (rpg->game_status == 5) {
        sfRenderWindow_drawSprite(rpg->window, rpg->a.prologue2_s, NULL);
            if (sfMouse_isButtonPressed(sfMouseLeft))
            rpg->game_status = 3;
    }
}
