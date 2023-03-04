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

TU_SRC = 	tests/fractals.c

OBJ = $(SRC:.c=.o)

MAIN = src/main.c

NAME = fractals
TU_NAME = test_$(NAME)

EXEC = ./$(NAME)
TU_EXEC = ./$(TU_NAME)

VALGRIND_TEST_PARAMS = 4 "\#\#\#@\#.\#@\#\#\#" "...@...@..."

LDFLAGS = -L lib
LDLIBS = -lmy

CFLAGS = -Wall -Wextra
CPPFLAGS = -iquote includes

all: $(NAME)

$(NAME): 	SRC += $(MAIN)
$(NAME): 	$(OBJ) $(MAIN:.c=.o) lib
			$(CC) $(OBJ) -o $(NAME) $(LDFLAGS) $(LDLIBS) $(CFLAGS)

lib:
		$(MAKE) -C lib

clean:
		- $(RM) $(OBJ) $(MAIN:.c=.o)

fclean: clean
		- $(MAKE) -C lib fclean
		- $(RM) $(NAME) *.gcda *.gcno

re: fclean
	$(MAKE) all

coding_style: 	fclean
				- mkdir "private"
				- mkdir "private/style"
				coding-style . private/style
				cat private/style/coding-style-reports.log

asan: CFLAGS += -fsanitize=address
asan: CPPFLAGS += -fsanitize=address
asan: fclean $(NAME)

valgrind: 	re
			valgrind $(EXEC) $(VALGRIND_TEST_PARAMS)

unit_tests: CFLAGS += --coverage
unit_tests: LDLIBS += -lcriterion
unit_tests: SRC += $(TU_SRC)
unit_tests: $(OBJ) $(TU_SRC:.c=.o) lib
			$(CC) $(OBJ) -o $(TU_NAME) $(LDFLAGS) $(LDLIBS) $(CFLAGS)

tests_run: 	unit_tests
			$(TU_EXEC)

tests_coverage: tests_run
				gcovr --exclude tests/
				gcovr --exclude tests/ --branches


.PHONY: all lib clean fclean re coding_style asan valgrind unit_tests tests_run tests_coverage
