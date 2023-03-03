/*
** EPITECH PROJECT, 2022
** CPool-Day06
** File description:
** Task02 - Function my_strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    for (i = 0; src[i] && i < n; i++) {
        dest[i] = src[i];
    }
    if (i < n)
        dest[i] = 0;
    return dest;
}
