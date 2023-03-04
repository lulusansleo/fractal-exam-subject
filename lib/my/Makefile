##
## EPITECH PROJECT, 2022
## Library
## File description:
## Makefile 1
##

SRC =	my_putstr.c \
	my_strlen.c \
	my_putchar.c \
	my_getint.c \
	my_putchar_error.c \
	my_putstr_error.c \
	my_getnbr_sign.c \
	my_str_isnum.c

OBJ = 	$(SRC:.c=.o)

NAME = 	my
HEADER = $(NAME).h
LIB_NAME = lib$(NAME).a

all: 	$(NAME)

$(NAME): $(OBJ)
		$(AR) rc $(LIB_NAME) $(OBJ)
		cp $(LIB_NAME) ../
		cp $(HEADER) ../../includes/lib

clean:
		- $(RM) $(OBJ)
		- $(RM) $(LIB_NAME)

fclean: clean

re: 	fclean all

.PHONY: all clean fclean re
