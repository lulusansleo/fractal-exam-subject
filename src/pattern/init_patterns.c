/*
** EPITECH PROJECT, 2023
** B-CPE-210_fractals
** File description:
** Init patterns
*/

#include "lib/utils.h"
#include "funcs/utils.h"

string *init_pattern(const string pattern)
{
    return split_string(pattern, "@");
}
