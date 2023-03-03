/*
** EPITECH PROJECT, 2022
** My Library
** File description:
** Main header
*/

#ifndef MY_H_
    #define MY_H_

char *convert_base(char const *nbr, char const *base_from, char const *base_to);

char *get_printable_char(char *str, char c);

int int_add_overflow(int a, int b);

int int_sub_overflow(int a, int b);

int int_mul_overflow(int a, int b);

int is_alpha_num(char c);

int is_printable_char(char c);

int my_char_isalpha(char const c);

char my_charlowcase(char c);

char my_charupcase(char c);

int my_compute_power_it(int nb, int p);

int my_compute_power_rec(int nb, int p);

int my_compute_square_root(int nb);

int my_find_prime_sup(int nb);

float my_float_abs(float nb);

int my_getint(char const *str);

int my_getnbr_base(char const *str, char const *base);

int my_getnbr_sign(char const *str);

int my_int_abs(int nb);

int my_int_len(int n);

int my_is_prime(int nb);

int my_isneg(int n);

int my_put_double(double const nb);

char *my_put_nbr(int nb);

int my_put_float(float const nb);

void my_putchar(char c);

void my_putchar_error(char c);

char *my_putnbr_base(int nbr, char const *base);

int my_putstr(char const *str);

int my_putstr_error(char const *str);

char *my_revstr(char *str);

int my_show_word_array(char * const *tab);

int my_showmem(char const *str, int size);

int my_showstr(char const *str);

void my_sort_int_array(int *array, int size);

int my_str_isalpha(char const *str);

int my_str_islower(char const *str);

int my_str_isnum(char const *str);

int my_str_isprintable(char const *str);

int my_str_isupper(char const *str);

char **my_str_to_line_array(char const *str);

char **my_str_to_word_array(char const *str);

char *my_strcapitalize(char *str);

char *my_strcat(char *dest, char const *src);

int my_strcmp(char const *s1, char const *s2);

char *my_strcpy(char *dest, char const *src);

char *my_strdup(char const *src);

int my_strlen(char const *str);

char *my_strlowcase(char *str);

char *my_strncat(char *dest, char const *src, int nb);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strncpy(char *dest, char const *src, int n);

char *my_strstr(char *str, char const *to_find);

char *my_strupcase(char *str);

void my_swap(int *a, int *b);

int sum_numbers(int n, ...);

int sum_strings_length(int n, ...);

void disp_stdarg(char *s, ...);

int my_char_array_contain(char const *array, char const c);

int my_str_array_contain(char * const *array, char const *str);

int mini_printf(const char *format, ...);

#endif

// my_str_split
