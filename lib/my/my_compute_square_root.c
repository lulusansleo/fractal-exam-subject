/*
** EPITECH PROJECT, 2022
** CPool-Day05
** File description:
** Task05 - Function my_compute_square_root
*/

static int my_compute_square_root_rec(int nb, int i)
{
    if (nb == 0)
        return 0;
    if (nb < i || nb < 0)
        return -(i + 1) / 2 + 1;
    return 1 + my_compute_square_root_rec(nb - i, i + 2);
}

int my_compute_square_root(int nb)
{
    if (nb < 0)
        return 0;
    return my_compute_square_root_rec(nb, 1);
}
