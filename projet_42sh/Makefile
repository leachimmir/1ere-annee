##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## minishell 1
##

SRC	=	src/main.c	\
		src/functions.c	\
		src/env.c	\
		src/setenv.c	\
		src/exec.c	\
		src/my_execve.c	\
		src/free.c	\
		src/my_str_to_word_array.c	\
		src/my_strcmp.c	\
		src/err.c	\
		src/prompt.c	\
		src/change_line.c	\
		src/cd.c	\
		src/redirections.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

CPPFLAGS	=	-I./include/

CFLAGS		=	-Wall -Wextra -pedantic -g3

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	 fclean all

.PHONY:	all clean fclean re
