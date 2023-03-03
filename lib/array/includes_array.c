/*
** EPITECH PROJECT, 2022
** Array Library
** File description:
** Includes Array
*/

#include "array.h"

bool includes_array(array_c *a, any e, bool(*cmp)(any, any))
{
    for (array_n *n = a->first; n; n = n->next) {
        if (cmp(n->value, e)) {
            return true;
        }
    }
    return false;
}
