/*
** EPITECH PROJECT, 2022
** String Library
** File description:
** Split String
*/

#include <stdlib.h>

static int str_include(char c, char *split)
{
    for (int i = 0; split[i]; i++) {
        if (c == split[i])
            return 1;
    }
    return 0;
}

static int count_non_alpha(char const *str, char *split)
{
    int n = 0;
    int hasC = 0;

    if (!str[0])
        return -1;
    for (int i = 0; str[i]; i++) {
        if (str_include(str[i], split)) {
            n = hasC ? n + 1 : n;
            hasC = 0;
        } else
            hasC = 1;
    }
    return hasC ? n : n - 1;
}

static int count_alpha(char const *str, char *split)
{
    int i = 0;

    for (; str[i] && !str_include(str[i], split); i++);
    return i;
}

static int cpy_char(char *str, char **element, char *split, int *count)
{
    if (!str_include(str[0], split)) {
        if (!(*count))
            *element = malloc(sizeof(char *) * (count_alpha(str, split) + 1));
        (*element)[*count] = str[0];
        *count = *count + 1;
        return 0;
    }
    if (!(*count))
        return 0;
    (*element)[*count] = 0;
    *count = 0;
    return 1;
}

char **split_string(char *str, char *split)
{
    int nb_split = count_non_alpha(str, split);
    char **array = malloc(sizeof(char *) * (nb_split + 2));
    int count = 0;
    int a = 0;

    array[nb_split + 1] = 0;
    for (int i = 0; str[i]; i++) {
        a += cpy_char(&(str[i]), &(array[a]), split, &count);
    }
    if (count)
        array[a][count] = 0;
    return array;
}
