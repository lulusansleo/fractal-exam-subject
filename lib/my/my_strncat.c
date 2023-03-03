/*
** EPITECH PROJECT, 2022
** CPool-Day07
** File description:
** Task03 - Function my_strncat
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int	i = my_strlen(dest);
    int j = 0;

    for (j = 0; src[j] && j < nb; j++)
        dest[i + j] = src[j];
    dest[i + j] = 0;
    return dest;
}
