/*
** EPITECH PROJECT, 2022
** Library
** File description:
** Function my_array_contains
*/

int my_strcmp(char const *s1, char const *s2);

int my_char_array_contain(char const *array, char const c)
{
    for (int i = 0; array[i]; i++) {
        if (array[i] == c)
            return 1;
    }
    return 0;
}

int my_str_array_contain(char * const *array, char const *str)
{
    for (int i = 0; array[i]; i++) {
        if (my_strcmp(array[i], str) == 0)
            return 1;
    }
    return 0;
}
