/*
** EPITECH PROJECT, 2022
** CPool-Day04
** File description:
** Task02 - Function my_putstr
*/

#include <unistd.h>
#include "my.h"

int my_putstr_error(char const *str)
{
    write(2, str, my_strlen(str));
    return 84;
}
