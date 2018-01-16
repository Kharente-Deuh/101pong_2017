##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makefile
##

SRC	=	src/main.c			\
		src/angle.c			\
		src/compute_pos.c 		\
		src/error_conditions.c 		\
		src/get_float.c 		\
		src/speed_vector.c

OBJ	=	$(SRC:.c=.o)

NAME	=	101pong

FLAG	=	-W -Wall

LIB	=	-lm -Iinclude/

$(NAME):	$(OBJ)
	gcc $(OBJ) $(FLAG) $(LIB)
	mv a.out $(NAME)

all:	$(NAME)

clean:
	rm -f $(OBJ)
	rm -f */*~
	rm -f */*#*
	rm -f */.*.swp

fclean: clean
	rm -f $(NAME)

re:	fclean all
