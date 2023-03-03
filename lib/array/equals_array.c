/*
** EPITECH PROJECT, 2023
** Array Library
** File description:
** Equals Array
*/

#include "array.h"

bool equals_array(array_c *a1, array_c *a2, bool(*cmp)(any, any))
{
    array_n *n1 = a1->first;
    array_n *n2 = a2->first;
    for (; n1 && n2;) {
        if (!cmp(n1->value, n2->value))
            return false;
        n1 = n1->next;
        n2 = n2->next;
    }
    return !(n1 || n2);
}
