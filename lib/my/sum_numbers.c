/*
** EPITECH PROJECT, 2022
** Cpool-mini_printf-bootstrap
** File description:
** Part A - Function sum_numbers
*/

#include <stdarg.h>

int sum_numbers(int n, ...)
{
    int res = 0;
    va_list ap;

    va_start(ap, n);
    for (n; n; n--)
        res += va_arg(ap, int);
    va_end(ap);
    return res;
}
