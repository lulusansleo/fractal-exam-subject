/*
** EPITECH PROJECT, 2022
** CPool-Day04
** File description:
** Task02 - Function my_putstr
*/

#include "my.h"

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return 0;
}
