/*
** EPITECH PROJECT, 2022
** CPool-Day04
** File description:
** Task06 - Function my_sort_int_array
*/

void my_sort_int_array(int *array, int size)
{
    int i;
    int t;

    for (i = 0; i < size - 1; i++) {
        if (array[i] > array[i + 1]) {
            t = array[i];
            array[i] = array[i + 1];
            array[i + 1] = t;
            i -= 2;
        }
        if (i < -1)
            i = -1;
    }
}
