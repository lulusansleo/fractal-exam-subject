/*
** EPITECH PROJECT, 2022
** Array Library
** File description:
** Array Container
*/

#include "./string.h"

void clear_string(string str);
string concat_string(string s1, string s2, bool clear);
string copy_string(string str);
void display_string(string str, int output);
bool equals_string(string a1, string a2);
bool is_alpha_num_string(string str);
int length_string(string str);
string *split_string(string str, string split);

const string_t String = {
    clear_string,
    concat_string,
    copy_string,
    display_string,
    equals_string,
    is_alpha_num_string,
    length_string,
    split_string,
};
