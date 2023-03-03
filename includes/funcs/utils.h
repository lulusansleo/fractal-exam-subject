/*
** EPITECH PROJECT, 2023
** B-CPE-210_fractals
** File description:
** Utils functions
*/

#ifndef FRACTALS_H_
    #define FRACTALS_H_

char **split_string(const char *str, const char *split);
string *pattern_alloc(const int curr_size);
void free_pattern(string *pattern_to_free);

#endif /* FRACTALS_H_ */
