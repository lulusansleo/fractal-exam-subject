/*
** EPITECH PROJECT, 2022
** CPool-Day06
** File description:
** Task20 - Function my_showstr
*/

void my_putchar(char c);

int is_printable_char(char c)
{
    return c >= 32 && c != 127;
}

static char *get_hexa_chars(char *str, char c, char *base)
{
    str[1] = base[c / 16];
    str[2] = base[c % 16];
    return str;
}

char *get_printable_char(char *str, char c)
{
    if (is_printable_char(c)) {
        str[0] = c;
        str[1] = '\0';
        return str;
    }
    str[0] = '\\';
    str[3] = '\0';
    if (c == 127) {
        str[1] = '7';
        str[2] = 'f';
        return str;
    }
    return get_hexa_chars(str, c, "0123456789abcdef");

}

int my_showstr(char const *str)
{
    char chars[4] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        get_printable_char(chars, str[i]);
        for (int j = 0; chars[j] != '\0'; j++) {
            my_putchar(chars[j]);
        }
    }
    return 0;
}
