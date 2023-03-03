/*
** EPITECH PROJECT, 2023
** B-CPE-210_fractals
** File description:
** Errors functions
*/

#ifndef ERRORS_H_
    #define ERRORS_H_

    #include "../lib/bool.h"
    #include "../lib/utils.h"

boolean is_correct_params(const int ac);
boolean is_correct_patterns(const string *hash_pattern,
    const string *point_pattern);

#endif /* ERRORS_H_ */
