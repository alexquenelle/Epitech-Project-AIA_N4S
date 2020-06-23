/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** test_display_board.c
*/

#include "my.h"

Test(display_board, disp_board, .init = redirect_all_stdout)
{
    char *board[3] = {"Criterion", "Test", NULL};
    display_board(board, 1);
    cr_assert_stdout_eq_str("Criterion  Test  \n");
}

Test(my_strcat_add, concat_add_null)
{
    char *bfr = "Test";
    char *aft = "Criterion";
    char *get = "Test Criterion";
    char *copy = my_strcat_add(NULL, NULL, ' ');
    cr_assert_null(copy);
}