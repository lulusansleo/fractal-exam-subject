/*
** EPITECH PROJECT, 2022
** Array Library
** File description:
** Create Array
*/

#include "array.h"

array_c *create_from_array(any *tab, int len)
{
    array_c *a = Array.create();


    for (int i = 0; i < len; i++) {
        Array.push(a, &tab[i]);
    }
    return a;
}
