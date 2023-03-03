/*
** EPITECH PROJECT, 2022
** Array Library
** File description:
** Main header
*/

#include "bool.h"
#include "utils.h"

#ifndef ARRAY_H_
    #define ARRAY_H_

typedef struct array_node array_n;

struct array_node {
    any value;
    array_n *previous;
    array_n *next;
};

typedef struct array_container {
    unsigned int length;
    array_n *first;
    array_n *last;
} array_c;

typedef struct array_t {
    void(*clear)(array_c *a);
    array_c *(*concat)(array_c *a1, array_c *a2);
    array_c *(*copy)(array_c *a);
    array_c *(*create)(void);
    array_c *(*create_from)(any *tab, int len);
    bool(*equals)(array_c *a1, array_c *a2, bool(*cmp)(any, any));
    array_c *(*filter)(array_c *a, bool(*cb)(any));
    bool(*includes)(array_c *a, any e, bool(*cmp)(any, any));
    any *(*pop)(array_c *a);
    array_c *(*push)(array_c *a, any *e);
    array_c *(*reverse)(array_c *a);
    any *(*shift)(array_c *a);
    array_c *(*sort)(array_c *a, int(*cmp)(any, any));
    char *(*to_string)(array_c *a);
    array_c *(*unshift)(array_c *a, any *e);
} array_t;

extern const array_t Array;

#endif /* !ARRAY_H_ */
