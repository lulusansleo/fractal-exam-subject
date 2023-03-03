/*
** EPITECH PROJECT, 2022
** Array Library
** File description:
** Reverse Array
*/

#include "array.h"

array_c *reverse_array(array_c *a)
{
    array_n *tmp;

    for (array_n *n = a->first; n; n = n->previous) {
        tmp = n->next;
        n->next = n->previous;
        n->previous = tmp;
    }
    tmp = a->first;
    a->first = a->last;
    a->last = tmp;
    return a;
}
