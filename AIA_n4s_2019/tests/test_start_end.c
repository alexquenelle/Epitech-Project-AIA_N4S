/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** test_start_end.c
*/

#include "my.h"

Test(check_error_start, got_error)
{
    char s = '0';
    int get = check_error_start(s);
    cr_assert_eq(1, get);
}

Test(check_error_start, no_error)
{
    char s = '7';
    int get = check_error_start(s);
    cr_assert_eq(0, get);
}