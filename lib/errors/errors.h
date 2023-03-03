/*
** EPITECH PROJECT, 2023
** Errors Library
** File description:
** Lib header
*/

#include "utils.h"

#ifndef ERRORS_H_
    #define ERRORS_H_

typedef struct errors_t {
    int (*malloc)(const project_t *project);
    int (*open)(const project_t *project, const char *file);
    int (*params)(const project_t *project);
    int (*read)(const project_t *project, const char *file);
    int (*stat)(const project_t *project, const char *file);
} errors_t;

extern const errors_t Errors;

#endif /* !ERRORS_H_ */
