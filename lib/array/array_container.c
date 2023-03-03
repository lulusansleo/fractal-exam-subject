/*
** EPITECH PROJECT, 2022
** Array Library
** File description:
** Array Container
*/

#include "array.h"

void clear_array(array_c *a);
array_c *concat_array(array_c *a1, array_c *a2);
array_c *copy_array(array_c *a);
array_c *create_array(void);
array_c *create_from_array(any *tab, int len);
bool equals_array(array_c *a1, array_c *a2, bool(*cmp)(any, any));
array_c *filter_array(array_c *a, bool(*cb)(any));
bool includes_array(array_c *a, any e, bool(*cmp)(any, any));
any *pop_array(array_c *a);
array_c *push_array(array_c *a, any *e);
array_c *reverse_array(array_c *a);
any *shift_array(array_c *a);
array_c *sort_array(array_c *a, int(*cmp)(any, any));
char *to_string_array(array_c *a);
array_c *unshift_array(array_c *a, any *e);

const array_t Array = {
    clear_array,
    concat_array,
    copy_array,
    create_array,
    create_from_array,
    equals_array,
    filter_array,
    includes_array,
    pop_array,
    push_array,
    reverse_array,
    shift_array,
    sort_array,
    to_string_array,
    unshift_array
};
