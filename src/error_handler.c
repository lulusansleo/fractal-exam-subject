/*
** EPITECH PROJECT, 2023
** B-CPE-210_fractals
** File description:
** Error Handler
*/

#include "lib/bool.h"
#include "lib/my.h"
#include "lib/utils.h"

boolean is_correct_params(const int ac)
{
    if (ac != 4) {
        my_putstr_error("fractals: Incorrect number of params !\n");
        return false;
    }
    return true;
}

static boolean is_correct_p_line(const string line, const int size)
{
    int i;

    for (i = 0; line[i]; i++) {
        if (line[i] != '#' && line[i] != '.') {
            return false;
        }
    }
    return i == size;
}

static boolean is_correct_pattern(const string *pattern, const int size)
{
    int p_size;
    int l_size;

    for (p_size = 0; pattern[p_size]; p_size++) {
        if (!is_correct_p_line(pattern[p_size], size)) {
            return false;
        }
    }
    return p_size == size;
}

boolean is_correct_patterns(const string *hash_pattern,
    const string *point_pattern)
{
    int size;
    boolean is_good_hash_p;
    boolean is_good_point_p;

    for (size = 0; hash_pattern[size]; size++);
    is_good_hash_p = is_correct_pattern(hash_pattern, size);
    is_good_point_p = is_correct_pattern(point_pattern, size);
    if (!is_good_hash_p || !is_good_point_p || size == 0) {
        my_putstr_error("fractals: Incorrect patterns !\n");
        return false;
    }
    return true;
}
