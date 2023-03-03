##
## EPITECH PROJECT, 2022
## Library
## File description:
## Makefile 1
##

SRC =	array_container.c \
		clear_array.c \
		concat_array.c \
		copy_array.c \
		create_array.c \
		create_from_array.c \
		equals_array.c \
		filter_array.c \
		includes_array.c \
		pop_array.c \
		push_array.c \
		reverse_array.c \
		shift_array.c \
		sort_array.c \
		to_string_array.c \
		unshift_array.c

OBJ = 	$(SRC:.c=.o)

NAME = 	array
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
