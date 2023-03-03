/*
** EPITECH PROJECT, 2022
** CPool-Day05
** File description:
** Task04 - Function my_compute_power_rec
*/

int int_mul_overflow(int a, int b);

int my_compute_power_rec(int nb, int p)
{
    int r;

    if (p < 0)
        return 0;
    if (p == 0)
        return 1;
    r = my_compute_power_rec(nb, p - 1);
    return int_mul_overflow(nb, r) ? nb * r : 0;
}
