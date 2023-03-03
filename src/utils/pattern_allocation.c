/*
** EPITECH PROJECT, 2023
** B-CPE-210_fractals
** File description:
** memory allocation for patterns
*/

#include "lib/utils.h"

string *pattern_alloc(const int curr_size)
{
    string *pattern = malloc(sizeof (string) * (curr_size + 1));

    if (pattern == NULL) {
        return NULL;
    }
    for (int i = 0; i < curr_size; i++) {
        pattern[i] = malloc(sizeof (char) * (curr_size + 1));
        if (pattern[i] == NULL) {
            return NULL;
        }
        pattern[i][curr_size] = '\0';
    }
    pattern[curr_size] = NULL;
    return pattern;
}

void free_pattern(string *pattern_to_free)
{
    for (int i = 0; pattern_to_free[i] != NULL; i++) {
        free(pattern_to_free[i]);
    }
    free(pattern_to_free);
}
