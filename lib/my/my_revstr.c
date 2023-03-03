/*
** EPITECH PROJECT, 2022
** CPool-Day06
** File description:
** Task03 - Function my_revstr
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int ln = my_strlen(str);
    char c;

    for (int i = 0; i < ln / 2; i++) {
        c = str[i];
        str[i] = str[ln - i - 1];
        str[ln - i - 1] = c;
    }
    return str;
}
