##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC		=	src/sprite/manage/main_menu.c	\
			src/main_menu/main_menu_button.c	\
			src/sprite/manage/game.c	\
			src/sprite/call_create.c	\
			src/main_menu/main_menu_loop.c	\
			src/game/check_game_status.c	\
			src/game/game_loop.c	\
			src/game/events.c	\
			src/game/attack_rect.c	\
			src/game/hit_ennemy.c	\
			src/game/destroy.c	\
			src/game/animation.c	\
			lib/my_putchar.c	\
			lib/my_putstr.c	\

INIT	=	src/init/init_main.c	\
			src/init/init_main_menu.c	\
			src/init/init_map.c	\
			src/init/init_inventory.c	\
			src/init/init_stats.c	\
			src/init/init_utils.c	\
			src/init/init_spawn.c	\
			src/init/init_option_menu.c	\
			src/init/init_setting.c	\
			src/init/init_quete.c	\
			src/init/init_setting_button.c 	\
			src/init/init_enemy.c	\
			src/init/init_shop.c 	\
			src/init/init_animation.c 	\

MAP 	=	src/map/game_village.c	\
			src/map/game_rightmap.c	\
			src/map/game_leftmap.c	\
			src/map/game_bossmap.c	\
			src/map/game_arenemap.c	\
			src/map/game_arenemap_anim.c	\
			src/map/game_cave.c	\
			src/map/game_hospital.c	\
			src/map/game_shop.c	\
			src/map/game_shop_dialogue.c	\
			src/map/game_houseone.c	\
			src/map/game_housetwo.c	\

UTILS 	=	src/utils/display_inventory.c	\
			src/utils/display_spawn.c	\
			src/utils/display_optionmenu.c	\
			src/utils/display_setting.c 	\

COLLIDE	=	src/game/collide.c	\
			src/game/colision_functions.c	\

QUETE	=	src/quete/check_quete_to_print.c	\
			src/quete/print_first_quete.c	\
			src/quete/print_second_quete.c	\
			src/quete/print_third_quete.c 	\

MAIN	=	src/main.c	\

OBJS	=	$(SRC:.c=.o)	\
			$(INIT:.c=.o)	\
			$(MAP:.c=.o)	\
			$(UTILS:.c=.o)	\
			$(COLLIDE:.c=.o)	\
			$(QUETE:.c=.o)	\
			$(MAIN:.c=.o)	\

NAME	=	my_rpg

CFLAGS	=	-Wall -Wextra -g3

CPPFLAGS	=	-I./include/

LDLIBS 	= 	-l csfml-window	\
			-l csfml-graphics	\
			-l csfml-system	\
			-l csfml-audio	\

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LDLIBS)

clean:
	rm -f $(OBJS)
	rm -f lib/*.o
	rm -f src/*.o
	rm -f *.gc*
	rm -f *~
	rm -f vgcore*
	rm -f *.tmp

fclean:	clean
		rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
