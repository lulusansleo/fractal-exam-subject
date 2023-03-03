##
## EPITECH PROJECT, 2022
## Library
## File description:
## Makefile 1
##

all:
		- mkdir ../includes
		- mkdir ../includes/lib
		make -C my
		make -C array
		make -C str_builder
		make -C string
		make -C errors
		make -C bool
		make -C utils

clean:
		- make -C my clean
		- make -C array clean
		- make -C str_builder clean
		- make -C string clean
		- make -C errors clean

fclean: clean
		- rm *.a

re: fclean all

.PHONY: all clean fclean re
