##
## EPITECH PROJECT, 2022
## Library
## File description:
## Makefile 1
##

SRC =	string_container.c \
		clear_string.c \
		concat_string.c \
		copy_string.c \
		equals_string.c \
		display_string.c \
		is_alpha_num_string.c \
		length_string.c \
		split_string.c

OBJ = 	$(SRC:.c=.o)

NAME = 	string
HEADER = $(NAME).h
LIB_NAME = lib$(NAME).a

all: 	$(NAME)

$(NAME): $(OBJ)
		ar rc $(LIB_NAME) $(OBJ)
		cp $(LIB_NAME) ../
		cp $(HEADER) ../../includes/lib

clean:
		- rm -f $(OBJ)
		- rm -f $(LIB_NAME)

fclean: clean

re: 	fclean all
