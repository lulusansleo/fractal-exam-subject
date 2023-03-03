##
## EPITECH PROJECT, 2022
## Library
## File description:
## Makefile 1
##

SRC =	errors_container.c \
		functions.c \
		malloc_error.c \
		open_error.c \
		params_error.c \
		read_error.c \
		stat_error.c

OBJ = 	$(SRC:.c=.o)

NAME = 	errors
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
