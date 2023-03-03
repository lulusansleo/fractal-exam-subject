/*
** EPITECH PROJECT, 2022
** Array Library
** File description:
** Pop Array
*/

#include "array.h"

any *pop_array(array_c *a)
{
    array_n *n = a->last;
    if (!n)
        return NULL;
    any *v = malloc(sizeof(any));
    *v = n->value;

    a->last = n->previous;
    free(n);
    if (a->last)
        a->last->next = NULL;
    else
        a->first = NULL;
    a->length--;
    return v;
}
