/*
** EPITECH PROJECT, 2022
** null
** File description:
** Functions for determinate an int overflow
*/

int int_add_overflow(int a, int b)
{
    if (!a || !b)
        return 1;
    if ((a > 0 && b < 0) || (a < 0 && b > 0))
        return 1;
    return a > 0 ? a <= 2147483647 - b : a >= -2147483648 + b;
}

int int_sub_overflow(int a, int b)
{
    if (!a || !b)
        return 1;
    if ((a > 0 && b > 0) || (a < 0 && b < 0))
        return 1;
    return a > 0 ? a <= 2147483647 + b : a >= -2147483648 + b;
}

int int_mul_overflow(int a, int b)
{
    if (!a || !b)
        return 1;
    if ((a > 0 && b > 0) || (a < 0 && b < 0))
        return a > 0 ? a <= 2147483647 / b : a >= 2147483647 / b;
    return a > 0 ? a <= -2147483648 / b : a >= -2147483648 / b;
}
