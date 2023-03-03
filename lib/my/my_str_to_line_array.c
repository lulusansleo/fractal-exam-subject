/*
** EPITECH PROJECT, 2022
** CPool-Day08
** File description:
** Task04 - Function my_str_to_word_array
*/

#include <stdlib.h>

int is_alpha_num(char c)
{
    return c != '\n';
}

static int count_non_alpha(char const *str)
{
    int n = 0;
    int hasC = 0;

    if (!str[0])
        return -1;
    for (int i = 0; str[i]; i++) {
        if (!is_alpha_num(str[i])) {
            n = hasC ? n + 1 : n;
            hasC = 0;
        } else
            hasC = 1;
    }
    return n;
}

static int count_alpha(char const *str, int *words)
{
    int count = 0;

    words[0] = 0;
    for (int i = 0; str[i]; i++) {
        if (is_alpha_num(str[i]))
            words[count]++;
        else {
            count = !i || !is_alpha_num(str[i - 1]) ? count : count + 1;
            words[count] = 0;
        }
    }
    return 0;
}

static void malloc_array(char const *str,
    int *nWordArray, int nWords, char **words)
{
    count_alpha(str, nWordArray);
    for (int i = 0; i <= nWords; i++) {
        if (!nWordArray[i])
            break;
        words[i] = malloc(sizeof(char) * (nWordArray[i] + 1));
        words[i][nWordArray[i]] = '\0';
    }
}

char **my_str_to_line_array(char const *str)
{
    int nWords = count_non_alpha(str);
    char **words = malloc(sizeof(char *) * (nWords + 2));
    int *nWordArray = malloc(sizeof(int) * (nWords + 1));
    int count = 0;
    int countWord = 0;

    words[nWords + 1] = 0;
    malloc_array(str, nWordArray, nWords, words);
    for (int i = 0; str[i]; i++) {
        if (!nWordArray[count]) {
            words[count] = 0;
            break;
        }
        if (is_alpha_num(str[i]))
            words[count][countWord] = str[i];
        else
            count = !i || !is_alpha_num(str[i - 1]) ? count : count + 1;
        countWord = is_alpha_num(str[i]) ? countWord + 1 : 0;
    }
    return words;
}
