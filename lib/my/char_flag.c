/*
** EPITECH PROJECT, 2022
** CPool-mini_printf
** File description:
** Flag - Char
*/

#include <stdarg.h>

void my_putchar(char c);

int print_char_flag(va_list ap)
{
    my_putchar((char)va_arg(ap, int));
    return 1;
}
