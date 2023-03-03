/*
** EPITECH PROJECT, 2022
** Cpool-Day06
** File description:
** Task01 - Function my_strcpy
*/

char *my_strcpy(char *dest, char const *src)
{
    int i;

    for (i = 0; src[i]; i++)
        dest[i] = src[i];
    dest[i] = 0;
    return dest;
}
