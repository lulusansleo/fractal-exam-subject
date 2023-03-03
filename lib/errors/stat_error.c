/*
** EPITECH PROJECT, 2023
** Errors Library
** File description:
** Stat Error
*/

#include "errors.h"

int errors_lib_putstr_error(const char *str);

int stat_error(const project_t *project, const char *file)
{
    errors_lib_putstr_error(project->name);
    errors_lib_putstr_error(": Stat error ! Reading \"");
    errors_lib_putstr_error(file);
    errors_lib_putstr_error("\"\n");
    return 84;
}
