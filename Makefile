##
## EPITECH PROJECT, 2023
## B-CPE-210_fractals
## File description:
## Makefile
##

CC = gcc
SRC = 	src/fractals.c \
	src/error_handler.c \
	src/iteration.c \
	src/pattern/pattern_manager.c \
	src/pattern/init_patterns.c \
	src/utils/pattern_allocation.c \
	src/utils/split_string.c

OBJ = $(SRC:.c=.o)

TEST_SRC =

MAIN = src/main.c

NAME = fractals

CPPFLAGS = -I includes

LIB = -L lib -lmy
CFLAGS = -Wall -Wextra
TEST_PARAMS = $(PARAMS) --coverage -lcriterion

all: $(NAME)

$(NAME): 	SRC += $(MAIN)
$(NAME): 	$(OBJ) $(MAIN:.c=.o) lib
			$(CC) $(OBJ) -o $(NAME) $(LIB)

lib:
		- make -C lib

unit_tests: fclean $(NAME)
			$(CC) $(TEST_SRC) -o test_$(NAME) $(SRC) $(TEST_PARAMS) $(CPPFLAGS)

tests_run: 	unit_tests
			./test_$(NAME)

clean:
		- rm $(OBJ) $(MAIN:.c=.o)

fclean: clean
		- make -C lib fclean
		- rm $(NAME) *.gcda *.gcno

re: fclean
	- make all

coding_style: fclean
				- mkdir "private"
				- mkdir "private/style"
				coding-style . private/style
				cat private/style/coding-style-reports.log

debug: 	re
		valgrind ./$(NAME) $@

.PHONY: all unit_tests tests_run lib clean fclean re coding_style debug
