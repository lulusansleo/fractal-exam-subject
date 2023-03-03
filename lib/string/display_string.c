/*
** EPITECH PROJECT, 2023
** String Library
** File description:
** Display String
*/

#include "./string.h"
#include "unistd.h"

void display_string(string str, int output)
{
    for (int i = 0; str[i]; i++) {
        write(output, &(str[i]), 1);
    }
}
