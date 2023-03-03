/*
** EPITECH PROJECT, 2022
** String Library
** File description:
** Main header
*/

#include <aio.h>
#include "bool.h"
#include "utils.h"

#ifndef STRING_H_
    #define STRING_H_

typedef struct string_t {
    void(*clear)(string str);
    string (*concat)(string s1, string s2, bool clear);
    string (*copy)(string str);
    void (*display)(string str, int output);
    bool (*equals)(string a1, string a2);
    bool (*is_alpha_num)(string str);
    int(*length)(string str);
    string *(*split)(string str, string split);
} string_t;

extern const string_t String;

#endif /* !STRING_H_ */
