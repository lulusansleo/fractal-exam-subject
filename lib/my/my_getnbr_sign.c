/*
** EPITECH PROJECT, 2022
** Library
** File description:
** Function my_getnbr_sign
*/

int my_getnbr_sign(char const *str)
{
    int r = 1;

    for (int i = 0; str[i] == '+' || str[i] == '-'; i++) {
        if (str[i] == '-')
            r *= -1;
    }
    return r;
}
