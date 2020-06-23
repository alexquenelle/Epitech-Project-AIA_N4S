/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** test_str_to_array.c
*/

#include "my.h"

Test(my_char_is_alpha, check_char)
{
    int ret = my_char_is_alpha('1');
    cr_assert_eq(1, ret);
}

Test(calc_arr_size, calc_letters_arr)
{
    int ret = calc_arr_size("1235");
    cr_assert_eq(5, ret);
}

Test(calc_str_len, calc_str)
{
    int ret = calc_str_len("1234", 0);
    cr_assert_eq(4, ret);
}

Test(copy_str_to_array, str_cpy_arr)
{
    char *str = copy_str_to_array("12345", 0);
    char *get = "12345";
    cr_assert_str_eq(get, str);
}

Test(convert, str_arr)
{
    char **board = convert("12345 6789", 1);
    char *get[3] = {"2345", "6789", NULL};
    cr_assert_arr_eq(get, board, 0);
}
