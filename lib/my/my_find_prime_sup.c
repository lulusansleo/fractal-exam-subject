/*
** EPITECH PROJECT, 2022
** CPool-Day05
** File description:
** Task07 - Function my_find_prime_sup
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    if (my_is_prime(nb))
        return nb;
    return my_find_prime_sup(nb + 1);
}
