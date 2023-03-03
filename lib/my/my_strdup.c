/*
** EPITECH PROJECT, 2022
** CPool-Day08
** File description:
** Task01 - Function my_strdup
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    int i = my_strlen(src);
    char *dest = malloc(sizeof(int) * (i ? i : 1));

    if (i < 1)
        dest[0] = 0;
    for (int j = 0; j < i; j++)
        dest[j] = src[j];
    return dest;
}
