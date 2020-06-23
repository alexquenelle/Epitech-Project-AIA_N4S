/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2019
** File description:
** test_my_tools.c
*/

#include "my.h"

Test(my_atoi, my_atoi_neg)
{
    char *str = "-+-+-+159";
    int get = my_atoi(str);
    cr_assert_eq(get, -159);
}

Test(my_atoi, my_atoi_pos)
{
    char *str = "-+-++159";
    int get = my_atoi(str);
    cr_assert_eq(get, 159);
}

Test(my_strcmp, cmp_str)
{
    char *str1 = "This";
    char *str2 = "This";
    int get = my_strcmp(str1, str2);
    cr_assert_eq(get, 0);
}

Test(my_strlen, len_str_calc)
{
    char *str = "Test";
    int get = my_strlen(str);
    cr_assert_eq(get, 4);
}

Test(len_board, size_board)
{
    char *board[3] = {"Criterion", "Test", NULL};
    int get = len_board(board);
    cr_assert_eq(get, 2);
}