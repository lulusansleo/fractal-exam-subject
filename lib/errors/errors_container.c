/*
** EPITECH PROJECT, 2023
** Errors Library
** File description:
** Lib container
*/

#include "errors.h"

int malloc_error(const project_t *project);
int open_error(const project_t *project, const char *file);
int params_error(const project_t *project);
int read_error(const project_t *project, const char *file);
int stat_error(const project_t *project, const char *file);

const errors_t Errors = {
        malloc_error,
        open_error,
        params_error,
        read_error,
        stat_error
};
