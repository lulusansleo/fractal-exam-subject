/*
** EPITECH PROJECT, 2022
** CPool-mini_printf
** File description:
** Flag - Digit
*/

#include <stdarg.h>

int my_put_nbr(int nb);
int my_int_len(int n);

int print_digit_flag(va_list ap)
{
    int i = va_arg(ap, int);
    my_put_nbr(i);
    return my_int_len(i);
}
