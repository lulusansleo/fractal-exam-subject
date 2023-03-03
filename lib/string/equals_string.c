/*
** EPITECH PROJECT, 2023
** String Library
** File description:
** Equals String
*/

#include "./string.h"

bool equals_string(string a1, string a2)
{
    int i = 0;
    for (; a1[i] && a2[i]; i++) {
        if (a1[i] != a2[i])
            return false;
    }
    return !(a1[i] || a2[i]);
}
