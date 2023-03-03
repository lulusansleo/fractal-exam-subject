/*
** EPITECH PROJECT, 2022
** Library String Builder
** File description:
** Copy String Builder
*/

#include "str_builder.h"


str_builder_c *copy_str_builder(str_builder_c *a)
{
    str_builder_c *cpy = Str_Builder.create();

    for (str_builder_n *n = a->first; n; n = n->n) {
        Str_Builder.push(cpy, n->c);
    }
    return cpy;
}
