/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** test_find_str.c
*/

#include "my.h"

Test(find_str, str_found)
{
    char *str = "This is a Criterion Test";
    char *find = "Criterion";
    int get = find_str(str, find);
    cr_assert_eq(get, 1);
}

Test(find_str, str_not_found)
{
    char *str = "This is a Criterion Test";
    char *find = "Something";
    int get = find_str(str, find);
    cr_assert_eq(get, 0);
}