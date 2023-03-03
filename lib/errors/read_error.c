/*
** EPITECH PROJECT, 2023
** Errors Library
** File description:
** Read Error
*/

#include "errors.h"

int errors_lib_putstr_error(const char *str);

int read_error(const project_t *project, const char *file)
{
    errors_lib_putstr_error(project->name);
    errors_lib_putstr_error(": Read error ! Reading \"");
    errors_lib_putstr_error(file);
    errors_lib_putstr_error("\"\n");
    return 84;
}
