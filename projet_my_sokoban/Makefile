##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile for navy
##

SRC	=	src/check_tersize.c	\
		src/count_l.c	\
		src/count_max_col.c	\
		src/count_x.c	\
		src/find_p.c	\
		src/free_files.c	\
		src/game.c	\
		src/h.c	\
		src/main.c	\
		src/malloc_x.c	\
		src/move_p.c	\
		src/my_arrcpy.c	\
		src/my_putstr.c	\
		src/my_str_to_word_array.c	\
		src/my_strlen.c	\
		src/print_m.c	\
		src/read_file.c	\
		src/verify_map.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

CCPFLAGS	=	-I./include/	\

all:	$(NAME)

$(NAME):$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CCPFLAGS) -lcurses -Wall -Werror -g3

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f lib/my/$(NAME)
re:	fclean all

auteur:
	echo $(USER) > Leachim
