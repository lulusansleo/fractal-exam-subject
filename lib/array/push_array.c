/*
** EPITECH PROJECT, 2022
** Array Library
** File description:
** Push In Array
*/

#include "array.h"

array_c *push_array(array_c *a, any *e)
{
    if (!e)
        return a;
    array_n *n = malloc(sizeof(array_n));

    n->next = NULL;
    n->previous = a->last;
    n->value = *e;
    a->last = n;
    if (!a->first)
        a->first = n;
    else
        a->last->previous->next = n;
    a->length++;
    return a;
}
