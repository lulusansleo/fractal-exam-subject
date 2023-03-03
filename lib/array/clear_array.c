/*
** EPITECH PROJECT, 2022
** Array Library
** File description:
** Clear Array
*/

#include "array.h"

void clear_array(array_c *a)
{
    array_n *next;

    for (array_n *n = a->first; n; n = next) {
        next = n->next;
        free(n);
    }
    free(a);
}
