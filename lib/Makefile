##
## EPITECH PROJECT, 2022
## Library
## File description:
## Makefile 1
##

all:
		- mkdir ../includes
		- mkdir ../includes/lib
		$(MAKE) -C my
		$(MAKE) -C bool
		$(MAKE) -C utils

clean:
		- $(MAKE) -C my clean

fclean: clean
		- $(RM) *.a

re: fclean all

.PHONY: all clean fclean re
