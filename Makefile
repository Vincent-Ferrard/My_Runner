##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## My_Hunter
##

SRC	=	src/animate.c			\
		src/conditions_player.c		\
		src/create_all.c		\
		src/create_nb_blocks.c		\
		src/display.c			\
		src/error.c			\
		src/event.c			\
		src/functions_window_open.c	\
		src/init_all.c			\
		src/init_struct.c		\
		src/main.c			\
		src/map.c			\
		src/move.c			\
		src/music.c			\
		src/parallax.c			\
		src/score.c			\
		src/utils.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_runner

CFLAGS	=	-W -Wall -Wextra -Iinc

LDFLAGS	=	-l c_graph_prog 

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
