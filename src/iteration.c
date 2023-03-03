/*
** EPITECH PROJECT, 2023
** B-CPE-210_fractals
** File description:
** Iterations manager
*/

#include "lib/my.h"
#include "lib/utils.h"

int get_iteration(string arg)
{
    int iteration;

    iteration = my_getint(arg);
    if (!my_str_isnum(arg) || iteration < 0) {
        my_putstr_error("fractals: Incorrect nbr of iteration");
        return -1;
    }
    return iteration;
}
