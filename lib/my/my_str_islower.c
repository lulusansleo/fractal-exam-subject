/*
** EPITECH PROJECT, 2022
** CPool-Day06
** File description:
** Task14 - Function my_str_islower
*/

int my_str_islower(char const *str)
{
    for (int i = 0; str[i]; i++) {
        if ('a' > str[i] || 'z' < str[i])
            return 0;
    }
    return 1;
}
