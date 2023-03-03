/*
** EPITECH PROJECT, 2022
** CPool-Day05
** File description:
** Task03 - Function my_compute_power_it
*/

int int_mul_overflow(int a, int b);

int my_compute_power_it(int nb, int p)
{
    int r = 1;

    if (p < 0)
        return 0;
    for (int i = 0; i < p; i++) {
        if (!int_mul_overflow(r, nb))
            return 0;
        r = r * nb;
    }
    return r;
}
