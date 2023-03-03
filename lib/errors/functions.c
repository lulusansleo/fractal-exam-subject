/*
** EPITECH PROJECT, 2023
** Errors Library
** File description:
** Utils functions
*/

#include <unistd.h>

static void errors_lib_putchar_error(const char c)
{
    write(2, &c, 1);
}

int errors_lib_putstr_error(const char *str)
{
    for (int i = 0; str[i]; i++) {
        errors_lib_putchar_error(str[i]);
    }
    return 84;
}
