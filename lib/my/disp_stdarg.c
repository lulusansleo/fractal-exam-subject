/*
** EPITECH PROJECT, 2022
** CPool-mini_printf-bootstrap
** File description:
** Part C - Function disp_stdarg
*/

#include <stdarg.h>

int my_strlen(char const *str);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);

void disp_stdarg(char *s, ...)
{
    va_list ap;

    va_start(ap, s);
    for (int i = 0; s[i]; i++) {
        switch (s[i]) {
            case 'i':
                my_put_nbr(va_arg(ap, int));
                break;
            case 'c':
                my_putchar((char)va_arg(ap, int));
                break;
            case 's':
                my_putstr(va_arg(ap, char *));
                break;
        }
        my_putchar('\n');
    }
    va_end(ap);
}
