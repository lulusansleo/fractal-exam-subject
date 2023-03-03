/*
** EPITECH PROJECT, 2022
** String Library
** File description:
** Clear String
*/

#include <stdlib.h>
#include "./string.h"

void clear_string(char *string)
{
    free(string);
}
