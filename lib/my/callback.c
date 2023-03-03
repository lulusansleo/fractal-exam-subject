/*
** EPITECH PROJECT, 2022
** CPool-mini_printf
** File description:
** Callback functions
*/

#include <stdarg.h>

int print_char_flag(va_list ap);
int print_digit_flag(va_list ap);
int print_int_flag(va_list ap);
int print_modulo_flag(va_list ap);
int print_string_flag(va_list ap);
int print_error_flag(va_list ap);
int my_char_array_contain(char const *array, char const c);

struct flag {
    char flag;
    int(*callback)(va_list ap);
};

const struct flag FLAGS_FUNCS[] = {
        {'c', &print_char_flag},
        {'d', &print_digit_flag},
        {'i', &print_int_flag},
        {'s', &print_string_flag},
        {'%', &print_modulo_flag},
        {0, &print_error_flag}
    };

const char FLAGS[] = {'i', 'c', 's', 'd', 0};

int get_flag_callback(char c, va_list ap)
{
    int i;

    for (i = 0; FLAGS_FUNCS[i].flag; i++) {
        if (FLAGS_FUNCS[i].flag == c)
            return FLAGS_FUNCS[i].callback(ap);
    }
    return FLAGS_FUNCS[i].callback(ap);
}

int has_flag_callback(char c)
{
    return my_char_array_contain(FLAGS, c) || c == '%';
}

int run_flag_callback(va_list ap, char c)
{
    return get_flag_callback(c, ap);
}
