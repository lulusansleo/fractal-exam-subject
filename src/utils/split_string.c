/*
** EPITECH PROJECT, 2022
** String Library
** File description:
** Split String
*/

#include <stdlib.h>

static int str_include(const char c, const char *split)
{
    for (int i = 0; split[i] != 0; i++) {
        if (c == split[i])
            return 1;
    }
    return 0;
}

static int count_non_alpha(const char *str, const char *split)
{
    int n = 0;
    int has_count = 0;

    if (str[0] == 0) {
        return -1;
    }
    for (int i = 0; str[i] != 0; i++) {
        if (str_include(str[i], split)) {
            n = has_count ? n + 1 : n;
            has_count = 0;
        } else {
            has_count = 1;
        }
    }
    return has_count ? n : n - 1;
}

static int count_alpha(const char *str, const char *split)
{
    int i = 0;

    for (; str[i] != 0 && !str_include(str[i], split); i++);
    return i;
}

static int cpy_char(const char *str, char **element, const char *split,
    int *count)
{
    if (!str_include(str[0], split)) {
        if (*count == 0) {
            *element = malloc(sizeof(char *) * (count_alpha(str, split) + 1));
        }
        if (*element == NULL) {
            return -1;
        }
        (*element)[*count] = str[0];
        *count = *count + 1;
        return 0;
    }
    if (*count == 0) {
        return 0;
    }
    (*element)[*count] = 0;
    *count = 0;
    return 1;
}

char **split_string(const char *str, const char *split)
{
    int nb_split = count_non_alpha(str, split);
    char **array = malloc(sizeof(char *) * (nb_split + 2));
    int count = 0;
    int j = 0;
    int result_cp;

    array[nb_split + 1] = 0;
    for (int i = 0; str[i]; i++) {
        result_cp = cpy_char(&(str[i]), &(array[j]), split, &count);
        if (result_cp == -1) {
            return NULL;
        }
        j += result_cp;
    }
    if (count) {
        array[j][count] = 0;
    }
    return array;
}
