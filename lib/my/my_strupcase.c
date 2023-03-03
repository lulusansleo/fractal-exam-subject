/*
** EPITECH PROJECT, 2022
** CPool-Day06
** File description:
** Task08 - Function my_strupcase
*/

char my_charupcase(char c)
{
    if ('a' <= c && 'z' >= c)
        c = c - 32;
    return c;
}

char *my_strupcase(char *str)
{
    for (int i = 0; str[i]; i++) {
        str[i] = my_charupcase(str[i]);
    }
    return str;
}
