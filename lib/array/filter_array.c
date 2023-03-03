/*
** EPITECH PROJECT, 2022
** Array Library
** File description:
** Filter Array
*/

#include "array.h"

array_c *create_array(void);
array_c *push_array(array_c *a, any e);

array_c *filter_array(array_c *a, bool(*cb)(any))
{
    array_c *cpy = create_array();

    for (array_n *n = a->first; n; n = n->next) {
        if (cb(n->value)) {
            push_array(cpy, n->value);
        }
    }
    return cpy;
}
