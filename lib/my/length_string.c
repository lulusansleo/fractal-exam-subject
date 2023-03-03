/*
** EPITECH PROJECT, 2022
** String Library
** File description:
** Get String Length
*/

int my_length_string(char *str)
{
    int i;

    for (i = 0; str[i]; i++);
    return i;
}
