/*
** EPITECH PROJECT, 2022
** CPool-Day08
** File description:
** Task03 - Function my_show_word_array
*/

void my_putchar(char c);

int my_show_word_array(char * const *tab)
{
    for (int i = 0; tab[i]; i++) {
        for (int j = 0; tab[i][j]; j++)
            my_putchar(tab[i][j]);
        my_putchar('\n');
    }
    return 0;
}
