/*
** EPITECH PROJECT, 2022
** CPool-Day03
** File description:
** Task06 - Function my_put_nbr
*/

char *my_push_string(char **str, char e);
char *my_create_string(void);

void my_put_nbr_rec(char **str, int nb)
{
    if (nb < 0) {
        my_push_string(str, '-');
    }
    if (nb / 10 != 0) {
        if (nb / 10 > 0)
            my_put_nbr_rec(str, nb / 10);
        else
            my_put_nbr_rec(str, -(nb / 10));
    }
    if (nb % 10 < 0)
        my_push_string(str, -(nb % 10) + 48);
    else
        my_push_string(str, nb % 10 + 48);
}

char *my_put_nbr(int nb)
{
    char *str = my_create_string();
    my_put_nbr_rec(&str, nb);
    return str;
}
