/*
** EPITECH PROJECT, 2022
** CPool-Day06
** File description:
** Task12 - Function my_str_isalpha
*/

int my_char_isalpha(char const c)
{
    return ('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z');
}

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i]; i++) {
        if (!my_char_isalpha(str[i]))
            return 0;
    }
    return 1;
}
