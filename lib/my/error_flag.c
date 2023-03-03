/*
** EPITECH PROJECT, 2022
** CPool-mini_printf
** File description:
** Flag - Error
*/

#include <stdarg.h>

void my_putchar(char c);

int print_error_flag(va_list ap)
{
    my_putchar('%');
    return -1;
}
