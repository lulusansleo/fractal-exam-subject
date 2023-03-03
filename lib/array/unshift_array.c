/*
** EPITECH PROJECT, 2022
** Array Library
** File description:
** Unshift array
*/

#include "array.h"

array_c *unshift_array(array_c *a, any *e)
{
    if (!e)
        return a;
    array_n *n = malloc(sizeof(array_n));

    n->previous = NULL;
    n->next = a->first;
    n->value = *e;
    a->first = n;
    if (!a->last)
        a->last = n;
    else
        a->first->next->previous = n;
    a->length++;
    return a;
}
