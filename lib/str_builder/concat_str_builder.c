/*
** EPITECH PROJECT, 2022
** Library String Builder
** File description:
** Concat String Builder
*/

#include "str_builder.h"
#include "stdlib.h"

str_builder_c *concat_str_builder(str_builder_c *a1, str_builder_c *a2)
{
    a1->last->n = a2->first;
    a1->last->n->p = a1->last;
    a1->last = a2->last;
    a1->length += a2->length;
    free(a2);
    return a1;
}
