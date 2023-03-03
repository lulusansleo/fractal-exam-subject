/*
** EPITECH PROJECT, 2023
** B-CPE-210_fractals
** File description:
** Init patterns
*/

#include "lib/utils.c"
#include "funcs/utils.c"

string *init_pattern(const string pattern)
{
    return split_string(pattern, "@");
}
