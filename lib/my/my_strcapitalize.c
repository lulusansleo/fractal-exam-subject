/*
** EPITECH PROJECT, 2022
** CPool-Day06
** File description:
** Task10 - Function my_strcapitalize
*/

char *my_strlowcase(char *str);

char *my_strcapitalize(char *str)
{
    int canCap = 0;

    my_strlowcase(str);
    for (int i = 0; str[i] != '\0'; i++) {
        canCap = i == 0 ||
            !((str[i - 1] >= '0' && str[i - 1] <= '9' ) ||
            (str[i - 1] >= 'A' && str[i - 1] <= 'Z' ) ||
            (str[i - 1] >= 'a' && str[i - 1] <= 'z' ));
        if (canCap && 'a' <= str[i] && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    return str;
}
