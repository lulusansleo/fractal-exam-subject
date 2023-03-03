/*
** EPITECH PROJECT, 2022
** Library String Builder
** File description:
** Clear String Builder
*/

#include "str_builder.h"
#include "stdlib.h"

void clear_str_builder(str_builder_c *a)
{
    str_builder_n *next;

    for (str_builder_n *n = a->first; n; n = next) {
        next = n->n;
        free(n);
    }
    free(a);
}
