/*
** EPITECH PROJECT, 2022
** File description:
** main
*/

#include "rpg.h"

void my_usage(void)
{
    my_putstr("\nRPG created with CSFML.\n\n");
    my_putstr("USAGE\n");
    my_putstr("  ./my_rpg\n\n\n");
    my_putstr("OPTIONS\n");
    my_putstr("  -h\t\tprint the usage and quit.\n\n");
    my_putstr("USER INTERACTIONS\n");
    my_putstr("  UP_KEY\tcharacter moves up.\n");
    my_putstr("  RIGHT_KEY\tcharacter moves right.\n");
    my_putstr("  LEFT_KEY\tcharacter moves left.\n");
    my_putstr("  DOWN_KEY\tcharacter moves down.\n\n");
}

void events(rpg_t *rpg)
{
    if (rpg->event.type == sfEvtClosed)
        sfRenderWindow_close(rpg->window);
    rpg->mouse = sfMouse_getPositionRenderWindow(rpg->window);
    rpg->posmouse.x = rpg->mouse.x;
    rpg->posmouse.y = rpg->mouse.y;
}

void clock(rpg_t *rpg)
{
    sfTime time;

    time = sfClock_getElapsedTime(rpg->clock);
    rpg->seconds = sfTime_asSeconds(time);
    if (rpg->game_status == 0 || rpg->game_status == 1) {
        sfSprite_setPosition(rpg->mm.sprite, rpg->mm.pos);
        if (rpg->seconds > 0.065) {
            move_rect_par(rpg, 900, 6300);
            sfClock_restart(rpg->clock);
        }
    }
    if (rpg->seconds > 0.065 && rpg->c.attacking == 1) {
        attack_rect(rpg);
    }
    if (rpg->game_status == 3 && rpg->c.attacking == 0)
        game_events(rpg);
}

void start_game(rpg_t *rpg)
{
    my_gamemusic(rpg);
    sfRenderWindow_setMouseCursorVisible(rpg->window, sfFalse);
    while (sfRenderWindow_isOpen(rpg->window)) {
        sfRenderWindow_setFramerateLimit(rpg->window, rpg->fps);
        sfRenderWindow_display(rpg->window);
        while (sfRenderWindow_pollEvent(rpg->window, &rpg->event))
            events(rpg);
        clock(rpg);
        check_game_status(rpg);
    }
    destroy_all(rpg);
}

int main(int ac, char **av)
{
    struct rpg_s rpg;

    if (ac > 2)
        return 84;
    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h') {
            my_usage();
            return 0;
        } else
            return 84;
    }
    call_init(&rpg);
    create_sprites(&rpg);
    start_game(&rpg);
    return 0;
}
