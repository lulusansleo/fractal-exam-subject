/*
** EPITECH PROJECT, 2022
** CPool-Day04
** File description:
** Task05 - Function my_getint
*/

int my_getnbr_sign(char const *str);

static int add_nbr(int sign, int n, char c, int *itsOver)
{
    int newN;

    if (n == 0) {
        newN = n * 10 - '0' + c;
        if (sign < 0)
            newN = -newN;
    } else if (n > 0)
        newN = n * 10 - '0' + c;
    else
        newN = n * 10 + '0' - c;

    if ((newN <= n && n > 0) || (newN >= n && n < 0)) {
        *itsOver = 1;
        return 0;
    }
    return newN;
}

int my_getint(char const *str)
{
    int i;
    int state = 0;
    int itsOver = 0;
    int sign = my_getnbr_sign(str);
    int n = 0;

    for (i = 0; str[i]; i++) {
        if (!itsOver && str[i] > 47 && str[i] < 58) {
            state = 1;
            n = add_nbr(sign, n, str[i], &itsOver);
        }
        if (itsOver || (state && !(str[i] > 47 && str[i] < 58)) ||
            (!state && !(str[i] == '+' || str[i] == '-')))
            break;
    }
    if (itsOver)
        return 0;
    return n;
}
