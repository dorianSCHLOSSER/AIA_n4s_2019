##
## EPITECH PROJECT, 2019
## d10
## File description:
## d10
##

SRC	=	src/main.c					\
		src/stop_engine.c			\
		src/my_str_to_word_array.c	\
		src/my_putstr.c	\
		src/direction.c

OBJ	=	$(SRC:.c=.o)

NAME	=	ai

CFLAGS	+=	-I include

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
