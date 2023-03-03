/*
** EPITECH PROJECT, 2022
** CPool-Day03
** File description:
** Task04 - Function my_isneg
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else
        my_putchar('P');
    my_putchar('\n');
    return (1);
}
