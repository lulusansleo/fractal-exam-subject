/*
** EPITECH PROJECT, 2022
** Library String Builder
** File description:
** Unshift String Builder
*/

#include "str_builder.h"
#include "stdlib.h"

str_builder_c *unshift_str_builder(str_builder_c *a, char e)
{
    if (!e)
        return a;
    str_builder_n *n = malloc(sizeof(str_builder_n));

    n->p = NULL;
    n->n = a->first;
    n->c = e;
    a->first = n;
    if (!a->last)
        a->last = n;
    else
        a->first->n->p = n;
    a->length++;
    return a;
}
