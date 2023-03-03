/*
** EPITECH PROJECT, 2022
** My Library
** File description:
** Function my_put_float
*/

int my_put_nbr(int nb);
void my_putchar(char c);

int my_put_float(float const nb)
{
    int i = (int)((nb + 0.0000001) * 100.0);

    my_put_nbr(i / 100);
    my_putchar('.');
    if (i % 100 < 10)
        my_putchar('0');
    if (i % 100)
        my_put_nbr(i % 100);
    else
        my_putchar('0');
    return 0;
}
