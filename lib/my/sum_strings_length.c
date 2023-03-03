/*
** EPITECH PROJECT, 2022
** CPool-mini_printf-bootstrap
** File description:
** Part B - Function sum_strings_length
*/

#include <stdarg.h>

int my_strlen(char const *str);

int sum_strings_length(int n, ...)
{
    int res = 0;
    va_list ap;

    va_start(ap, n);
    for (n; n; n--)
        res += my_strlen(va_arg(ap, char *));
    va_end(ap);
    return res;
}
