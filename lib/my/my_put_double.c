/*
** EPITECH PROJECT, 2022
** My Library
** File description:
** Function my_put_double
*/

int my_int_len(int n);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_compute_power_it(int nb, int p);

int my_put_double(double const nb)
{
    int e = (int)nb;
    int n = 6;
    int i = my_compute_power_it(10, n - 1);
    int d = (int)((nb - e) * (i * 10));

    my_put_nbr(e);
    my_putchar('.');
    for (i; i; i /= 10) {
        my_putchar((d / i) + '0');
        d %= i;
    }
    return my_int_len(e) + 1 + n;
}
