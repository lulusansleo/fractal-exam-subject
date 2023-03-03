/*
** EPITECH PROJECT, 2022
** String Library
** File description:
** Concat String
*/

#include "./string.h"
#include "str_builder.h"

char *concat_string(char *s1, char *s2, bool clear)
{
    str_builder_c *a1 = Str_Builder.create_from(s1);
    str_builder_c *a2 = Str_Builder.create_from(s2);
    char *str;

    Str_Builder.concat(a1, a2);
    str = Str_Builder.build(a1);
    Str_Builder.clear(a1);
    if (clear) {
        String.clear(s1);
        String.clear(s2);
    }
    return str;
}
