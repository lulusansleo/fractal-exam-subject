/*
** EPITECH PROJECT, 2022
** CPool-Day05
** File description:
** Task06 - Function my_is_prime
*/

static int my_is_prime_rec(int nb, int i)
{
    if (i > nb / 2)
        return 1;
    if (nb % i == 0)
        return 0;
    return my_is_prime_rec(nb, i + 1);
}

int my_is_prime(int nb)
{
    if (nb < 2)
        return 0;
    return my_is_prime_rec(nb, 2);
}
