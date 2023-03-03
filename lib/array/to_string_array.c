/*
** EPITECH PROJECT, 2022
** Array Library
** File description:
** toString function
*/

#include "array.h"

static int strlength(char const *str)
{
    int i;

    for (i = 0; str[i]; i++);
    return i;
}

static char *push_charstr(char **str, char c)
{
    char *copy = malloc(sizeof(char) * (strlength(*str) + 2));
    int i;

    for (i = 0; (*str)[i]; i++) {
        copy[i] = (*str)[i];
    }
    copy[i] = c;
    copy[i + 1] = 0;
    free(*str);
    *str = copy;
    return *str;
}

static char *push_strstr(char **str1, char *str2)
{
    for (int i = 0; str2[i]; i++) {
        push_charstr(str1, str2[i]);
    }
    return *str1;
}

static char *create_str(void)
{
    char *str = malloc(sizeof(char));
    str[0] = 0;
    return str;
}

char *to_string_array(array_c *a)
{
    char *str = create_str();
    array_n *n;

    push_charstr(&str, '[');
    for (n = a->first; n && n->next; n = n->next) {
        push_charstr(&str, '"');
        push_strstr(&str, (char *)n->value);
        push_strstr(&str, "\", ");
    }
    if (n) {
        push_charstr(&str, '"');
        push_strstr(&str, (char *)n->value);
        push_charstr(&str, '"');
    }
    push_charstr(&str, ']');
    return str;
}
