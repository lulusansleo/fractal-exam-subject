##
## EPITECH PROJECT, 2022
## Library
## File description:
## Makefile 1
##

SRC =	my_compute_power_rec.c \
		my_int_overflow.c \
		my_putstr.c \
		my_sort_int_array.c \
		my_strdup.c \
		my_str_isupper.c \
		my_strncpy.c \
		convert_base.c \
		my_compute_square_root.c \
		my_isneg.c \
		my_revstr.c \
		my_strcapitalize.c \
		my_str_isalpha.c \
		my_strlen.c \
		my_strstr.c \
		my_find_prime_sup.c \
		my_is_prime.c \
		my_showmem.c \
		my_strcat.c \
		my_str_islower.c \
		my_strlowcase.c \
		my_str_to_word_array.c \
		my_getnbr_base.c \
		my_putchar.c \
		my_showstr.c \
		my_strcmp.c \
		my_str_isnum.c \
		my_strncat.c \
		my_strupcase.c \
		my_compute_power_it.c \
		my_getint.c \
		my_put_nbr.c \
		my_show_word_array.c \
		my_strcpy.c \
		my_str_isprintable.c \
		my_strncmp.c \
		my_swap.c \
		my_putchar_error.c \
		my_putstr_error.c \
		my_put_float.c \
		my_abs.c \
		my_str_to_line_array.c \
		my_int_len.c \
		my_getnbr_sign.c \
		sum_numbers.c \
		sum_strings_length.c \
		disp_stdarg.c \
		my_array_contains.c \
		my_put_double.c \
		mini_printf.c \
		int_flag.c \
		char_flag.c \
		digit_flag.c \
		callback.c \
		error_flag.c \
		string_flag.c \
		modulo_flag.c \
		clear_string.c \
		length_string.c \
		push_string.c \
		create_string.c

OBJ = 	$(SRC:.c=.o)

NAME = 	my
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
