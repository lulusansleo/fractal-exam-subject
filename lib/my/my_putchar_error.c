/*
** EPITECH PROJECT, 2022
** null
** File description:
** Function my_putchar.
** Print a char inshell.
*/

#include <unistd.h>

void my_putchar_error(char c)
{
    write(2, &c, 1);
}
