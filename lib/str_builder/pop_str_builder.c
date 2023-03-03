/*
** EPITECH PROJECT, 2022
** Library String Builder
** File description:
** Pop String Builder
*/

#include "str_builder.h"
#include "stdlib.h"

char pop_str_builder(str_builder_c *a)
{
    str_builder_n *n = a->last;
    if (!n)
        return 0;
    char v = n->c;

    a->last = n->p;
    free(n);
    if (a->last)
        a->last->n = NULL;
    else
        a->first = NULL;
    a->length--;
    return v;
}
