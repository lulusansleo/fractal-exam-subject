/*
** EPITECH PROJECT, 2022
** Array Library
** File description:
** Shift array
*/

#include "array.h"

any *shift_array(array_c *a)
{
    array_n *n = a->first;
    if (!n)
        return NULL;
    any *v = malloc(sizeof(any));
    *v = n->value;

    a->first = n->next;
    free(n);
    if (a->first)
        a->first->previous = NULL;
    else
        a->last = NULL;
    a->length--;
    return v;
}
