/*
** EPITECH PROJECT, 2022
** Library utils
** File description:
** Utils elements
*/

#include <stdlib.h>

#ifndef UTILS_H
    #define UTILS_H

typedef size_t any;

typedef char * string;
typedef string str;

typedef struct project {
    char *name;
    char *exe;
    int min_args;
    int max_args;
} project_t;

#endif //UTILS_H
