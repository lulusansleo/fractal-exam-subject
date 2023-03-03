/*
** EPITECH PROJECT, 2022
** Array Library
** File description:
** Sort Array
*/

#include "array.h"

array_c *copy_array(array_c *a);

static void swap_elements(array_n *n1, array_n *n2)
{
    any temp = n1->value;
    n1->value = n2->value;
    n2->value = temp;
}

array_c *sort_array(array_c *a, int(*cmp)(any, any))
{
    array_c *cpy = copy_array(a);

    for (array_n *n = a->first; n && n->next;) {
        if (cmp(n->value, n->next->value) > 0) {
            swap_elements(n, n->next);
            n = n->previous ? n->previous : n;
            continue;
        }
        n = n->next;
    }
    return cpy;
}
