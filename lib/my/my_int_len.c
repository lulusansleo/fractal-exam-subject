/*
** EPITECH PROJECT, 2022
** Library
** File description:
** Function my_int_len
*/

int my_int_len(int n)
{
    int i = 0;

    if (!n)
        return 1;
    for (i = 0; n != 0; i++) {
        n = n / 10;
    }
    return i;
}
