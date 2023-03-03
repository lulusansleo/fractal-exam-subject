/*
** EPITECH PROJECT, 2023
** Errors Library
** File description:
** Malloc Error
*/

#include "errors.h"

int errors_lib_putstr_error(const char *str);

int malloc_error(const project_t *project)
{
    errors_lib_putstr_error(project->name);
    errors_lib_putstr_error(": Malloc error !\n");
    return 84;
}
