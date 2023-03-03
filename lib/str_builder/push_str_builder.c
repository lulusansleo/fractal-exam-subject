/*
** EPITECH PROJECT, 2022
** Library String Builder
** File description:
** Push String Builder
*/

#include "str_builder.h"
#include "stdlib.h"

str_builder_c *push_str_builder(str_builder_c *a, char e)
{
    if (!e)
        return a;
    str_builder_n *n = malloc(sizeof(str_builder_n));

    n->n = NULL;
    n->p = a->last;
    n->c = e;
    a->last = n;
    if (!a->first)
        a->first = n;
    else
        a->last->p->n = n;
    a->length++;
    return a;
}
