/*
** EPITECH PROJECT, 2022
** CPool-Day06
** File description:
** Task19 - Function my_getnbr_base
*/

int my_compute_power_it(int nb, int p);
int int_add_overflow(int a, int b);
int int_sub_overflow(int a, int b);
int int_mul_overflow(int a, int b);

static int get_nb_in_base(char c, char const *base, int ln)
{
    for (int i = 0; i < ln; i++) {
        if (c == base[i])
            return i;
    }
    return -1;
}

static int make_sum(int *n, int p, int e, int isN)
{
    if (e < 0 || !int_mul_overflow(isN ? -p : p , e))
        return 0;
    if (*n >= 0 && !isN) {
        if (!int_add_overflow(*n, p * e))
            return 0;
        *n += p * e;
        return 1;
    }
    if (!int_sub_overflow(*n, p * e))
        return 0;
    *n -= p * e;
    return 1;
}

int my_getnbr_base(char const *str, char const *base)
{
    int max = 0;
    int n = 0;
    int i;
    int k;
    int isN = 0;

    for (i = 0; base[i] != '\0'; i++);
    for (max = 0; str[max] != '\0'; max ++);
    for (k = 0; str[k] == '-' || str[k] == '+'; k++) {
        if (str[k] == '-')
            isN = !isN;
    }
    for (int j = 0; j + k < max; j++) {
        if (!make_sum(&n,
            my_compute_power_it(i, max - 1 - j - k),
            get_nb_in_base(str[j + k], base, i), isN))
            return 0;
    }
    return n;
}
