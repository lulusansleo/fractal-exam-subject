/*
** EPITECH PROJECT, 2022
** Library String Builder
** File description:
** Create String Builder
*/

#include "str_builder.h"
#include "stdlib.h"

str_builder_c *create_str_builder(void)
{
    str_builder_c *a = malloc(sizeof(str_builder_c));
    a->length = 0;
    a->first = NULL;
    a->last = NULL;
    return a;
}
