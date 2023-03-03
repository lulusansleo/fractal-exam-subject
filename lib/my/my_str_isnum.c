/*
** EPITECH PROJECT, 2022
** CPool-Day06
** File description:
** Task13 - Function my_str_isnum
*/

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i]; i++) {
        if ('0' > str[i] || '9' < str[i])
            return 0;
    }
    return 1;
}
