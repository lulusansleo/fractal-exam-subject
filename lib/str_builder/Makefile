##
## EPITECH PROJECT, 2022
## Library String Builder
## File description:
## Makefile
##

SRC =	str_builder_container.c \
		build_str_builder.c \
		clear_str_builder.c \
		concat_str_builder.c \
		copy_str_builder.c \
		create_str_builder.c \
		create_from_str_builder.c \
		pop_str_builder.c \
		push_str_builder.c \
		reverse_str_builder.c \
		shift_str_builder.c \
		unshift_str_builder.c

OBJ = 	$(SRC:.c=.o)

NAME = 	str_builder
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
