/*
** EPITECH PROJECT, 2022
** CPool-Day06
** File description:
** Task14 - Function my_str_isupper
*/

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i]; i++) {
        if ('A' > str[i] || 'Z' < str[i])
            return 0;
    }
    return 1;
}
