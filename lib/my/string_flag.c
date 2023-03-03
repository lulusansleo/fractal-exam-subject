/*
** EPITECH PROJECT, 2022
** CPool-mini_printf
** File description:
** Flag - String
*/

#include <stdarg.h>

int my_putstr(char const *str);
int my_strlen(char const *str);

int print_string_flag(va_list ap)
{
    char *s = va_arg(ap, char *);
    my_putstr(s);
    return my_strlen(s);
}
