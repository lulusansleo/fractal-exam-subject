/*
** EPITECH PROJECT, 2022
** Array Library
** File description:
** Concat Array
*/

#include "array.h"

array_c *concat_array(array_c *a1, array_c *a2)
{
    a1->last->next = a2->first;
    a1->last->next->previous = a1->last;
    a1->last = a2->last;
    a1->length += a2->length;
    free(a2);
    return a1;
}
