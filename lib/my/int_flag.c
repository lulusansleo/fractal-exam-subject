/*
** EPITECH PROJECT, 2022
** CPool-mini_printf
** File description:
** Flag - Int
*/

#include <stdarg.h>

int my_put_nbr(int nb);
int my_int_len(int n);

int print_int_flag(va_list ap)
{
    int i = va_arg(ap, int);
    my_put_nbr(i);
    return my_int_len(i);
}
