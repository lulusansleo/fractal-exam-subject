/*
** EPITECH PROJECT, 2023
** B-CPE-210_fractals
** File description:
** pattern manager
*/

#include "lib/utils.h"
#include "lib/my.h"
#include "lib/bool.h"
#include "funcs/utils.h"

static string *pattern_initializer(void)
{
    string *pattern = malloc(sizeof (string) * 2);

    if (pattern == NULL) {
        return NULL;
    }
    pattern[0] = malloc(sizeof (char) * 2);
    if (pattern[0] == NULL) {
        return NULL;
    }
    pattern[0][0] = '#';
    pattern[0][1] = '\0';
    pattern[1] = NULL;
    return pattern;
}

static void print_pattern(string const *pattern)
{
    for (int i = 0; pattern[i]; i++) {
        my_putstr(pattern[i]);
        my_putchar('\n');
    }
}

static void write_pattern(vector_t coord, string *prev_pattern,
    string const *to_write_pattern,
    string *pattern)
{
    int size = my_strlen(to_write_pattern[0]);
    int x = 0;
    int y = 0;

    for (int i = coord.y * size; i < coord.y * size + size; x++, i++) {
        for (int j = coord.x * size; j < coord.w * size + size; y++, j++) {
            pattern[i][j] = to_write_pattern[x][y];
        }
    }
}

static string *recursive_pattern(string *prev_pattern,
    string const *hash_pattern,
    string const *point_pattern,
    const int pattern_size)
{
    int prev_size
    int curr_size = my_strlen(prev_pattern[0]) * pattern_size;
    string *pattern = pattern_alloc(curr_size);
    vector_t coord = {0, 0};
    string const *to_write_pattern;
    boolean is_hash;

    for (int i = 0; i < prev_size; i++) {
        coord.y = i;
        for (int j = 0; j < prev_size; j++) {
            coord.x = j;
            is_hash = prev_pattern[i][j] == '#';
            current_pattern = is_hash ? hash_pattern : point_pattern;
            write_pattern(coord, prev_pattern, to_write_pattern, pattern);
        }
    }
    free_pattern(prev_pattern);
    return pattern;
}

void pattern_manager(const int iterations, const string *hash_pattern,
    const string *point_pattern)
{
    string *previous_pattern = pattern_initializer();

    if (previous_pattern == NULL) {
        return;
    }
    for (int i = 0; i < iterations, i++) {
        prev_pattern = recursive_pattern(prev_pattern,
            hash_pattern, point_pattern);
    }
    print_pattern(prev_pattern);
    free_pattern(prev_pattern);
    return;
}
