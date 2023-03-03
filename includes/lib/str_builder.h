/*
** EPITECH PROJECT, 2022
** String Library
** File description:
** Main header
*/

#include <aio.h>

#ifndef STR_BUILDER_H_
    #define STR_BUILDER_H_

typedef struct str_builder_node str_builder_n;

struct str_builder_node {
    char c;
    str_builder_n *p;
    str_builder_n *n;
};

typedef struct str_builder_container {
    unsigned int length;
    str_builder_n *first;
    str_builder_n *last;
} str_builder_c;


typedef struct str_builder_t {
    char *(*build)(str_builder_c *a);
    void(*clear)(str_builder_c *a);
    str_builder_c *(*concat)(str_builder_c *a1, str_builder_c *a2);
    str_builder_c *(*copy)(str_builder_c *a);
    str_builder_c *(*create_from)(char *tab);
    str_builder_c *(*create)(void);
    char(*pop)(str_builder_c *a);
    str_builder_c *(*push)(str_builder_c *a, char e);
    str_builder_c *(*reverse)(str_builder_c *a);
    char(*shift)(str_builder_c *a);
    str_builder_c *(*unshift)(str_builder_c *a, char e);
} str_builder_t;

extern const str_builder_t Str_Builder;

#endif /* !STR_BUILDER_H_ */
