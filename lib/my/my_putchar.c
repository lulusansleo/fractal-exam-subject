/*
** EPITECH PROJECT, 2022
** null
** File description:
** Function my_putchar.
** Print a char inshell.
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
