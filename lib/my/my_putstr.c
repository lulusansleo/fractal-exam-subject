/*
** EPITECH PROJECT, 2022
** CPool-Day04
** File description:
** Task02 - Function my_putstr
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    for (int i = 0; str[i]; i++) {
        my_putchar(str[i]);
    }
    return 0;
}
