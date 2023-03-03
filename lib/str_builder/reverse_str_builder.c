/*
** EPITECH PROJECT, 2022
** Library String Builder
** File description:
** Reverse String Builder
*/

#include "str_builder.h"

str_builder_c *reverse_str_builder(str_builder_c *a)
{
    str_builder_n *tmp;

    for (str_builder_n *n = a->first; n; n = n->p) {
        tmp = n->n;
        n->n = n->p;
        n->p = tmp;
    }
    tmp = a->first;
    a->first = a->last;
    a->last = tmp;
    return a;
}
