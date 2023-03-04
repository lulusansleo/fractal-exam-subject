/*
** EPITECH PROJECT, 2023
** B-CPE-210_fractals
** File description:
** Core file
*/

#include "funcs/errors.h"
#include "funcs/pattern.h"
#include "funcs/iteration.h"
#include "funcs/utils.h"
#include "lib/utils.h"

int fractals(int ac, char * const *argv)
{
    string *hash_pattern;
    string *point_pattern;
    int iteration;

    if (!is_correct_params(ac)) {
        return ERROR_EXIT;
    }
    hash_pattern = init_pattern(argv[2]);
    point_pattern = init_pattern(argv[3]);
    if (!is_correct_patterns(hash_pattern, point_pattern)) {
        return ERROR_EXIT;
    }
    iteration = get_iteration(argv[1]);
    if (iteration < 0) {
        return ERROR_EXIT;
    }
    pattern_manager(iteration, hash_pattern, point_pattern);
    free_pattern(hash_pattern);
    free_pattern(point_pattern);
    return DEFAULT_EXIT;
}
