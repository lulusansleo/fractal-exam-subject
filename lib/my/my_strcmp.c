/*
** EPITECH PROJECT, 2022
** CPool-Day06
** File description:
** Task06 - Function my_strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] || s2[i]) {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return s1[i] - s2[i];
}
