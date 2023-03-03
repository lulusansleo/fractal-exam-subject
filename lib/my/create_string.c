/*
** EPITECH PROJECT, 2022
** String Library
** File description:
** Create String
*/

#include <stdlib.h>

char *my_create_string(void)
{
    char *str = malloc(sizeof(char));
    str[0] = 0;
    return str;
}
