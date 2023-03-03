/*
** EPITECH PROJECT, 2022
** Library String Builder
** File description:
** Shift String Builder
*/

#include "str_builder.h"
#include "stdlib.h"

char shift_str_builder(str_builder_c *a)
{
    str_builder_n *n = a->first;
    if (!n)
        return 0;
    char v = n->c;

    a->first = n->n;
    free(n);
    if (a->first)
        a->first->p = NULL;
    else
        a->last = NULL;
    a->length--;
    return v;
}
