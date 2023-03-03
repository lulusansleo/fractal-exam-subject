/*
** EPITECH PROJECT, 2022
** String Library
** File description:
** Copy String
*/

#include "./string.h"
#include "str_builder.h"

char *copy_string(char *str)
{
    str_builder_c *a = Str_Builder.create_from(str);
    char *cpy = Str_Builder.build(a);
    Str_Builder.clear(a);
    return cpy;
}
