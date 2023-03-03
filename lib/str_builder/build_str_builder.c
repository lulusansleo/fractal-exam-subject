/*
** EPITECH PROJECT, 2022
** Library String Builder
** File description:
** Build function
*/

#include "str_builder.h"
#include "stdlib.h"

char *build_str_builder(str_builder_c *a)
{
    char *str = malloc(sizeof(char) * (a->length + 1));
    int i = 0;

    for (str_builder_n *n = a->first; n; n = n->n, i++) {
        str[i] = n->c;
    }
    str[i] = 0;
    return str;
}
