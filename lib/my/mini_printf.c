/*
** EPITECH PROJECT, 2022
** CPool-mini_printf
** File description:
** Function mini_printf
*/

#include <stdarg.h>

void my_putchar(char c);

int has_flag_callback(char c);
int run_flag_callback(va_list ap, char c);

int mini_printf(const char *format, ...)
{
    int count = 0;
    int r = 0;
    va_list ap;

    va_start(ap, format);
    for (int i = 0; format[i]; i++) {
        r = r < 0 ? r : 0;
        if (format[i] == '%')
            r = run_flag_callback(ap, format[i + 1]);
        else {
            my_putchar(format[i]);
            count++;
        }
        if (has_flag_callback(format[i + 1]) && format[i] == '%')
            i++;
        if (r > 0)
            count += r;
    }
    va_end(ap);
    return r >= 0 ? count : -1;
}
