##
## EPITECH PROJECT, 2020
## makefile
## File description:
## task01
##

SRC	=	src/main.c		\
		src/create_arg.c	\
		lib/my/my_putchar.c	\
		lib/my/my_put_str_s.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_strdup.c	\
		lib/my/my_strlen.c	\
		lib/my/my_revstr.c	\
		lib/my/my_put_octa.c	\
		lib/my/my_put_unsigned.c	\
		lib/my/my_put_hexa.c	\
		lib/my/my_put_bin.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CPPFLAGS	=	-I./include/

CFLAGS		=	-Wall -Wextra -pedantic

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	 fclean all

.PHONY:	all clean fclean re
