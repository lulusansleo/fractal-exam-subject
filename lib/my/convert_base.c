/*
** EPITECH PROJECT, 2022
** CPool-Day08
** File description:
** Task05 - Function convert_base
*/

#include <stdlib.h>

int my_getnbr_base(char const *str, char const *base);
int my_compute_power_it(int nb, int p);

char *my_putnbr_base(int nbr, char const *base)
{
    int max = 0;
    int isN = nbr < 0;
    int n = 0;
    int i;
    int p = 0;
    char *str;

    for (i = 0; base[i] != '\0'; i++);
    for (max = 0; my_compute_power_it(i, max + 1) &&
        nbr / my_compute_power_it(i, max + 1); max ++);
    str = malloc(sizeof(char) * ((max ? max : 1) + isN));
    if (isN)
        str[0] = '-';
    for (int j = max; j >= 0; j--) {
        p = my_compute_power_it(i, j);
        n = nbr / p;
        nbr = nbr % p;
        str[max - j + isN] = base[n];
    }
    return str;
}

char *convert_base(char const *nbr, char const *base_from, char const *base_to)
{
    return my_putnbr_base(my_getnbr_base(nbr, base_from), base_to);
}
