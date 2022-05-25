##
## EPITECH PROJECT, 2020
## makefile
## File description:
## task01
##

SRC	=	src/main.c		\
		src/my_str_to_word_array.c	\
		src/check_pos.c	\
		src/modif_print.c	\
		lib/my/my_putchar.c	\
		lib/my/my_strlen.c	\
		lib/my/my_put_nbr.c	\
		src/close.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

CPPFLAGS	=	-I./include/

CFLAGS		=	-Wall -Wextra -pedantic -g

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	 fclean all

.PHONY:	all clean fclean re
