/*
** EPITECH PROJECT, 2022
** Library String Builder
** File description:
** Create String Builder From String
*/

#include "str_builder.h"

str_builder_c *create_from_str_builder(char *tab)
{
    str_builder_c *a = Str_Builder.create();

    for (int i = 0; tab[i]; i++) {
        Str_Builder.push(a, tab[i]);
    }
    return a;
}
