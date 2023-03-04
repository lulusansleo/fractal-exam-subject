/*
** EPITECH PROJECT, 2023
** B-CPE-210_fractals
** File description:
** Iterations manager
*/

#include "lib/my.h"
#include "lib/utils.h"

int get_iteration(const string arg)
{
    int iteration;

    iteration = my_getint(arg);
    if (!arg[0] || !my_str_isnum(arg) || iteration < 0) {
        my_putstr_error("fractals: Incorrect nbr of iteration\n");
        return -1;
    }
    return iteration;
}
