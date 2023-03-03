/*
** EPITECH PROJECT, 2023
** String Library
** File description:
** Is String Alpha Num
*/

#include "./string.h"

static bool is_alpha_char(char c)
{
    return ('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z');
}

static bool is_num_char(char c)
{
    return ('0' <= c && c <= '9');
}

bool is_alpha_num_string(string str)
{
    bool a;
    bool n;
    for (int i = 0; str[i]; i++) {
        a = is_alpha_char(str[i]);
        n = is_num_char(str[i]);
        if (!(a || n))
            return false;
    }
    return true;
}
