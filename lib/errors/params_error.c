/*
** EPITECH PROJECT, 2023
** Errors Library
** File description:
** Params Error
*/

#include "errors.h"

int errors_lib_putstr_error(const char *str);

int params_error(const project_t *project)
{
    errors_lib_putstr_error(project->name);
    errors_lib_putstr_error(": Params error ! Please check \"");
    errors_lib_putstr_error(project->exe);
    errors_lib_putstr_error(" -h\" for help\n");
    return 84;
}
