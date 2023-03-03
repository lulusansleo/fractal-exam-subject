/*
** EPITECH PROJECT, 2022
** CPool-Day06
** File description:
** Task09 - Function my_strlowcase
*/

char my_charlowcase(char c)
{
    if ('A' <= c && 'Z' >= c)
        c = c + 32;
    return c;
}

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i]; i++) {
        str[i] = my_charlowcase(str[i]);
    }
    return str;
}
