/*
** EPITECH PROJECT, 2022
** String Library
** File description:
** Push String
*/

#include <stdlib.h>

int my_length_string(char *str);
void my_clear_string(char *str);

char *my_push_string(char **str, char e)
{
    int length = my_length_string(*str);
    char *cpy = malloc(sizeof(char) * (length + 2));
    int i;

    for (i = 0; i < length; i++) {
        cpy[i] = (*str)[i];
    }
    cpy[i] = e;
    cpy[i + 1] = 0;
    my_clear_string(*str);
    *str = cpy;
    return *str;
}
