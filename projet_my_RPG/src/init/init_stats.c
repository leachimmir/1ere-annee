/*
** EPITECH PROJECT, 2022
** File description:
** init_game
*/

#include "rpg.h"

void init_button_size(rpg_t *rpg)
{
    rpg->option.b[1].size.left = 0;
    rpg->option.b[1].size.top = 0;
    rpg->option.b[1].size.width = 335;
    rpg->option.b[1].size.height = 110;
    rpg->option.b[2].size.left = 0;
    rpg->option.b[2].size.top = 0;
    rpg->option.b[2].size.width = 335;
    rpg->option.b[2].size.height = 110;
    rpg->option.b[3].size.left = 0;
    rpg->option.b[3].size.top = 0;
    rpg->option.b[3].size.width = 335;
    rpg->option.b[3].size.height = 110;
    rpg->option.b[4].size.left = 0;
    rpg->option.b[4].size.top = 0;
    rpg->option.b[4].size.width = 335;
    rpg->option.b[4].size.height = 110;
}

void init_button_pos(menu_t *opt)
{
    opt->b[1].pos.x = 792;
    opt->b[1].pos.y = 350;
    opt->b[2].pos.x = 792;
    opt->b[2].pos.y = 465;
    opt->b[3].pos.x = 792;
    opt->b[3].pos.y = 580;
    opt->b[4].pos.x = 792;
    opt->b[4].pos.y = 695;
}

void init_position(rpg_t *rpg)
{
    rpg->mm.pos.x = 1500;
    rpg->mm.pos.y = 1000;
    rpg->inv.vec_inv.x = 0;
    rpg->inv.vec_inv.y = 0;
    rpg->inv.vec_gold.x = 170;
    rpg->inv.vec_gold.y = 250;
    rpg->inv.vec_sword.x = 270;
    rpg->inv.vec_sword.y = 255;
    rpg->inv.vec_axe.x = 360;
    rpg->inv.vec_axe.y = 245;
    rpg->c.pos_h.x = 1450;
    rpg->c.pos_h.y = 0;
    rpg->c.rectsprite_h.top = 0;
    rpg->c.rectsprite_h.left = 0;
    rpg->c.rectsprite_h.width = 453;
    rpg->c.rectsprite_h.height = 75;
}

void init_caractere(rpg_t *rpg)
{
    rpg->c.spriteTexture = sfTexture_createFromFile
    ("sprites/gfx/character_walk.png", NULL);
    rpg->c.sprite = sfSprite_create();
    sfSprite_setTexture(rpg->c.sprite, rpg->c.spriteTexture, sfTrue);
    rpg->c.rectsprite.top = 0;
    rpg->c.rectsprite.left = 0;
    rpg->c.rectsprite.width = 31;
    rpg->c.rectsprite.height = 62;
    rpg->c.spriteTexture_a = sfTexture_createFromFile
    ("sprites/gfx/character_attack.png", NULL);
    rpg->c.sprite_a = sfSprite_create();
    sfSprite_setTexture(rpg->c.sprite_a, rpg->c.spriteTexture_a, sfTrue);
    rpg->c.rectsprite_a.top = 0;
    rpg->c.rectsprite_a.left = 0;
    rpg->c.rectsprite_a.width = 62;
    rpg->c.rectsprite_a.height = 62;
    rpg->c.attack = 25;
}

void init_value(rpg_t *rpg)
{
    init_caractere(rpg);
    rpg->c.attacking = 0;
    rpg->c.health = 100;
    rpg->map.map_status = VILLAGE;
    rpg->inv.gold = 0;
    rpg->inv.sword = 0;
    rpg->inv.axe = 0;
    rpg->inv.ruby = 0;
    rpg->ennemy_status = 0;
    rpg->spawn.tree_status = 0;
    rpg->d.first_stat = 0;
    rpg->d.second_stat = 0;
    rpg->d.third_stat = 0;
    rpg->c.spriteTexture_h = sfTexture_createFromFile
    ("sprites/gfx/health_bar.png", NULL);
    rpg->c.sprite_h = sfSprite_create();
    sfSprite_setTexture(rpg->c.sprite_h, rpg->c.spriteTexture_h, sfTrue);
    init_position(rpg);
}
