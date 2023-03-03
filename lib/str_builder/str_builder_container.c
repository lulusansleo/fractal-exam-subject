/*
** EPITECH PROJECT, 2022
** Library String Builder
** File description:
** String Builder Container
*/

#include "str_builder.h"

char *build_str_builder(str_builder_c *a);
void clear_str_builder(str_builder_c *a);
str_builder_c *concat_str_builder(str_builder_c *a1, str_builder_c *a2);
str_builder_c *copy_str_builder(str_builder_c *a);
str_builder_c *create_from_str_builder(char *tab);
str_builder_c *create_str_builder(void);
char pop_str_builder(str_builder_c *a);
str_builder_c *push_str_builder(str_builder_c *a, char e);
str_builder_c *reverse_str_builder(str_builder_c *a);
char shift_str_builder(str_builder_c *a);
str_builder_c *unshift_str_builder(str_builder_c *a, char e);

const str_builder_t Str_Builder = {
        build_str_builder,
        clear_str_builder,
        concat_str_builder,
        copy_str_builder,
        create_from_str_builder,
        create_str_builder,
        pop_str_builder,
        push_str_builder,
        reverse_str_builder,
        shift_str_builder,
        unshift_str_builder,
};
