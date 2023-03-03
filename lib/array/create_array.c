/*
** EPITECH PROJECT, 2022
** Array Library
** File description:
** Create Array
*/

#include "array.h"

array_c *create_array(void)
{
    array_c *a = malloc(sizeof(array_c));
    a->length = 0;
    a->first = NULL;
    a->last = NULL;
    return a;
}
