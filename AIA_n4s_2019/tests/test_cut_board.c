/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** test_cut_board.c
*/

#include "my.h"

Test(my_array_size, get_size_array)
{
    char *board[3] = {
        "Criterion",
        "Test",
        NULL
    };
    int get = my_array_size(board);
    cr_assert_eq(get, 2);
}

Test(cut_board, cut_array)
{
    char *board[6] = {
        "This",
        "Is",
        "A",
        "Criterion",
        "Test",
        NULL
    };
    char *cmp[3] = {
        "This",
        "Is",
        NULL
    };
    char **get = cut_board(board, 5);
    cr_assert_arr_eq(get, cmp, 0);
}