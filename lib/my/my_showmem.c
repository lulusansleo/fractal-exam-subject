/*
** EPITECH PROJECT, 2022
** CPool-Day06
** File description:
** Task21 - Function my_showmem
*/

void my_putchar(char c);
int my_compute_power_it(int nb, int p);

static void print_adress(unsigned int c, char *base)
{
    int p;

    for (int i = 7; i >= 0; i--) {
        p = my_compute_power_it(16, i);
        my_putchar(base[c / p]);
        c = c % p;
    }

    my_putchar(':');
    my_putchar(' ');

}

static void print_char(char c, int *hasSpace, char *base, int isEnd)
{
    if (isEnd) {
        my_putchar(' ');
        my_putchar(' ');
    } else {
        my_putchar(base[c / 16]);
        my_putchar(base[c % 16]);
    }

    if (*hasSpace) {
        my_putchar(' ');
        *hasSpace = 0;
    } else
        *hasSpace = 1;
}

static void print_str(char const *str, int s, int size)
{
    for (int i = s; i - s < 16 && i < size; i++)
        my_putchar(32 > str[i] || str[i] == 127 ? '.' : str[i]);
}

int my_showmem(char const *str, int size)
{
    int hasSpace = 0;

    for (int i = 1; i < size; i++) {

        print_adress((unsigned int)str + i, "0123456789abcdef");
        for (; i % 16 != 0; i++)
            print_char(str[i - 1], &hasSpace, "0123456789abcdef",
                i - 1 >= size);
        print_char(str[i - 1], &hasSpace, "0123456789abcdef", i - 1 >= size);
        print_str(str, i - 16, size);
        hasSpace = 0;
        my_putchar('\n');
    }
    return 0;
}
